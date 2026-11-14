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

// Function: sub_001E7E50
// Address: 0x1e7e50 - 0x1e8090
void sub_001E7E50_0x1e7e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7E50_0x1e7e50");
#endif

    switch (ctx->pc) {
        case 0x1e7ebcu: goto label_1e7ebc;
        case 0x1e7f2cu: goto label_1e7f2c;
        case 0x1e7f78u: goto label_1e7f78;
        case 0x1e7fa0u: goto label_1e7fa0;
        case 0x1e7fc4u: goto label_1e7fc4;
        case 0x1e8008u: goto label_1e8008;
        case 0x1e8038u: goto label_1e8038;
        case 0x1e8048u: goto label_1e8048;
        case 0x1e8074u: goto label_1e8074;
        default: break;
    }

    ctx->pc = 0x1e7e50u;

    // 0x1e7e50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e7e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e7e54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7e60: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e7e64: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e7e68: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1e7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1e7e6c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1e7e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1e7e70: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7e74: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1E7E74u;
    {
        const bool branch_taken_0x1e7e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7e74) {
            ctx->pc = 0x1E8074u;
            goto label_1e8074;
        }
    }
    ctx->pc = 0x1E7E7Cu;
    // 0x1e7e7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7e80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7e84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7e88: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7e8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7e90: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e7e94: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7e94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e7e98: 0x1812  mflo        $v1
    ctx->pc = 0x1e7e98u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e7e9c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7ea0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e7ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7ea4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1E7EA4u;
    {
        const bool branch_taken_0x1e7ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ea4) {
            ctx->pc = 0x1E8050u;
            goto label_1e8050;
        }
    }
    ctx->pc = 0x1E7EACu;
    // 0x1e7eac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e7eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7eb0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1e7eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7eb4: 0xc07a15c  jal         func_1E8570
    ctx->pc = 0x1E7EB4u;
    SET_GPR_U32(ctx, 31, 0x1E7EBCu);
    ctx->pc = 0x1E8570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8570u, 0x1E7EB4u, 0x1E7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7EBCu;
label_1e7ebc:
    // 0x1e7ebc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7ec0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7ec4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7ec8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7ecc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e7ed0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7ed0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e7ed4: 0x8812  mflo        $s1
    ctx->pc = 0x1e7ed4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1e7ed8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7edc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1e7edcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7ee0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7ee4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1e7ee4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7ee8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E7EE8u;
    {
        const bool branch_taken_0x1e7ee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ee8) {
            ctx->pc = 0x1E7FA8u;
            goto label_1e7fa8;
        }
    }
    ctx->pc = 0x1E7EF0u;
    // 0x1e7ef0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7ef4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1e7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7ef8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7efc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7f04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7f08: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1e7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e7f0c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7f10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7f14: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1e7f14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7f18: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e7f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7f1c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e7f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7f20: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e7f24: 0xc07a13c  jal         func_1E84F0
    ctx->pc = 0x1E7F24u;
    SET_GPR_U32(ctx, 31, 0x1E7F2Cu);
    ctx->pc = 0x1E84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E84F0u, 0x1E7F24u, 0x1E7F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F2Cu;
label_1e7f2c:
    // 0x1e7f2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7f30: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7f34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7f3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7f40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e7f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7f48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e7f4c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e7f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7f50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7f58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7f5c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1e7f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e7f60: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e7f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7f64: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7f68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f6c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e7f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e7f70: 0xc07a10c  jal         func_1E8430
    ctx->pc = 0x1E7F70u;
    SET_GPR_U32(ctx, 31, 0x1E7F78u);
    ctx->pc = 0x1E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8430u, 0x1E7F70u, 0x1E7F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F78u;
label_1e7f78:
    // 0x1e7f78: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7f7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7f84: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7f88: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7f8c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e7f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7f90: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7f94: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e7f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7f98: 0xc07a0f4  jal         func_1E83D0
    ctx->pc = 0x1E7F98u;
    SET_GPR_U32(ctx, 31, 0x1E7FA0u);
    ctx->pc = 0x1E83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E83D0u, 0x1E7F98u, 0x1E7FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FA0u;
label_1e7fa0:
    // 0x1e7fa0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E7FA0u;
    {
        const bool branch_taken_0x1e7fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fa0) {
            ctx->pc = 0x1E8038u;
            goto label_1e8038;
        }
    }
    ctx->pc = 0x1E7FA8u;
label_1e7fa8:
    // 0x1e7fa8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7fac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7fb0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e7fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e7fb4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7fb8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e7fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7fbc: 0xc07a0e4  jal         func_1E8390
    ctx->pc = 0x1E7FBCu;
    SET_GPR_U32(ctx, 31, 0x1E7FC4u);
    ctx->pc = 0x1E8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8390u, 0x1E7FBCu, 0x1E7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FC4u;
label_1e7fc4:
    // 0x1e7fc4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7fc8: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1e7fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e7fcc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7fd4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1e7fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7fd8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7fdc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7fe0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e7fe4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e7fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e7fe8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7fec: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e7fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7ff0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ff8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e7ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7ffc: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e7ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e8000: 0xc07a13c  jal         func_1E84F0
    ctx->pc = 0x1E8000u;
    SET_GPR_U32(ctx, 31, 0x1E8008u);
    ctx->pc = 0x1E84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E84F0u, 0x1E8000u, 0x1E8008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8008u;
label_1e8008:
    // 0x1e8008: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e8008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e800c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e800cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e8010: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e8014: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e8014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8018: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e8018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e801c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8020: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e8020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e8024: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e8024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e802c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e802cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e8030: 0xc07a0f4  jal         func_1E83D0
    ctx->pc = 0x1E8030u;
    SET_GPR_U32(ctx, 31, 0x1E8038u);
    ctx->pc = 0x1E83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E83D0u, 0x1E8030u, 0x1E8038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8038u;
label_1e8038:
    // 0x1e8038: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e8038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e803c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e803cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8040: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1E8040u;
    SET_GPR_U32(ctx, 31, 0x1E8048u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1E8040u, 0x1E8048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8048u;
label_1e8048:
    // 0x1e8048: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E8048u;
    {
        const bool branch_taken_0x1e8048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8048) {
            ctx->pc = 0x1E8074u;
            goto label_1e8074;
        }
    }
    ctx->pc = 0x1E8050u;
label_1e8050:
    // 0x1e8050: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1e8050u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8054: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8058: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e805c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1e805cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e8060: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8064: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1e8064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8068: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e8068u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e806c: 0xc07a024  jal         func_1E8090
    ctx->pc = 0x1E806Cu;
    SET_GPR_U32(ctx, 31, 0x1E8074u);
    ctx->pc = 0x1E8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8090u, 0x1E806Cu, 0x1E8074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8074u;
label_1e8074:
    // 0x1e8074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e807c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e807cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8080: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e8080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e8084: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E808Cu;
    // 0x1e808c: 0x0  nop
    ctx->pc = 0x1e808cu;
    // NOP
    ctx->pc = 0x1e8090u;
}
