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

// Function: sub_002DD8A0
// Address: 0x2dd8a0 - 0x2dd9f0
void sub_002DD8A0_0x2dd8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD8A0_0x2dd8a0");
#endif

    switch (ctx->pc) {
        case 0x2dd8d4u: goto label_2dd8d4;
        case 0x2dd8e0u: goto label_2dd8e0;
        case 0x2dd8f0u: goto label_2dd8f0;
        case 0x2dd900u: goto label_2dd900;
        case 0x2dd914u: goto label_2dd914;
        case 0x2dd928u: goto label_2dd928;
        case 0x2dd940u: goto label_2dd940;
        case 0x2dd954u: goto label_2dd954;
        case 0x2dd964u: goto label_2dd964;
        case 0x2dd980u: goto label_2dd980;
        case 0x2dd994u: goto label_2dd994;
        case 0x2dd9c0u: goto label_2dd9c0;
        default: break;
    }

    ctx->pc = 0x2dd8a0u;

    // 0x2dd8a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2dd8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2dd8a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dd8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2dd8a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dd8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dd8ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dd8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dd8b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dd8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dd8b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dd8b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd8bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd8c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd8c4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2dd8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2dd8c8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2dd8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2dd8cc: 0xc090864  jal         func_242190
    ctx->pc = 0x2DD8CCu;
    SET_GPR_U32(ctx, 31, 0x2DD8D4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2DD8CCu, 0x2DD8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8D4u;
label_2dd8d4:
    // 0x2dd8d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8d8: 0xc090590  jal         func_241640
    ctx->pc = 0x2DD8D8u;
    SET_GPR_U32(ctx, 31, 0x2DD8E0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2DD8D8u, 0x2DD8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8E0u;
label_2dd8e0:
    // 0x2dd8e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2dd8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dd8e8: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2DD8E8u;
    SET_GPR_U32(ctx, 31, 0x2DD8F0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2DD8E8u, 0x2DD8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8F0u;
label_2dd8f0:
    // 0x2dd8f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dd8f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8f8: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2DD8F8u;
    SET_GPR_U32(ctx, 31, 0x2DD900u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2DD8F8u, 0x2DD900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD900u;
label_2dd900:
    // 0x2dd900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd904: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2DD904u;
    {
        const bool branch_taken_0x2dd904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd904) {
            ctx->pc = 0x2DD9B0u;
            goto label_2dd9b0;
        }
    }
    ctx->pc = 0x2DD90Cu;
    // 0x2dd90c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2DD90Cu;
    SET_GPR_U32(ctx, 31, 0x2DD914u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2DD90Cu, 0x2DD914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD914u;
label_2dd914:
    // 0x2dd914: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2dd914u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2dd918: 0xb010  mfhi        $s6
    ctx->pc = 0x2dd918u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x2dd91c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dd91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd920: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2DD920u;
    {
        const bool branch_taken_0x2dd920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd920) {
            ctx->pc = 0x2DD9A4u;
            goto label_2dd9a4;
        }
    }
    ctx->pc = 0x2DD928u;
label_2dd928:
    // 0x2dd928: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x2dd928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2dd92c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2dd92cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2dd930: 0x2810  mfhi        $a1
    ctx->pc = 0x2dd930u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2dd934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd938: 0xc0744b0  jal         func_1D12C0
    ctx->pc = 0x2DD938u;
    SET_GPR_U32(ctx, 31, 0x2DD940u);
    ctx->pc = 0x1D12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D12C0u, 0x2DD938u, 0x2DD940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD940u;
label_2dd940:
    // 0x2dd940: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2dd940u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd948: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2dd948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2dd94c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD94Cu;
    SET_GPR_U32(ctx, 31, 0x2DD954u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD94Cu, 0x2DD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD954u;
label_2dd954:
    // 0x2dd954: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2dd954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd958: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dd958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd95c: 0xc094178  jal         func_2505E0
    ctx->pc = 0x2DD95Cu;
    SET_GPR_U32(ctx, 31, 0x2DD964u);
    ctx->pc = 0x2505E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2505E0u, 0x2DD95Cu, 0x2DD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD964u;
label_2dd964:
    // 0x2dd964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd968: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2DD968u;
    {
        const bool branch_taken_0x2dd968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dd968) {
            ctx->pc = 0x2DD9A0u;
            goto label_2dd9a0;
        }
    }
    ctx->pc = 0x2DD970u;
    // 0x2dd970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd974: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2dd974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dd978: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD978u;
    SET_GPR_U32(ctx, 31, 0x2DD980u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD978u, 0x2DD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD980u;
label_2dd980:
    // 0x2dd980: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dd980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd984: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2dd984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dd988: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dd988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd98c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2DD98Cu;
    SET_GPR_U32(ctx, 31, 0x2DD994u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2DD98Cu, 0x2DD994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD994u;
label_2dd994:
    // 0x2dd994: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2dd994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dd998: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DD998u;
    {
        const bool branch_taken_0x2dd998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd998) {
            ctx->pc = 0x2DD9C4u;
            goto label_2dd9c4;
        }
    }
    ctx->pc = 0x2DD9A0u;
label_2dd9a0:
    // 0x2dd9a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dd9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2dd9a4:
    // 0x2dd9a4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2dd9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2dd9a8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2DD9A8u;
    {
        const bool branch_taken_0x2dd9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9a8) {
            ctx->pc = 0x2DD928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd928;
        }
    }
    ctx->pc = 0x2DD9B0u;
label_2dd9b0:
    // 0x2dd9b0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2dd9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dd9b4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2dd9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dd9b8: 0xc0b754c  jal         func_2DD530
    ctx->pc = 0x2DD9B8u;
    SET_GPR_U32(ctx, 31, 0x2DD9C0u);
    ctx->pc = 0x2DD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD530u, 0x2DD9B8u, 0x2DD9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9C0u;
label_2dd9c0:
    // 0x2dd9c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2dd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2dd9c4:
    // 0x2dd9c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dd9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd9c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dd9c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd9cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dd9ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd9d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dd9d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd9d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd9d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd9d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd9e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2dd9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD9F0u;
}
