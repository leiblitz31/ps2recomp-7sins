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

// Function: sub_00231440
// Address: 0x231440 - 0x231510
void sub_00231440_0x231440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231440_0x231440");
#endif

    switch (ctx->pc) {
        case 0x231460u: goto label_231460;
        case 0x2314b4u: goto label_2314b4;
        case 0x2314c4u: goto label_2314c4;
        case 0x2314e4u: goto label_2314e4;
        case 0x2314f4u: goto label_2314f4;
        default: break;
    }

    ctx->pc = 0x231440u;

    // 0x231440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23144c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23144cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x231450: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x231450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231454: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x231454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231458: 0xc08c200  jal         func_230800
    ctx->pc = 0x231458u;
    SET_GPR_U32(ctx, 31, 0x231460u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231458u, 0x231460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231460u;
label_231460:
    // 0x231460: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231460u;
    {
        const bool branch_taken_0x231460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231460) {
            ctx->pc = 0x231474u;
            goto label_231474;
        }
    }
    ctx->pc = 0x231468u;
    // 0x231468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23146c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23146Cu;
    {
        const bool branch_taken_0x23146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23146c) {
            ctx->pc = 0x231500u;
            goto label_231500;
        }
    }
    ctx->pc = 0x231474u;
label_231474:
    // 0x231474: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231478: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x231478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x23147c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x23147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x231480: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x231480u;
    {
        const bool branch_taken_0x231480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231480) {
            ctx->pc = 0x2314CCu;
            goto label_2314cc;
        }
    }
    ctx->pc = 0x231488u;
    // 0x231488: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x231488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x23148c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23148Cu;
    {
        const bool branch_taken_0x23148c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23148c) {
            ctx->pc = 0x23149Cu;
            goto label_23149c;
        }
    }
    ctx->pc = 0x231494u;
    // 0x231494: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x231494u;
    {
        const bool branch_taken_0x231494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231494) {
            ctx->pc = 0x2314FCu;
            goto label_2314fc;
        }
    }
    ctx->pc = 0x23149Cu;
label_23149c:
    // 0x23149c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2314a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2314a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2314a4: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2314a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2314a8: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2314a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2314ac: 0xc08c248  jal         func_230920
    ctx->pc = 0x2314ACu;
    SET_GPR_U32(ctx, 31, 0x2314B4u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2314ACu, 0x2314B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314B4u;
label_2314b4:
    // 0x2314b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2314b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2314b8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2314b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2314bc: 0xc0ed20a  jal         func_3B4828
    ctx->pc = 0x2314BCu;
    SET_GPR_U32(ctx, 31, 0x2314C4u);
    ctx->pc = 0x3B4828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4828u, 0x2314BCu, 0x2314C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314C4u;
label_2314c4:
    // 0x2314c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2314C4u;
    {
        const bool branch_taken_0x2314c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2314c4) {
            ctx->pc = 0x231500u;
            goto label_231500;
        }
    }
    ctx->pc = 0x2314CCu;
label_2314cc:
    // 0x2314cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2314ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2314d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2314d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2314d4: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x2314d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x2314d8: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2314d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2314dc: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x2314DCu;
    SET_GPR_U32(ctx, 31, 0x2314E4u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x2314DCu, 0x2314E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314E4u;
label_2314e4:
    // 0x2314e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2314e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2314e8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2314e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2314ec: 0xc0ed20a  jal         func_3B4828
    ctx->pc = 0x2314ECu;
    SET_GPR_U32(ctx, 31, 0x2314F4u);
    ctx->pc = 0x3B4828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4828u, 0x2314ECu, 0x2314F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314F4u;
label_2314f4:
    // 0x2314f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2314F4u;
    {
        const bool branch_taken_0x2314f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2314f4) {
            ctx->pc = 0x231500u;
            goto label_231500;
        }
    }
    ctx->pc = 0x2314FCu;
label_2314fc:
    // 0x2314fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2314fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231500:
    // 0x231500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231504: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x231504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x231508: 0x3e00008  jr          $ra
    ctx->pc = 0x231508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231510u;
}
