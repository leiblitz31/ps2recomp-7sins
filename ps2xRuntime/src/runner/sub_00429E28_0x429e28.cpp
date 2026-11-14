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

// Function: sub_00429E28
// Address: 0x429e28 - 0x429ff0
void sub_00429E28_0x429e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429E28_0x429e28");
#endif

    switch (ctx->pc) {
        case 0x429e8cu: goto label_429e8c;
        case 0x429ed0u: goto label_429ed0;
        case 0x429ef8u: goto label_429ef8;
        case 0x429f20u: goto label_429f20;
        case 0x429f50u: goto label_429f50;
        case 0x429fd0u: goto label_429fd0;
        default: break;
    }

    ctx->pc = 0x429e28u;

    // 0x429e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x429e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x429e2c: 0x9382bea0  lbu         $v0, -0x4160($gp)
    ctx->pc = 0x429e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950560)));
    // 0x429e30: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x429E30u;
    {
        const bool branch_taken_0x429e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E30u;
        // 0x429e34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e30) {
            ctx->pc = 0x429EF8u;
            goto label_429ef8;
        }
    }
    ctx->pc = 0x429E38u;
    // 0x429e38: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x429e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x429e3c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x429E3Cu;
    {
        const bool branch_taken_0x429e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E3Cu;
        // 0x429e40: 0xa380bea0  sb          $zero, -0x4160($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294950560), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e3c) {
            ctx->pc = 0x429E94u;
            goto label_429e94;
        }
    }
    ctx->pc = 0x429E44u;
    // 0x429e44: 0x9382be2f  lbu         $v0, -0x41D1($gp)
    ctx->pc = 0x429e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
    // 0x429e48: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x429E48u;
    {
        const bool branch_taken_0x429e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E48u;
        // 0x429e4c: 0x8f83be98  lw          $v1, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e48) {
            ctx->pc = 0x429E98u;
            goto label_429e98;
        }
    }
    ctx->pc = 0x429E50u;
    // 0x429e50: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x429e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x429e54: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x429E54u;
    {
        const bool branch_taken_0x429e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E54u;
        // 0x429e58: 0x8f82be9c  lw          $v0, -0x4164($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e54) {
            ctx->pc = 0x429E9Cu;
            goto label_429e9c;
        }
    }
    ctx->pc = 0x429E5Cu;
    // 0x429e5c: 0x8f83be98  lw          $v1, -0x4168($gp)
    ctx->pc = 0x429e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
    // 0x429e60: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x429E60u;
    {
        const bool branch_taken_0x429e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x429E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E60u;
        // 0x429e64: 0x9382be64  lbu         $v0, -0x419C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e60) {
            ctx->pc = 0x429EA4u;
            goto label_429ea4;
        }
    }
    ctx->pc = 0x429E68u;
    // 0x429e68: 0x2784be58  addiu       $a0, $gp, -0x41A8
    ctx->pc = 0x429e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950488));
    // 0x429e6c: 0x8f85be7c  lw          $a1, -0x4184($gp)
    ctx->pc = 0x429e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x429e70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x429e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x429e74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x429e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x429e78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x429e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x429e7c: 0x1065001f  beq         $v1, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x429E7Cu;
    {
        const bool branch_taken_0x429e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x429E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E7Cu;
        // 0x429e80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e7c) {
            ctx->pc = 0x429EFCu;
            goto label_429efc;
        }
    }
    ctx->pc = 0x429E84u;
    // 0x429e84: 0xc10a024  jal         func_428090
    ctx->pc = 0x429E84u;
    SET_GPR_U32(ctx, 31, 0x429E8Cu);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x429E84u, 0x429E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429E8Cu;
label_429e8c:
    // 0x429e8c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x429E8Cu;
    {
        const bool branch_taken_0x429e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E8Cu;
        // 0x429e90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e8c) {
            ctx->pc = 0x429EFCu;
            goto label_429efc;
        }
    }
    ctx->pc = 0x429E94u;
