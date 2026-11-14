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

// Function: entry_306a68
// Address: 0x306a68 - 0x306b38
void entry_306a68_0x306b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_306a68_0x306b38");
#endif

    switch (ctx->pc) {
        case 0x306a80u: goto label_306a80;
        case 0x306a90u: goto label_306a90;
        case 0x306ad4u: goto label_306ad4;
        case 0x306b08u: goto label_306b08;
        case 0x306b28u: goto label_306b28;
        default: break;
    }

    ctx->pc = 0x306a68u;

    // 0x306a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x306a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x306a6c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x306a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x306a70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x306a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x306a74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a78: 0xc0c18d8  jal         func_306360
    ctx->pc = 0x306A78u;
    SET_GPR_U32(ctx, 31, 0x306A80u);
    ctx->pc = 0x306A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A78u;
    // 0x306a7c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306360u, 0x306A78u, 0x306A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A80u;
label_306a80:
    // 0x306a80: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x306A80u;
    {
        const bool branch_taken_0x306a80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A80u;
        // 0x306a84: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a80) {
            ctx->pc = 0x306AE4u;
            goto label_306ae4;
        }
    }
    ctx->pc = 0x306A88u;
    // 0x306a88: 0xc0c1918  jal         func_306460
    ctx->pc = 0x306A88u;
    SET_GPR_U32(ctx, 31, 0x306A90u);
    ctx->pc = 0x306460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306460u, 0x306A88u, 0x306A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A90u;
label_306a90:
    // 0x306a90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306A90u;
    {
        const bool branch_taken_0x306a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A90u;
        // 0x306a94: 0x3c100061  lui         $s0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a90) {
            ctx->pc = 0x306AA4u;
            goto label_306aa4;
        }
    }
    ctx->pc = 0x306A98u;
    // 0x306a98: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x306a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x306a9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x306A9Cu;
    {
        const bool branch_taken_0x306a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A9Cu;
        // 0x306aa0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a9c) {
            ctx->pc = 0x306AE4u;
            goto label_306ae4;
        }
    }
    ctx->pc = 0x306AA4u;
label_306aa4:
    // 0x306aa4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x306aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x306aa8: 0x26072d00  addiu       $a3, $s0, 0x2D00
    ctx->pc = 0x306aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 11520));
    // 0x306aac: 0xae112d00  sw          $s1, 0x2D00($s0)
    ctx->pc = 0x306aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11520), GPR_U32(ctx, 17));
    // 0x306ab0: 0x24842f00  addiu       $a0, $a0, 0x2F00
    ctx->pc = 0x306ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12032));
    // 0x306ab4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x306ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x306ab8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x306ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x306abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306ac0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x306ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306ac4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x306ac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306ac8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x306ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306acc: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x306ACCu;
    SET_GPR_U32(ctx, 31, 0x306AD4u);
    ctx->pc = 0x306AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306ACCu;
    // 0x306ad0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x306ACCu, 0x306AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AD4u;
label_306ad4:
    // 0x306ad4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306AD4u;
    {
        const bool branch_taken_0x306ad4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x306ad4) {
            ctx->pc = 0x306AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306AD4u;
            // 0x306ad8: 0x8e022d00  lw          $v0, 0x2D00($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306AE4u;
            goto label_306ae4;
        }
    }
    ctx->pc = 0x306ADCu;
    // 0x306adc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x306adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x306ae0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x306ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_306ae4:
    // 0x306ae4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x306ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306ae8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x306ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306aec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x306aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306af0: 0x3e00008  jr          $ra
    ctx->pc = 0x306AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AF0u;
        // 0x306af4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306AF8u;
    // 0x306af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x306afc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x306b00: 0xc0c194a  jal         func_306528
    ctx->pc = 0x306B00u;
    SET_GPR_U32(ctx, 31, 0x306B08u);
    ctx->pc = 0x306B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B00u;
    // 0x306b04: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x306B00u, 0x306B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B08u;
label_306b08:
    // 0x306b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x306b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x306B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B0Cu;
        // 0x306b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306B14u;
    // 0x306b14: 0x0  nop
    ctx->pc = 0x306b14u;
    // NOP
    // 0x306b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306b20: 0xc0c194a  jal         func_306528
    ctx->pc = 0x306B20u;
    SET_GPR_U32(ctx, 31, 0x306B28u);
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x306B20u, 0x306B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B28u;
label_306b28:
    // 0x306b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x306B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B2Cu;
        // 0x306b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306B34u;
    // 0x306b34: 0x0  nop
    ctx->pc = 0x306b34u;
    // NOP
    ctx->pc = 0x306b38u;
}
