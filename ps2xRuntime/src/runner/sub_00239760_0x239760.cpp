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

// Function: sub_00239760
// Address: 0x239760 - 0x239820
void sub_00239760_0x239760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239760_0x239760");
#endif

    switch (ctx->pc) {
        case 0x23979cu: goto label_23979c;
        case 0x2397b0u: goto label_2397b0;
        case 0x2397c8u: goto label_2397c8;
        case 0x2397d8u: goto label_2397d8;
        case 0x2397ecu: goto label_2397ec;
        case 0x2397fcu: goto label_2397fc;
        case 0x23980cu: goto label_23980c;
        default: break;
    }

    ctx->pc = 0x239760u;

    // 0x239760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x239764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239768: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x239768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23976c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23976cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x239770: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x239770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239774: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x239774u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239778: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x239778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x23977c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23977cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x239780: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x239780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x239784: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x239784u;
    {
        const bool branch_taken_0x239784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239784) {
            ctx->pc = 0x2397B8u;
            goto label_2397b8;
        }
    }
    ctx->pc = 0x23978Cu;
    // 0x23978c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239790: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x239790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239794: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x239794u;
    SET_GPR_U32(ctx, 31, 0x23979Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x239794u, 0x23979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23979Cu;
label_23979c:
    // 0x23979c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2397a0: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x2397a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2397a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2397a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397a8: 0xc11bce4  jal         func_46F390
    ctx->pc = 0x2397A8u;
    SET_GPR_U32(ctx, 31, 0x2397B0u);
    ctx->pc = 0x46F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F390u, 0x2397A8u, 0x2397B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397B0u;
label_2397b0:
    // 0x2397b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2397B0u;
    {
        const bool branch_taken_0x2397b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2397b0) {
            ctx->pc = 0x23980Cu;
            goto label_23980c;
        }
    }
    ctx->pc = 0x2397B8u;
label_2397b8:
    // 0x2397b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2397b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2397bc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2397bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2397c0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2397C0u;
    SET_GPR_U32(ctx, 31, 0x2397C8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2397C0u, 0x2397C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397C8u;
label_2397c8:
    // 0x2397c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2397c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2397cc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2397ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2397d0: 0xc119568  jal         func_4655A0
    ctx->pc = 0x2397D0u;
    SET_GPR_U32(ctx, 31, 0x2397D8u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x2397D0u, 0x2397D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397D8u;
label_2397d8:
    // 0x2397d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2397d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2397dc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2397dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2397e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2397e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2397e4: 0xc11bce4  jal         func_46F390
    ctx->pc = 0x2397E4u;
    SET_GPR_U32(ctx, 31, 0x2397ECu);
    ctx->pc = 0x46F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F390u, 0x2397E4u, 0x2397ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397ECu;
label_2397ec:
    // 0x2397ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2397ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2397f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2397f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2397f4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x2397F4u;
    SET_GPR_U32(ctx, 31, 0x2397FCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x2397F4u, 0x2397FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397FCu;
label_2397fc:
    // 0x2397fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2397fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239800: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239804: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x239804u;
    SET_GPR_U32(ctx, 31, 0x23980Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239804u, 0x23980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23980Cu;
label_23980c:
    // 0x23980c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239810: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x239810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x239814: 0x3e00008  jr          $ra
    ctx->pc = 0x239814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23981Cu;
    // 0x23981c: 0x0  nop
    ctx->pc = 0x23981cu;
    // NOP
    ctx->pc = 0x239820u;
}
