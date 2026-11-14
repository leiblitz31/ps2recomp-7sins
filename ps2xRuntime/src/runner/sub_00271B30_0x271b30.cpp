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

// Function: sub_00271B30
// Address: 0x271b30 - 0x271bf0
void sub_00271B30_0x271b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271B30_0x271b30");
#endif

    switch (ctx->pc) {
        case 0x271b4cu: goto label_271b4c;
        case 0x271bbcu: goto label_271bbc;
        case 0x271bdcu: goto label_271bdc;
        default: break;
    }

    ctx->pc = 0x271b30u;

    // 0x271b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x271b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x271b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x271b3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x271b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x271b40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x271b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b44: 0xc088560  jal         func_221580
    ctx->pc = 0x271B44u;
    SET_GPR_U32(ctx, 31, 0x271B4Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x271B44u, 0x271B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B4Cu;
label_271b4c:
    // 0x271b4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x271b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x271b50: 0x24635a70  addiu       $v1, $v1, 0x5A70
    ctx->pc = 0x271b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23152));
    // 0x271b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x271b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x271b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x271b5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x271b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x271b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b64: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x271b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x271b68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x271b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271b70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x271b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271b74: 0x3e00008  jr          $ra
    ctx->pc = 0x271B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271B7Cu;
    // 0x271b7c: 0x0  nop
    ctx->pc = 0x271b7cu;
    // NOP
    // 0x271b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x271b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x271b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x271b8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x271b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x271b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x271b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x271B94u;
    {
        const bool branch_taken_0x271b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271b94) {
            ctx->pc = 0x271BDCu;
            goto label_271bdc;
        }
    }
    ctx->pc = 0x271B9Cu;
    // 0x271b9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x271b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x271ba0: 0x24635a70  addiu       $v1, $v1, 0x5A70
    ctx->pc = 0x271ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23152));
    // 0x271ba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x271ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271ba8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x271ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x271bac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x271bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x271bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271bb4: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x271BB4u;
    SET_GPR_U32(ctx, 31, 0x271BBCu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x271BB4u, 0x271BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BBCu;
label_271bbc:
    // 0x271bbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x271bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271bc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x271bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x271bc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x271bc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x271bc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271BC8u;
    {
        const bool branch_taken_0x271bc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x271bc8) {
            ctx->pc = 0x271BDCu;
            goto label_271bdc;
        }
    }
    ctx->pc = 0x271BD0u;
    // 0x271bd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x271bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271bd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x271BD4u;
    SET_GPR_U32(ctx, 31, 0x271BDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x271BD4u, 0x271BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BDCu;
label_271bdc:
    // 0x271bdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x271bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271be4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x271be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271be8: 0x3e00008  jr          $ra
    ctx->pc = 0x271BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271BF0u;
}
