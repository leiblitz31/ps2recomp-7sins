#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00179E90
// Address: 0x179e90 - 0x17a0d0
void sub_00179E90_0x179e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179E90_0x179e90");
#endif

    switch (ctx->pc) {
        case 0x179efcu: goto label_179efc;
        case 0x179f6cu: goto label_179f6c;
        case 0x179fb8u: goto label_179fb8;
        case 0x179fe0u: goto label_179fe0;
        case 0x17a004u: goto label_17a004;
        case 0x17a048u: goto label_17a048;
        case 0x17a078u: goto label_17a078;
        case 0x17a088u: goto label_17a088;
        case 0x17a0b4u: goto label_17a0b4;
        default: break;
    }

    ctx->pc = 0x179e90u;

    // 0x179e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x179e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x179e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179ea0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x179ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x179ea4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x179ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x179ea8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x179ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x179eac: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x179eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x179eb0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x179eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179eb4: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x179EB4u;
    {
        const bool branch_taken_0x179eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179eb4) {
            ctx->pc = 0x17A0B4u;
            goto label_17a0b4;
        }
    }
    ctx->pc = 0x179EBCu;
    // 0x179ebc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x179ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179ec0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x179ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x179ec4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x179ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179ec8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x179ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x179ecc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x179eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179ed0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x179ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x179ed4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x179ed4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x179ed8: 0x1812  mflo        $v1
    ctx->pc = 0x179ed8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x179edc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x179edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179ee0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x179ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x179ee4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x179EE4u;
    {
        const bool branch_taken_0x179ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179ee4) {
            ctx->pc = 0x17A090u;
            goto label_17a090;
        }
    }
    ctx->pc = 0x179EECu;
    // 0x179eec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x179eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x179ef0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x179ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179ef4: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x179EF4u;
    SET_GPR_U32(ctx, 31, 0x179EFCu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x179EF4u, 0x179EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179EFCu;
label_179efc:
    // 0x179efc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x179efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179f00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x179f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x179f04: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x179f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179f08: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x179f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179f0c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x179f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x179f10: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x179f10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x179f14: 0x8812  mflo        $s1
    ctx->pc = 0x179f14u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x179f18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x179f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179f1c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x179f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x179f20: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x179f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179f24: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x179f24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x179f28: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x179F28u;
    {
        const bool branch_taken_0x179f28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179f28) {
            ctx->pc = 0x179FE8u;
            goto label_179fe8;
        }
    }
    ctx->pc = 0x179F30u;
    // 0x179f30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x179f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179f34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x179f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x179f38: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x179f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179f3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x179f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x179f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179f44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x179f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179f48: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x179f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x179f4c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x179f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179f50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x179f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179f54: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x179f54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x179f58: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x179f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x179f5c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x179f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x179f60: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x179f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x179f64: 0xc05e94c  jal         func_17A530
    ctx->pc = 0x179F64u;
    SET_GPR_U32(ctx, 31, 0x179F6Cu);
    ctx->pc = 0x17A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A530u, 0x179F64u, 0x179F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179F6Cu;
label_179f6c:
    // 0x179f6c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x179f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179f70: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x179f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179f74: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x179f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x179f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179f7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x179f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179f80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x179f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179f84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179f88: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x179f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x179f8c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x179f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179f90: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x179f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x179f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179f98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179f9c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x179f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179fa0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x179fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x179fa4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x179fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179fa8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x179fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179fac: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x179facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x179fb0: 0xc05e91c  jal         func_17A470
    ctx->pc = 0x179FB0u;
    SET_GPR_U32(ctx, 31, 0x179FB8u);
    ctx->pc = 0x17A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A470u, 0x179FB0u, 0x179FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179FB8u;
label_179fb8:
    // 0x179fb8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x179fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179fbc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x179fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x179fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179fc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x179fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179fc8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x179fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179fcc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x179fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179fd0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x179fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179fd4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x179fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x179fd8: 0xc05e904  jal         func_17A410
    ctx->pc = 0x179FD8u;
    SET_GPR_U32(ctx, 31, 0x179FE0u);
    ctx->pc = 0x17A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A410u, 0x179FD8u, 0x179FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179FE0u;
label_179fe0:
    // 0x179fe0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x179FE0u;
    {
        const bool branch_taken_0x179fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179fe0) {
            ctx->pc = 0x17A078u;
            goto label_17a078;
        }
    }
    ctx->pc = 0x179FE8u;
label_179fe8:
    // 0x179fe8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x179fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179fec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x179fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179ff0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x179ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179ff4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x179ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x179ff8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x179ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x179ffc: 0xc05e8f4  jal         func_17A3D0
    ctx->pc = 0x179FFCu;
    SET_GPR_U32(ctx, 31, 0x17A004u);
    ctx->pc = 0x17A3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3D0u, 0x179FFCu, 0x17A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A004u;
label_17a004:
    // 0x17a004: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a008: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x17a008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17a00c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17a010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a014: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17a014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a018: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x17a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a01c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17a020: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17a024: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17a024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x17a028: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a02c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x17a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a030: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x17a030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a038: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17a038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17a03c: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x17a03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x17a040: 0xc05e94c  jal         func_17A530
    ctx->pc = 0x17A040u;
    SET_GPR_U32(ctx, 31, 0x17A048u);
    ctx->pc = 0x17A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A530u, 0x17A040u, 0x17A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A048u;
label_17a048:
    // 0x17a048: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a04c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17a050: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17a054: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17a054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a058: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17a05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a060: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x17a060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x17a064: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x17a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a06c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17a070: 0xc05e904  jal         func_17A410
    ctx->pc = 0x17A070u;
    SET_GPR_U32(ctx, 31, 0x17A078u);
    ctx->pc = 0x17A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A410u, 0x17A070u, 0x17A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A078u;
label_17a078:
    // 0x17a078: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17a078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17a07c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a080: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17A080u;
    SET_GPR_U32(ctx, 31, 0x17A088u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17A080u, 0x17A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A088u;
label_17a088:
    // 0x17a088: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17A088u;
    {
        const bool branch_taken_0x17a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a088) {
            ctx->pc = 0x17A0B4u;
            goto label_17a0b4;
        }
    }
    ctx->pc = 0x17A090u;
label_17a090:
    // 0x17a090: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x17a090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a094: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17a094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a098: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x17a098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a09c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x17a09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17a0a0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17a0a4: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x17a0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a0a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17a0a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a0ac: 0xc05e834  jal         func_17A0D0
    ctx->pc = 0x17A0ACu;
    SET_GPR_U32(ctx, 31, 0x17A0B4u);
    ctx->pc = 0x17A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A0D0u, 0x17A0ACu, 0x17A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0B4u;
label_17a0b4:
    // 0x17a0b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a0c0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x17a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17a0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A0CCu;
    // 0x17a0cc: 0x0  nop
    ctx->pc = 0x17a0ccu;
    // NOP
    ctx->pc = 0x17a0d0u;
}
