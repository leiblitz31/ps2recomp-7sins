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

// Function: sub_0040AB38
// Address: 0x40ab38 - 0x40ac08
void sub_0040AB38_0x40ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AB38_0x40ab38");
#endif

    switch (ctx->pc) {
        case 0x40ab38u: goto label_40ab38;
        case 0x40ab3cu: goto label_40ab3c;
        case 0x40ab40u: goto label_40ab40;
        case 0x40ab44u: goto label_40ab44;
        case 0x40ab48u: goto label_40ab48;
        case 0x40ab4cu: goto label_40ab4c;
        case 0x40ab50u: goto label_40ab50;
        case 0x40ab54u: goto label_40ab54;
        case 0x40ab58u: goto label_40ab58;
        case 0x40ab5cu: goto label_40ab5c;
        case 0x40ab60u: goto label_40ab60;
        case 0x40ab64u: goto label_40ab64;
        case 0x40ab68u: goto label_40ab68;
        case 0x40ab6cu: goto label_40ab6c;
        case 0x40ab70u: goto label_40ab70;
        case 0x40ab74u: goto label_40ab74;
        case 0x40ab78u: goto label_40ab78;
        case 0x40ab7cu: goto label_40ab7c;
        case 0x40ab80u: goto label_40ab80;
        case 0x40ab84u: goto label_40ab84;
        case 0x40ab88u: goto label_40ab88;
        case 0x40ab8cu: goto label_40ab8c;
        case 0x40ab90u: goto label_40ab90;
        case 0x40ab94u: goto label_40ab94;
        case 0x40ab98u: goto label_40ab98;
        case 0x40ab9cu: goto label_40ab9c;
        case 0x40aba0u: goto label_40aba0;
        case 0x40aba4u: goto label_40aba4;
        case 0x40aba8u: goto label_40aba8;
        case 0x40abacu: goto label_40abac;
        case 0x40abb0u: goto label_40abb0;
        case 0x40abb4u: goto label_40abb4;
        case 0x40abb8u: goto label_40abb8;
        case 0x40abbcu: goto label_40abbc;
        case 0x40abc0u: goto label_40abc0;
        case 0x40abc4u: goto label_40abc4;
        case 0x40abc8u: goto label_40abc8;
        case 0x40abccu: goto label_40abcc;
        case 0x40abd0u: goto label_40abd0;
        case 0x40abd4u: goto label_40abd4;
        case 0x40abd8u: goto label_40abd8;
        case 0x40abdcu: goto label_40abdc;
        case 0x40abe0u: goto label_40abe0;
        case 0x40abe4u: goto label_40abe4;
        case 0x40abe8u: goto label_40abe8;
        case 0x40abecu: goto label_40abec;
        case 0x40abf0u: goto label_40abf0;
        case 0x40abf4u: goto label_40abf4;
        case 0x40abf8u: goto label_40abf8;
        case 0x40abfcu: goto label_40abfc;
        case 0x40ac00u: goto label_40ac00;
        case 0x40ac04u: goto label_40ac04;
        default: break;
    }

    ctx->pc = 0x40ab38u;

label_40ab38:
    // 0x40ab38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40ab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_40ab3c:
    // 0x40ab3c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40ab40:
    // 0x40ab40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_40ab44:
    // 0x40ab44: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x40ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_40ab48:
    // 0x40ab48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_40ab4c:
    // 0x40ab4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40ab4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40ab50:
    // 0x40ab50: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x40ab50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_40ab54:
    // 0x40ab54: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x40ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_40ab58:
    // 0x40ab58: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x40ab58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_40ab5c:
    // 0x40ab5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40ab60:
    // 0x40ab60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ab60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40ab64:
    // 0x40ab64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40ab68:
    // 0x40ab68: 0x40f809  jalr        $v0
