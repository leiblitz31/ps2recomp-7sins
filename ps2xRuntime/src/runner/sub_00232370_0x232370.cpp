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

// Function: sub_00232370
// Address: 0x232370 - 0x232440
void sub_00232370_0x232370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232370_0x232370");
#endif

    switch (ctx->pc) {
        case 0x232394u: goto label_232394;
        case 0x2323dcu: goto label_2323dc;
        case 0x2323f0u: goto label_2323f0;
        case 0x232410u: goto label_232410;
        case 0x232424u: goto label_232424;
        default: break;
    }

    ctx->pc = 0x232370u;

    // 0x232370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x232374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23237c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x232380: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x232380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x232384: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232388: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x232388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23238c: 0xc08c200  jal         func_230800
    ctx->pc = 0x23238Cu;
    SET_GPR_U32(ctx, 31, 0x232394u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x23238Cu, 0x232394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232394u;
label_232394:
    // 0x232394: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x232394u;
    {
        const bool branch_taken_0x232394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232394) {
            ctx->pc = 0x23242Cu;
            goto label_23242c;
        }
    }
    ctx->pc = 0x23239Cu;
    // 0x23239c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2323a0: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x2323a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x2323a4: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x2323a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2323a8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2323A8u;
    {
        const bool branch_taken_0x2323a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2323a8) {
            ctx->pc = 0x2323F8u;
            goto label_2323f8;
        }
    }
    ctx->pc = 0x2323B0u;
    // 0x2323b0: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x2323b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2323b4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2323B4u;
    {
        const bool branch_taken_0x2323b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2323b4) {
            ctx->pc = 0x2323C4u;
            goto label_2323c4;
        }
    }
    ctx->pc = 0x2323BCu;
    // 0x2323bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2323BCu;
    {
        const bool branch_taken_0x2323bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2323bc) {
            ctx->pc = 0x23242Cu;
            goto label_23242c;
        }
    }
    ctx->pc = 0x2323C4u;
label_2323c4:
    // 0x2323c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2323c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2323c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2323c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2323cc: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2323ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2323d0: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2323d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2323d4: 0xc08c248  jal         func_230920
    ctx->pc = 0x2323D4u;
    SET_GPR_U32(ctx, 31, 0x2323DCu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2323D4u, 0x2323DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323DCu;
label_2323dc:
    // 0x2323dc: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x2323dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2323e0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2323e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2323e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2323e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2323e8: 0xc11ccf0  jal         func_4733C0
    ctx->pc = 0x2323E8u;
    SET_GPR_U32(ctx, 31, 0x2323F0u);
    ctx->pc = 0x4733C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4733C0u, 0x2323E8u, 0x2323F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323F0u;
label_2323f0:
    // 0x2323f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2323F0u;
    {
        const bool branch_taken_0x2323f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2323f0) {
            ctx->pc = 0x23242Cu;
            goto label_23242c;
        }
    }
    ctx->pc = 0x2323F8u;
label_2323f8:
    // 0x2323f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2323f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2323fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2323fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232400: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x232400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x232404: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x232404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x232408: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x232408u;
    SET_GPR_U32(ctx, 31, 0x232410u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x232408u, 0x232410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232410u;
label_232410:
    // 0x232410: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x232410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232414: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x232414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x232418: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x232418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23241c: 0xc11ccf0  jal         func_4733C0
    ctx->pc = 0x23241Cu;
    SET_GPR_U32(ctx, 31, 0x232424u);
    ctx->pc = 0x4733C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4733C0u, 0x23241Cu, 0x232424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232424u;
label_232424:
    // 0x232424: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x232424u;
    {
        const bool branch_taken_0x232424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232424) {
            ctx->pc = 0x23242Cu;
            goto label_23242c;
        }
    }
    ctx->pc = 0x23242Cu;
label_23242c:
    // 0x23242c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232430: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x232430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x232434: 0x3e00008  jr          $ra
    ctx->pc = 0x232434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23243Cu;
    // 0x23243c: 0x0  nop
    ctx->pc = 0x23243cu;
    // NOP
    ctx->pc = 0x232440u;
}