label_429e94:
    // 0x429e94: 0x8f83be98  lw          $v1, -0x4168($gp)
    ctx->pc = 0x429e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
label_429e98:
    // 0x429e98: 0x8f82be9c  lw          $v0, -0x4164($gp)
    ctx->pc = 0x429e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950556)));
label_429e9c:
    // 0x429e9c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x429E9Cu;
    {
        const bool branch_taken_0x429e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x429EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E9Cu;
        // 0x429ea0: 0x9382be64  lbu         $v0, -0x419C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e9c) {
            ctx->pc = 0x429ED4u;
            goto label_429ed4;
        }
    }
    ctx->pc = 0x429EA4u;
label_429ea4:
    // 0x429ea4: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x429ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x429ea8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x429EA8u;
    {
        const bool branch_taken_0x429ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429EA8u;
        // 0x429eac: 0x9382be64  lbu         $v0, -0x419C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429ea8) {
            ctx->pc = 0x429ED4u;
            goto label_429ed4;
        }
    }
    ctx->pc = 0x429EB0u;
    // 0x429eb0: 0x9382be2f  lbu         $v0, -0x41D1($gp)
    ctx->pc = 0x429eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
    // 0x429eb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x429EB4u;
    {
        const bool branch_taken_0x429eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429EB4u;
        // 0x429eb8: 0x9382be64  lbu         $v0, -0x419C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429eb4) {
            ctx->pc = 0x429ED4u;
            goto label_429ed4;
        }
    }
    ctx->pc = 0x429EBCu;
    // 0x429ebc: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x429ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x429ec0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x429EC0u;
    {
        const bool branch_taken_0x429ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429EC0u;
        // 0x429ec4: 0x9382be64  lbu         $v0, -0x419C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429ec0) {
            ctx->pc = 0x429ED4u;
            goto label_429ed4;
        }
    }
    ctx->pc = 0x429EC8u;
    // 0x429ec8: 0xc109d0e  jal         func_427438
    ctx->pc = 0x429EC8u;
    SET_GPR_U32(ctx, 31, 0x429ED0u);
    ctx->pc = 0x429ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429EC8u;
    // 0x429ecc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427438u, 0x429EC8u, 0x429ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429ED0u;
label_429ed0:
    // 0x429ed0: 0x9382be64  lbu         $v0, -0x419C($gp)
    ctx->pc = 0x429ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
label_429ed4:
    // 0x429ed4: 0x2784be58  addiu       $a0, $gp, -0x41A8
    ctx->pc = 0x429ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950488));
    // 0x429ed8: 0x8f85be7c  lw          $a1, -0x4184($gp)
    ctx->pc = 0x429ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x429edc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x429edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x429ee0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x429ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x429ee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x429ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x429ee8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x429EE8u;
    {
        const bool branch_taken_0x429ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x429EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429EE8u;
        // 0x429eec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429ee8) {
            ctx->pc = 0x429EFCu;
            goto label_429efc;
        }
    }
    ctx->pc = 0x429EF0u;
    // 0x429ef0: 0xc10a024  jal         func_428090
    ctx->pc = 0x429EF0u;
    SET_GPR_U32(ctx, 31, 0x429EF8u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x429EF0u, 0x429EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429EF8u;
label_429ef8:
    // 0x429ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_429efc:
    // 0x429efc: 0x3e00008  jr          $ra
    ctx->pc = 0x429EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429EFCu;
        // 0x429f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429F04u;
    // 0x429f04: 0x0  nop
    ctx->pc = 0x429f04u;
    // NOP
    // 0x429f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x429f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x429f0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x429f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x429f10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x429f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x429f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x429f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x429f1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x429f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_429f20:
    // 0x429f20: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x429F20u;
    {
        const bool branch_taken_0x429f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x429F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429F20u;
        // 0x429f24: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429f20) {
            ctx->pc = 0x429F70u;
            goto label_429f70;
        }
    }
    ctx->pc = 0x429F28u;
    // 0x429f28: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x429f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x429f2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x429f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x429f30: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x429f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x429f34: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x429F34u;
    {
        const bool branch_taken_0x429f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429F34u;
        // 0x429f38: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429f34) {
            ctx->pc = 0x429F70u;
            goto label_429f70;
        }
    }
    ctx->pc = 0x429F3Cu;
    // 0x429f3c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x429f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x429f40: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x429f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x429f44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x429f44u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x429f48: 0xf  sync
    ctx->pc = 0x429f48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429f4c: 0x40f  sync.p
    ctx->pc = 0x429f4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_429f50:
    // 0x429f50: 0x0  nop
    ctx->pc = 0x429f50u;
    // NOP
    // 0x429f54: 0x0  nop
    ctx->pc = 0x429f54u;
    // NOP
    // 0x429f58: 0x0  nop
    ctx->pc = 0x429f58u;
    // NOP
    // 0x429f5c: 0x0  nop
    ctx->pc = 0x429f5cu;
    // NOP
    // 0x429f60: 0x0  nop
    ctx->pc = 0x429f60u;
    // NOP
    // 0x429f64: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x429F64u;
    {
        const bool branch_taken_0x429f64 = (false);
        if (branch_taken_0x429f64) {
            ctx->pc = 0x429F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429f50;
        }
    }
    ctx->pc = 0x429F6Cu;
    // 0x429f6c: 0x0  nop
    ctx->pc = 0x429f6cu;
    // NOP
