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

// Function: sub_001F98C0
// Address: 0x1f98c0 - 0x1f9b00
void sub_001F98C0_0x1f98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F98C0_0x1f98c0");
#endif

    switch (ctx->pc) {
        case 0x1f992cu: goto label_1f992c;
        case 0x1f999cu: goto label_1f999c;
        case 0x1f99e8u: goto label_1f99e8;
        case 0x1f9a10u: goto label_1f9a10;
        case 0x1f9a34u: goto label_1f9a34;
        case 0x1f9a78u: goto label_1f9a78;
        case 0x1f9aa8u: goto label_1f9aa8;
        case 0x1f9ab8u: goto label_1f9ab8;
        case 0x1f9ae4u: goto label_1f9ae4;
        default: break;
    }

    ctx->pc = 0x1f98c0u;

    // 0x1f98c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f98c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f98c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f98c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f98c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f98c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f98cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f98ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f98d0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1f98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1f98d4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1f98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1f98d8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1f98d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1f98dc: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1f98dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1f98e0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f98e4: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1F98E4u;
    {
        const bool branch_taken_0x1f98e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f98e4) {
            ctx->pc = 0x1F9AE4u;
            goto label_1f9ae4;
        }
    }
    ctx->pc = 0x1F98ECu;
    // 0x1f98ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f98f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f98f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f98f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1f98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f98fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1f98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9900: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f9900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9904: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f9904u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f9908: 0x1812  mflo        $v1
    ctx->pc = 0x1f9908u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1f990c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9910: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f9910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f9914: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1F9914u;
    {
        const bool branch_taken_0x1f9914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9914) {
            ctx->pc = 0x1F9AC0u;
            goto label_1f9ac0;
        }
    }
    ctx->pc = 0x1F991Cu;
    // 0x1f991c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f9920: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f9924: 0xc042844  jal         func_10A110
    ctx->pc = 0x1F9924u;
    SET_GPR_U32(ctx, 31, 0x1F992Cu);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x1F9924u, 0x1F992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F992Cu;
label_1f992c:
    // 0x1f992c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9930: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f9930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f9934: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1f9934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9938: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1f9938u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f993c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9940: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f9940u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f9944: 0x8812  mflo        $s1
    ctx->pc = 0x1f9944u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1f9948: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f9948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f994c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1f994cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f9950: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9954: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1f9954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f9958: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F9958u;
    {
        const bool branch_taken_0x1f9958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9958) {
            ctx->pc = 0x1F9A18u;
            goto label_1f9a18;
        }
    }
    ctx->pc = 0x1F9960u;
    // 0x1f9960: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f9960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9964: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f9964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f9968: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f9968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f996c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f9970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9978: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1f9978u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f997c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9980: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f9980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9984: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1f9984u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9988: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1f9988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f998c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1f998cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f9990: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1f9990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1f9994: 0xc0436e0  jal         func_10DB80
    ctx->pc = 0x1F9994u;
    SET_GPR_U32(ctx, 31, 0x1F999Cu);
    ctx->pc = 0x10DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB80u, 0x1F9994u, 0x1F999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F999Cu;
label_1f999c:
    // 0x1f999c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f99a0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f99a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f99a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f99ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f99acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f99b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f99b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f99b8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1f99bc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f99c0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f99c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f99c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f99cc: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1f99ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f99d0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1f99d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f99d4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1f99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f99d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f99d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f99dc: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1f99dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1f99e0: 0xc0436b0  jal         func_10DAC0
    ctx->pc = 0x1F99E0u;
    SET_GPR_U32(ctx, 31, 0x1F99E8u);
    ctx->pc = 0x10DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DAC0u, 0x1F99E0u, 0x1F99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99E8u;
label_1f99e8:
    // 0x1f99e8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f99e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f99ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f99f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f99f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f99f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1f99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f99fc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f99fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9a00: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1f9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9a04: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1f9a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f9a08: 0xc043698  jal         func_10DA60
    ctx->pc = 0x1F9A08u;
    SET_GPR_U32(ctx, 31, 0x1F9A10u);
    ctx->pc = 0x10DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA60u, 0x1F9A08u, 0x1F9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A10u;
label_1f9a10:
    // 0x1f9a10: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F9A10u;
    {
        const bool branch_taken_0x1f9a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9a10) {
            ctx->pc = 0x1F9AA8u;
            goto label_1f9aa8;
        }
    }
    ctx->pc = 0x1F9A18u;
label_1f9a18:
    // 0x1f9a18: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9a1c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9a20: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1f9a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9a24: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f9a28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1f9a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f9a2c: 0xc043688  jal         func_10DA20
    ctx->pc = 0x1F9A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F9A34u);
    ctx->pc = 0x10DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA20u, 0x1F9A2Cu, 0x1F9A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A34u;
label_1f9a34:
    // 0x1f9a34: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9a38: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1f9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9a3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f9a40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9a44: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1f9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9a48: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1f9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9a4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f9a50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f9a54: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f9a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1f9a58: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9a5c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1f9a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9a60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1f9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a68: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1f9a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f9a6c: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1f9a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1f9a70: 0xc0436e0  jal         func_10DB80
    ctx->pc = 0x1F9A70u;
    SET_GPR_U32(ctx, 31, 0x1F9A78u);
    ctx->pc = 0x10DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB80u, 0x1F9A70u, 0x1F9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A78u;
label_1f9a78:
    // 0x1f9a78: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9a7c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1f9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1f9a80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9a84: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9a88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f9a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9a90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1f9a94: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1f9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9a98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1f9a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f9aa0: 0xc043698  jal         func_10DA60
    ctx->pc = 0x1F9AA0u;
    SET_GPR_U32(ctx, 31, 0x1F9AA8u);
    ctx->pc = 0x10DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA60u, 0x1F9AA0u, 0x1F9AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AA8u;
label_1f9aa8:
    // 0x1f9aa8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f9aac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f9aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9ab0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1F9AB0u;
    SET_GPR_U32(ctx, 31, 0x1F9AB8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1F9AB0u, 0x1F9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AB8u;
label_1f9ab8:
    // 0x1f9ab8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F9AB8u;
    {
        const bool branch_taken_0x1f9ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ab8) {
            ctx->pc = 0x1F9AE4u;
            goto label_1f9ae4;
        }
    }
    ctx->pc = 0x1F9AC0u;
label_1f9ac0:
    // 0x1f9ac0: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1f9ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9ac4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f9ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9ac8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1f9ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9acc: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1f9accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f9ad0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f9ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f9ad4: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1f9ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9ad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f9ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9adc: 0xc07e6c0  jal         func_1F9B00
    ctx->pc = 0x1F9ADCu;
    SET_GPR_U32(ctx, 31, 0x1F9AE4u);
    ctx->pc = 0x1F9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B00u, 0x1F9ADCu, 0x1F9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AE4u;
label_1f9ae4:
    // 0x1f9ae4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9af0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f9af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9AFCu;
    // 0x1f9afc: 0x0  nop
    ctx->pc = 0x1f9afcu;
    // NOP
    ctx->pc = 0x1f9b00u;
}
