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

// Function: sub_001F93B0
// Address: 0x1f93b0 - 0x1f94a0
void sub_001F93B0_0x1f93b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F93B0_0x1f93b0");
#endif

    switch (ctx->pc) {
        case 0x1f93d0u: goto label_1f93d0;
        case 0x1f93dcu: goto label_1f93dc;
        case 0x1f93f4u: goto label_1f93f4;
        case 0x1f9400u: goto label_1f9400;
        case 0x1f9418u: goto label_1f9418;
        case 0x1f9424u: goto label_1f9424;
        case 0x1f943cu: goto label_1f943c;
        case 0x1f9448u: goto label_1f9448;
        case 0x1f9460u: goto label_1f9460;
        case 0x1f9474u: goto label_1f9474;
        default: break;
    }

    ctx->pc = 0x1f93b0u;

    // 0x1f93b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f93b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f93b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f93b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f93b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f93b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f93bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f93c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f93c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f93c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f93c8: 0xc07e358  jal         func_1F8D60
    ctx->pc = 0x1F93C8u;
    SET_GPR_U32(ctx, 31, 0x1F93D0u);
    ctx->pc = 0x1F8D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D60u, 0x1F93C8u, 0x1F93D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93D0u;
label_1f93d0:
    // 0x1f93d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f93d4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F93D4u;
    SET_GPR_U32(ctx, 31, 0x1F93DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F93D4u, 0x1F93DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93DCu;
label_1f93dc:
    // 0x1f93dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f93e0: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x1f93e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x1f93e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f93e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f93e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f93ec: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F93ECu;
    SET_GPR_U32(ctx, 31, 0x1F93F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F93ECu, 0x1F93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93F4u;
label_1f93f4:
    // 0x1f93f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f93f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f93f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F93F8u;
    SET_GPR_U32(ctx, 31, 0x1F9400u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F93F8u, 0x1F9400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9400u;
label_1f9400:
    // 0x1f9400: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9404: 0x8c65016c  lw          $a1, 0x16C($v1)
    ctx->pc = 0x1f9404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
    // 0x1f9408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f940c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f940cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9410: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9410u;
    SET_GPR_U32(ctx, 31, 0x1F9418u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9410u, 0x1F9418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9418u;
label_1f9418:
    // 0x1f9418: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f9418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f941c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F941Cu;
    SET_GPR_U32(ctx, 31, 0x1F9424u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F941Cu, 0x1F9424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9424u;
label_1f9424:
    // 0x1f9424: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9428: 0x8c650180  lw          $a1, 0x180($v1)
    ctx->pc = 0x1f9428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x1f942c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9430: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9434: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9434u;
    SET_GPR_U32(ctx, 31, 0x1F943Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9434u, 0x1F943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F943Cu;
label_1f943c:
    // 0x1f943c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9440: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9440u;
    SET_GPR_U32(ctx, 31, 0x1F9448u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9440u, 0x1F9448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9448u;
label_1f9448:
    // 0x1f9448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f944c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9450: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1f9450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1f9454: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f9454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9458: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F9458u;
    SET_GPR_U32(ctx, 31, 0x1F9460u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F9458u, 0x1F9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9460u;
label_1f9460:
    // 0x1f9460: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f9460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9468: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f946c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F946Cu;
    SET_GPR_U32(ctx, 31, 0x1F9474u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F946Cu, 0x1F9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9474u;
label_1f9474:
    // 0x1f9474: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9478: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f947c: 0xac640234  sw          $a0, 0x234($v1)
    ctx->pc = 0x1f947cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 4));
    // 0x1f9480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9488: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f9488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f948c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F948Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F948Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9494u;
    // 0x1f9494: 0x0  nop
    ctx->pc = 0x1f9494u;
    // NOP
    // 0x1f9498: 0x0  nop
    ctx->pc = 0x1f9498u;
    // NOP
    // 0x1f949c: 0x0  nop
    ctx->pc = 0x1f949cu;
    // NOP
    ctx->pc = 0x1f94a0u;
}