label_429f70:
    // 0x429f70: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x429f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x429f74: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x429f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x429f78: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x429f78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x429f7c: 0x8f86be70  lw          $a2, -0x4190($gp)
    ctx->pc = 0x429f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
    // 0x429f80: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x429f80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x429f84: 0x8f84be74  lw          $a0, -0x418C($gp)
    ctx->pc = 0x429f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
    // 0x429f88: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x429f88u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x429f8c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x429f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x429f90: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x429f90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x429f94: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x429f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x429f98: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x429f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x429f9c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x429f9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x429fa0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x429FA0u;
    {
        const bool branch_taken_0x429fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x429FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FA0u;
        // 0x429fa4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429fa0) {
            ctx->pc = 0x429FB4u;
            goto label_429fb4;
        }
    }
    ctx->pc = 0x429FA8u;
    // 0x429fa8: 0xaf86be68  sw          $a2, -0x4198($gp)
    ctx->pc = 0x429fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950504), GPR_U32(ctx, 6));
    // 0x429fac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x429FACu;
    {
        const bool branch_taken_0x429fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FACu;
        // 0x429fb0: 0xaf83be70  sw          $v1, -0x4190($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429fac) {
            ctx->pc = 0x429FD8u;
            goto label_429fd8;
        }
    }
    ctx->pc = 0x429FB4u;
label_429fb4:
    // 0x429fb4: 0x8f82be60  lw          $v0, -0x41A0($gp)
    ctx->pc = 0x429fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950496)));
    // 0x429fb8: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x429fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x429fbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x429fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x429fc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x429FC0u;
    {
        const bool branch_taken_0x429fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FC0u;
        // 0x429fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429fc0) {
            ctx->pc = 0x429FD8u;
            goto label_429fd8;
        }
    }
    ctx->pc = 0x429FC8u;
    // 0x429fc8: 0xc10a024  jal         func_428090
    ctx->pc = 0x429FC8u;
    SET_GPR_U32(ctx, 31, 0x429FD0u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x429FC8u, 0x429FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429FD0u;
label_429fd0:
    // 0x429fd0: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x429FD0u;
    {
        const bool branch_taken_0x429fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x429fd0) {
            ctx->pc = 0x429F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429f20;
        }
    }
    ctx->pc = 0x429FD8u;
label_429fd8:
    // 0x429fd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x429fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x429fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x429fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x429fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x429FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FE4u;
        // 0x429fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429FECu;
    // 0x429fec: 0x0  nop
    ctx->pc = 0x429fecu;
    // NOP
    ctx->pc = 0x429ff0u;
}
