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

// Function: sub_002A9A80
// Address: 0x2a9a80 - 0x2a9b40
void sub_002A9A80_0x2a9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9A80_0x2a9a80");
#endif

    switch (ctx->pc) {
        case 0x2a9a98u: goto label_2a9a98;
        case 0x2a9b0cu: goto label_2a9b0c;
        case 0x2a9b2cu: goto label_2a9b2c;
        default: break;
    }

    ctx->pc = 0x2a9a80u;

    // 0x2a9a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9a88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a9a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a9a8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a9a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9a90: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2A9A90u;
    SET_GPR_U32(ctx, 31, 0x2A9A98u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2A9A90u, 0x2A9A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A98u;
label_2a9a98:
    // 0x2a9a98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a9a9c: 0x24636400  addiu       $v1, $v1, 0x6400
    ctx->pc = 0x2a9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25600));
    // 0x2a9aa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9aa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a9aa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9aac: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2a9aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2a9ab0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9ab4: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2a9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x2a9ab8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9ac0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a9ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a9ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9ACCu;
    // 0x2a9acc: 0x0  nop
    ctx->pc = 0x2a9accu;
    // NOP
    // 0x2a9ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9ad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a9ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a9adc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2a9adcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a9ae0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9ae4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A9AE4u;
    {
        const bool branch_taken_0x2a9ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ae4) {
            ctx->pc = 0x2A9B2Cu;
            goto label_2a9b2c;
        }
    }
    ctx->pc = 0x2A9AECu;
    // 0x2a9aec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a9af0: 0x24636400  addiu       $v1, $v1, 0x6400
    ctx->pc = 0x2a9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25600));
    // 0x2a9af4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9af8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a9afc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b04: 0xc09d150  jal         func_274540
    ctx->pc = 0x2A9B04u;
    SET_GPR_U32(ctx, 31, 0x2A9B0Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2A9B04u, 0x2A9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9B0Cu;
label_2a9b0c:
    // 0x2a9b0c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2a9b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9b10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a9b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a9b14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a9b14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a9b18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9B18u;
    {
        const bool branch_taken_0x2a9b18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a9b18) {
            ctx->pc = 0x2A9B2Cu;
            goto label_2a9b2c;
        }
    }
    ctx->pc = 0x2A9B20u;
    // 0x2a9b20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a9b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9b24: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2A9B24u;
    SET_GPR_U32(ctx, 31, 0x2A9B2Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2A9B24u, 0x2A9B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9B2Cu;
label_2a9b2c:
    // 0x2a9b2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9b34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a9b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a9b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9B40u;
}
