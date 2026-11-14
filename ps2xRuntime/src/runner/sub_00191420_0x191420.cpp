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

// Function: sub_00191420
// Address: 0x191420 - 0x191570
void sub_00191420_0x191420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191420_0x191420");
#endif

    switch (ctx->pc) {
        case 0x19143cu: goto label_19143c;
        case 0x19149cu: goto label_19149c;
        case 0x1914bcu: goto label_1914bc;
        default: break;
    }

    ctx->pc = 0x191420u;

    // 0x191420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191428: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19142c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19142cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191430: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x191430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x191434: 0xc0ad6a8  jal         func_2B5AA0
    ctx->pc = 0x191434u;
    SET_GPR_U32(ctx, 31, 0x19143Cu);
    ctx->pc = 0x2B5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AA0u, 0x191434u, 0x19143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19143Cu;
label_19143c:
    // 0x19143c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19143cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x191440: 0x24634210  addiu       $v1, $v1, 0x4210
    ctx->pc = 0x191440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16912));
    // 0x191444: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191448: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x191448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19144c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191454: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191458: 0x3e00008  jr          $ra
    ctx->pc = 0x191458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191460u;
    // 0x191460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19146c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x19146cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x191470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191474: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x191474u;
    {
        const bool branch_taken_0x191474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191474) {
            ctx->pc = 0x1914BCu;
            goto label_1914bc;
        }
    }
    ctx->pc = 0x19147Cu;
    // 0x19147c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19147cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x191480: 0x24634210  addiu       $v1, $v1, 0x4210
    ctx->pc = 0x191480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16912));
    // 0x191484: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191488: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x191488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19148c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191494: 0xc0ad6d4  jal         func_2B5B50
    ctx->pc = 0x191494u;
    SET_GPR_U32(ctx, 31, 0x19149Cu);
    ctx->pc = 0x2B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B50u, 0x191494u, 0x19149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19149Cu;
label_19149c:
    // 0x19149c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x19149cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1914a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1914a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1914a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1914a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1914a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1914A8u;
    {
        const bool branch_taken_0x1914a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1914a8) {
            ctx->pc = 0x1914BCu;
            goto label_1914bc;
        }
    }
    ctx->pc = 0x1914B0u;
    // 0x1914b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1914b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1914b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1914B4u;
    SET_GPR_U32(ctx, 31, 0x1914BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1914B4u, 0x1914BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1914BCu;
label_1914bc:
    // 0x1914bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1914bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1914c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1914c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1914c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1914c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1914c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1914C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1914D0u;
    // 0x1914d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1914d4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1914d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1914d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1914D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1914E0u;
    // 0x1914e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1914e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1914e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1914e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1914e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1914E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1914F0u;
    // 0x1914f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1914f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1914f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1914f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1914f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1914F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191500u;
    // 0x191500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191504: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191508: 0x3e00008  jr          $ra
    ctx->pc = 0x191508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191510u;
    // 0x191510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191514: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191518: 0x3e00008  jr          $ra
    ctx->pc = 0x191518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191520u;
    // 0x191520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191524: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191528: 0x3e00008  jr          $ra
    ctx->pc = 0x191528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191530u;
    // 0x191530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191534: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191538: 0x3e00008  jr          $ra
    ctx->pc = 0x191538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191540u;
    // 0x191540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191544: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191548: 0x3e00008  jr          $ra
    ctx->pc = 0x191548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191550u;
    // 0x191550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191554: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191558: 0x3e00008  jr          $ra
    ctx->pc = 0x191558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191560u;
    // 0x191560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191564: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191568: 0x3e00008  jr          $ra
    ctx->pc = 0x191568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191570u;
}
