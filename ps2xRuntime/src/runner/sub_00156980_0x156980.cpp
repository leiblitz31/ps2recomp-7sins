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

// Function: sub_00156980
// Address: 0x156980 - 0x1569e0
void sub_00156980_0x156980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156980_0x156980");
#endif

    switch (ctx->pc) {
        case 0x1569acu: goto label_1569ac;
        case 0x1569ccu: goto label_1569cc;
        default: break;
    }

    ctx->pc = 0x156980u;

    // 0x156980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x156988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15698c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15698cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x156990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156994: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x156994u;
    {
        const bool branch_taken_0x156994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156994) {
            ctx->pc = 0x1569CCu;
            goto label_1569cc;
        }
    }
    ctx->pc = 0x15699Cu;
    // 0x15699c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1569a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1569a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1569a4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1569A4u;
    SET_GPR_U32(ctx, 31, 0x1569ACu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1569A4u, 0x1569ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569ACu;
label_1569ac:
    // 0x1569ac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1569b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1569b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1569b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1569b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1569b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1569B8u;
    {
        const bool branch_taken_0x1569b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1569b8) {
            ctx->pc = 0x1569CCu;
            goto label_1569cc;
        }
    }
    ctx->pc = 0x1569C0u;
    // 0x1569c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1569c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1569c4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1569C4u;
    SET_GPR_U32(ctx, 31, 0x1569CCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1569C4u, 0x1569CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569CCu;
label_1569cc:
    // 0x1569cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1569ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1569d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1569d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1569d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1569d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1569d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1569D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1569D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1569E0u;
}