label_40ab6c:
    if (ctx->pc == 0x40AB6Cu) {
        ctx->pc = 0x40AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB68u;
        // 0x40ab6c: 0x34a501b8  ori         $a1, $a1, 0x1B8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40AB70u;
        goto label_40ab70;
    }
    ctx->pc = 0x40AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40AB70u);
        ctx->pc = 0x40AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB68u;
        // 0x40ab6c: 0x34a501b8  ori         $a1, $a1, 0x1B8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)440);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AB68u, 0x40AB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40AB70u;
label_40ab70:
    // 0x40ab70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40ab70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40ab74:
    // 0x40ab74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x40ab74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40ab78:
    // 0x40ab78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40ab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40ab7c:
    // 0x40ab7c: 0xc0bb7e6  jal         func_2EDF98
label_40ab80:
    if (ctx->pc == 0x40AB80u) {
        ctx->pc = 0x40AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB7Cu;
        // 0x40ab80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40AB84u;
        goto label_40ab84;
    }
    ctx->pc = 0x40AB7Cu;
    SET_GPR_U32(ctx, 31, 0x40AB84u);
    ctx->pc = 0x40AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AB7Cu;
    // 0x40ab80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x40AB7Cu, 0x40AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AB84u;
label_40ab84:
    // 0x40ab84: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_40ab88:
    if (ctx->pc == 0x40AB88u) {
        ctx->pc = 0x40AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB84u;
        // 0x40ab88: 0x26220090  addiu       $v0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40AB8Cu;
        goto label_40ab8c;
    }
    ctx->pc = 0x40AB84u;
    {
        const bool branch_taken_0x40ab84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB84u;
        // 0x40ab88: 0x26220090  addiu       $v0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ab84) {
            ctx->pc = 0x40ABE8u;
            goto label_40abe8;
        }
    }
    ctx->pc = 0x40AB8Cu;
label_40ab8c:
    // 0x40ab8c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x40ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_40ab90:
    // 0x40ab90: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x40ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_40ab94:
    // 0x40ab94: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x40ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_40ab98:
    // 0x40ab98: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x40ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_40ab9c:
    // 0x40ab9c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x40ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_40aba0:
    // 0x40aba0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x40aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_40aba4:
    // 0x40aba4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x40aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_40aba8:
    // 0x40aba8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x40aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_40abac:
    // 0x40abac: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x40abacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_40abb0:
    // 0x40abb0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x40abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_40abb4:
    // 0x40abb4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x40abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_40abb8:
    // 0x40abb8: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x40abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_40abbc:
    // 0x40abbc: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x40abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_40abc0:
    // 0x40abc0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x40abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_40abc4:
    // 0x40abc4: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x40abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_40abc8:
    // 0x40abc8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x40abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_40abcc:
    // 0x40abcc: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x40abccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_40abd0:
    // 0x40abd0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x40abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_40abd4:
    // 0x40abd4: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x40abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_40abd8:
    // 0x40abd8: 0xae320084  sw          $s2, 0x84($s1)
    ctx->pc = 0x40abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 18));
label_40abdc:
    // 0x40abdc: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x40abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_40abe0:
    // 0x40abe0: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x40abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_40abe4:
    // 0x40abe4: 0x0  nop
    ctx->pc = 0x40abe4u;
    // NOP
label_40abe8:
    // 0x40abe8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40abe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40abec:
    // 0x40abec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40abecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40abf0:
    // 0x40abf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40abf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40abf4:
    // 0x40abf4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40abf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40abf8:
    // 0x40abf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40abf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40abfc:
    // 0x40abfc: 0x3e00008  jr          $ra
label_40ac00:
    if (ctx->pc == 0x40AC00u) {
        ctx->pc = 0x40AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ABFCu;
        // 0x40ac00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40AC04u;
        goto label_40ac04;
    }
    ctx->pc = 0x40ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ABFCu;
        // 0x40ac00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ABFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40AC04u;
label_40ac04:
    // 0x40ac04: 0x0  nop
    ctx->pc = 0x40ac04u;
    // NOP
    ctx->pc = 0x40ac08u;
}
