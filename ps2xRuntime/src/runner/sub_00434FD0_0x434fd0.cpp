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

// Function: sub_00434FD0
// Address: 0x434fd0 - 0x435108
void sub_00434FD0_0x434fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434FD0_0x434fd0");
#endif

    switch (ctx->pc) {
        case 0x434fd8u: goto label_434fd8;
        case 0x435068u: goto label_435068;
        case 0x4350d0u: goto label_4350d0;
        case 0x4350d4u: goto label_4350d4;
        default: break;
    }

    ctx->pc = 0x434fd0u;

    // 0x434fd0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x434FD0u;
    {
        const bool branch_taken_0x434fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x434FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FD0u;
        // 0x434fd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434fd0) {
            ctx->pc = 0x434FF4u;
            goto label_434ff4;
        }
    }
    ctx->pc = 0x434FD8u;
label_434fd8:
    // 0x434fd8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x434fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x434fdc: 0x0  nop
    ctx->pc = 0x434fdcu;
    // NOP
    // 0x434fe0: 0x0  nop
    ctx->pc = 0x434fe0u;
    // NOP
    // 0x434fe4: 0x0  nop
    ctx->pc = 0x434fe4u;
    // NOP
    // 0x434fe8: 0x0  nop
    ctx->pc = 0x434fe8u;
    // NOP
    // 0x434fec: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x434FECu;
    {
        const bool branch_taken_0x434fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x434FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FECu;
        // 0x434ff0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434fec) {
            ctx->pc = 0x434FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434fd8;
        }
    }
    ctx->pc = 0x434FF4u;
label_434ff4:
    // 0x434ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x434FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x434FFCu;
    // 0x434ffc: 0x0  nop
    ctx->pc = 0x434ffcu;
    // NOP
    // 0x435000: 0x8f82bee0  lw          $v0, -0x4120($gp)
    ctx->pc = 0x435000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950624)));
    // 0x435004: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x435004u;
    {
        const bool branch_taken_0x435004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435004u;
        // 0x435008: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435004) {
            ctx->pc = 0x43503Cu;
            goto label_43503c;
        }
    }
    ctx->pc = 0x43500Cu;
    // 0x43500c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x43500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x435010: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x435010u;
    {
        const bool branch_taken_0x435010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x435014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435010u;
        // 0x435014: 0x24020140  addiu       $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435010) {
            ctx->pc = 0x435038u;
            goto label_435038;
        }
    }
    ctx->pc = 0x435018u;
    // 0x435018: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x435018u;
    {
        const bool branch_taken_0x435018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x43501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435018u;
        // 0x43501c: 0x24020180  addiu       $v0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435018) {
            ctx->pc = 0x435038u;
            goto label_435038;
        }
    }
    ctx->pc = 0x435020u;
    // 0x435020: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x435020u;
    {
        const bool branch_taken_0x435020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x435024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435020u;
        // 0x435024: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435020) {
            ctx->pc = 0x435038u;
            goto label_435038;
        }
    }
    ctx->pc = 0x435028u;
    // 0x435028: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x435028u;
    {
        const bool branch_taken_0x435028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x43502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435028u;
        // 0x43502c: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435028) {
            ctx->pc = 0x435038u;
            goto label_435038;
        }
    }
    ctx->pc = 0x435030u;
    // 0x435030: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x435030u;
    {
        const bool branch_taken_0x435030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x435030) {
            ctx->pc = 0x43503Cu;
            goto label_43503c;
        }
    }
    ctx->pc = 0x435038u;
label_435038:
    // 0x435038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x435038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43503c:
    // 0x43503c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43503Cu;
    {
        const bool branch_taken_0x43503c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43503c) {
            ctx->pc = 0x435040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43503Cu;
            // 0x435040: 0xaf84aeb0  sw          $a0, -0x5150($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294946480), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435044u;
            goto label_435044;
        }
    }
    ctx->pc = 0x435044u;
