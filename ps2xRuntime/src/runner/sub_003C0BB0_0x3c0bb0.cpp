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

// Function: sub_003C0BB0
// Address: 0x3c0bb0 - 0x3c0c50
void sub_003C0BB0_0x3c0bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0BB0_0x3c0bb0");
#endif

    switch (ctx->pc) {
        case 0x3c0c3cu: goto label_3c0c3c;
        default: break;
    }

    ctx->pc = 0x3c0bb0u;

    // 0x3c0bb0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x3c0bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x3c0bb4: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x3c0bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x3c0bb8: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x3c0bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x3c0bbc: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x3c0bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x3c0bc0: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x3c0bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x3c0bc4: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x3c0bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x3c0bc8: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x3c0bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x3c0bcc: 0x3c0c003c  lui         $t4, 0x3C
    ctx->pc = 0x3c0bccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
    // 0x3c0bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c0bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c0bd4: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x3c0bd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3c0bd8: 0x24a5f558  addiu       $a1, $a1, -0xAA8
    ctx->pc = 0x3c0bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964568));
    // 0x3c0bdc: 0x24c6fe98  addiu       $a2, $a2, -0x168
    ctx->pc = 0x3c0bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966936));
    // 0x3c0be0: 0x24e7f668  addiu       $a3, $a3, -0x998
    ctx->pc = 0x3c0be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964840));
    // 0x3c0be4: 0x25080828  addiu       $t0, $t0, 0x828
    ctx->pc = 0x3c0be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2088));
    // 0x3c0be8: 0x25290358  addiu       $t1, $t1, 0x358
    ctx->pc = 0x3c0be8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 856));
    // 0x3c0bec: 0x254a0978  addiu       $t2, $t2, 0x978
    ctx->pc = 0x3c0becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2424));
    // 0x3c0bf0: 0x256b0a98  addiu       $t3, $t3, 0xA98
    ctx->pc = 0x3c0bf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2712));
    // 0x3c0bf4: 0x258c0b98  addiu       $t4, $t4, 0xB98
    ctx->pc = 0x3c0bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2968));
    // 0x3c0bf8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3c0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3c0bfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c0c00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c0c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c0c04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c0c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0c08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3c0c0c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3c0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3c0c10: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x3c0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x3c0c14: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x3c0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x3c0c18: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x3c0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x3c0c1c: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x3c0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x3c0c20: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x3c0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x3c0c24: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x3c0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    // 0x3c0c28: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x3c0c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x3c0c2c: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x3c0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    // 0x3c0c30: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x3c0c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x3c0c34: 0xc0ef19a  jal         func_3BC668
    ctx->pc = 0x3C0C34u;
    SET_GPR_U32(ctx, 31, 0x3C0C3Cu);
    ctx->pc = 0x3C0C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C34u;
    // 0x3c0c38: 0xafad0008  sw          $t5, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC668u, 0x3C0C34u, 0x3C0C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C3Cu;
label_3c0c3c:
    // 0x3c0c3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c0c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c0c40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3c0c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c0c44: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C44u;
        // 0x3c0c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0C4Cu;
    // 0x3c0c4c: 0x0  nop
    ctx->pc = 0x3c0c4cu;
    // NOP
    ctx->pc = 0x3c0c50u;
}