label_435044:
    // 0x435044: 0x3e00008  jr          $ra
    ctx->pc = 0x435044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435044u;
        // 0x435048: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43504Cu;
    // 0x43504c: 0x0  nop
    ctx->pc = 0x43504cu;
    // NOP
    // 0x435050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x435050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x435054: 0x8f82ae34  lw          $v0, -0x51CC($gp)
    ctx->pc = 0x435054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946356)));
    // 0x435058: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x435058u;
    {
        const bool branch_taken_0x435058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435058u;
        // 0x43505c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435058) {
            ctx->pc = 0x435078u;
            goto label_435078;
        }
    }
    ctx->pc = 0x435060u;
    // 0x435060: 0xc10a60c  jal         func_429830
    ctx->pc = 0x435060u;
    SET_GPR_U32(ctx, 31, 0x435068u);
    ctx->pc = 0x429830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429830u, 0x435060u, 0x435068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435068u;
label_435068:
    // 0x435068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x435068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43506c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x435070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x435070u;
    {
        const bool branch_taken_0x435070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435070u;
        // 0x435074: 0xaf83ae34  sw          $v1, -0x51CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946356), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435070) {
            ctx->pc = 0x43507Cu;
            goto label_43507c;
        }
    }
    ctx->pc = 0x435078u;
label_435078:
    // 0x435078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x435078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43507c:
    // 0x43507c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43507cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435080: 0x3e00008  jr          $ra
    ctx->pc = 0x435080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435080u;
        // 0x435084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435088u;
    // 0x435088: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x435088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x43508c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x435090: 0x90820036  lbu         $v0, 0x36($a0)
    ctx->pc = 0x435090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x435094: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x435094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x435098: 0x3e00008  jr          $ra
    ctx->pc = 0x435098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435098u;
        // 0x43509c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4350A0u;
    // 0x4350a0: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x4350a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x4350a4: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x4350a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x4350a8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x4350a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4350ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4350acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4350b0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x4350b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x4350b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4350B4u;
    {
        const bool branch_taken_0x4350b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4350B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350B4u;
        // 0x4350b8: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350b4) {
            ctx->pc = 0x4350DCu;
            goto label_4350dc;
        }
    }
    ctx->pc = 0x4350BCu;
    // 0x4350bc: 0x90c20036  lbu         $v0, 0x36($a2)
    ctx->pc = 0x4350bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 54)));
    // 0x4350c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4350c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4350c4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4350C4u;
    {
        const bool branch_taken_0x4350c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4350C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350C4u;
        // 0x4350c8: 0xa0c20036  sb          $v0, 0x36($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350c4) {
            ctx->pc = 0x4350D4u;
            goto label_4350d4;
        }
    }
    ctx->pc = 0x4350CCu;
    // 0x4350cc: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x4350ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_4350d0:
    // 0x4350d0: 0xa0c20036  sb          $v0, 0x36($a2)
    ctx->pc = 0x4350d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 54), (uint8_t)GPR_U32(ctx, 2));
label_4350d4:
    // 0x4350d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4350D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4350D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350D4u;
        // 0x4350d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4350D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4350DCu;
label_4350dc:
    // 0x4350dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4350DCu;
    {
        const bool branch_taken_0x4350dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4350dc) {
            ctx->pc = 0x4350FCu;
            goto label_4350fc;
        }
    }
    ctx->pc = 0x4350E4u;
    // 0x4350e4: 0x90c20036  lbu         $v0, 0x36($a2)
    ctx->pc = 0x4350e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 54)));
    // 0x4350e8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4350e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4350ec: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4350ECu;
    {
        const bool branch_taken_0x4350ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350ECu;
        // 0x4350f0: 0xa0c20036  sb          $v0, 0x36($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350ec) {
            ctx->pc = 0x4350D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4350d4;
        }
    }
    ctx->pc = 0x4350F4u;
    // 0x4350f4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x4350F4u;
    {
        const bool branch_taken_0x4350f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4350F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350F4u;
        // 0x4350f8: 0x304200fb  andi        $v0, $v0, 0xFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350f4) {
            ctx->pc = 0x4350D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4350d0;
        }
    }
    ctx->pc = 0x4350FCu;
label_4350fc:
    // 0x4350fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4350FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350FCu;
        // 0x435100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4350FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435104u;
    // 0x435104: 0x0  nop
    ctx->pc = 0x435104u;
    // NOP
    ctx->pc = 0x435108u;
}
