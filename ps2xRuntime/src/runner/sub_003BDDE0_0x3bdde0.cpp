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

// Function: sub_003BDDE0
// Address: 0x3bdde0 - 0x3bdf90
void sub_003BDDE0_0x3bdde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BDDE0_0x3bdde0");
#endif

    switch (ctx->pc) {
        case 0x3bdde0u: goto label_3bdde0;
        case 0x3bdde4u: goto label_3bdde4;
        case 0x3bdde8u: goto label_3bdde8;
        case 0x3bddecu: goto label_3bddec;
        case 0x3bddf0u: goto label_3bddf0;
        case 0x3bddf4u: goto label_3bddf4;
        case 0x3bddf8u: goto label_3bddf8;
        case 0x3bddfcu: goto label_3bddfc;
        case 0x3bde00u: goto label_3bde00;
        case 0x3bde04u: goto label_3bde04;
        case 0x3bde08u: goto label_3bde08;
        case 0x3bde0cu: goto label_3bde0c;
        case 0x3bde10u: goto label_3bde10;
        case 0x3bde14u: goto label_3bde14;
        case 0x3bde18u: goto label_3bde18;
        case 0x3bde1cu: goto label_3bde1c;
        case 0x3bde20u: goto label_3bde20;
        case 0x3bde24u: goto label_3bde24;
        case 0x3bde28u: goto label_3bde28;
        case 0x3bde2cu: goto label_3bde2c;
        case 0x3bde30u: goto label_3bde30;
        case 0x3bde34u: goto label_3bde34;
        case 0x3bde38u: goto label_3bde38;
        case 0x3bde3cu: goto label_3bde3c;
        case 0x3bde40u: goto label_3bde40;
        case 0x3bde44u: goto label_3bde44;
        case 0x3bde48u: goto label_3bde48;
        case 0x3bde4cu: goto label_3bde4c;
        case 0x3bde50u: goto label_3bde50;
        case 0x3bde54u: goto label_3bde54;
        case 0x3bde58u: goto label_3bde58;
        case 0x3bde5cu: goto label_3bde5c;
        case 0x3bde60u: goto label_3bde60;
        case 0x3bde64u: goto label_3bde64;
        case 0x3bde68u: goto label_3bde68;
        case 0x3bde6cu: goto label_3bde6c;
        case 0x3bde70u: goto label_3bde70;
        case 0x3bde74u: goto label_3bde74;
        case 0x3bde78u: goto label_3bde78;
        case 0x3bde7cu: goto label_3bde7c;
        case 0x3bde80u: goto label_3bde80;
        case 0x3bde84u: goto label_3bde84;
        case 0x3bde88u: goto label_3bde88;
        case 0x3bde8cu: goto label_3bde8c;
        case 0x3bde90u: goto label_3bde90;
        case 0x3bde94u: goto label_3bde94;
        case 0x3bde98u: goto label_3bde98;
        case 0x3bde9cu: goto label_3bde9c;
        case 0x3bdea0u: goto label_3bdea0;
        case 0x3bdea4u: goto label_3bdea4;
        case 0x3bdea8u: goto label_3bdea8;
        case 0x3bdeacu: goto label_3bdeac;
        case 0x3bdeb0u: goto label_3bdeb0;
        case 0x3bdeb4u: goto label_3bdeb4;
        case 0x3bdeb8u: goto label_3bdeb8;
        case 0x3bdebcu: goto label_3bdebc;
        case 0x3bdec0u: goto label_3bdec0;
        case 0x3bdec4u: goto label_3bdec4;
        case 0x3bdec8u: goto label_3bdec8;
        case 0x3bdeccu: goto label_3bdecc;
        case 0x3bded0u: goto label_3bded0;
        case 0x3bded4u: goto label_3bded4;
        case 0x3bded8u: goto label_3bded8;
        case 0x3bdedcu: goto label_3bdedc;
        case 0x3bdee0u: goto label_3bdee0;
        case 0x3bdee4u: goto label_3bdee4;
        case 0x3bdee8u: goto label_3bdee8;
        case 0x3bdeecu: goto label_3bdeec;
        case 0x3bdef0u: goto label_3bdef0;
        case 0x3bdef4u: goto label_3bdef4;
        case 0x3bdef8u: goto label_3bdef8;
        case 0x3bdefcu: goto label_3bdefc;
        case 0x3bdf00u: goto label_3bdf00;
        case 0x3bdf04u: goto label_3bdf04;
        case 0x3bdf08u: goto label_3bdf08;
        case 0x3bdf0cu: goto label_3bdf0c;
        case 0x3bdf10u: goto label_3bdf10;
        case 0x3bdf14u: goto label_3bdf14;
        case 0x3bdf18u: goto label_3bdf18;
        case 0x3bdf1cu: goto label_3bdf1c;
        case 0x3bdf20u: goto label_3bdf20;
        case 0x3bdf24u: goto label_3bdf24;
        case 0x3bdf28u: goto label_3bdf28;
        case 0x3bdf2cu: goto label_3bdf2c;
        case 0x3bdf30u: goto label_3bdf30;
        case 0x3bdf34u: goto label_3bdf34;
        case 0x3bdf38u: goto label_3bdf38;
        case 0x3bdf3cu: goto label_3bdf3c;
        case 0x3bdf40u: goto label_3bdf40;
        case 0x3bdf44u: goto label_3bdf44;
        case 0x3bdf48u: goto label_3bdf48;
        case 0x3bdf4cu: goto label_3bdf4c;
        case 0x3bdf50u: goto label_3bdf50;
        case 0x3bdf54u: goto label_3bdf54;
        case 0x3bdf58u: goto label_3bdf58;
        case 0x3bdf5cu: goto label_3bdf5c;
        case 0x3bdf60u: goto label_3bdf60;
        case 0x3bdf64u: goto label_3bdf64;
        case 0x3bdf68u: goto label_3bdf68;
        case 0x3bdf6cu: goto label_3bdf6c;
        case 0x3bdf70u: goto label_3bdf70;
        case 0x3bdf74u: goto label_3bdf74;
        case 0x3bdf78u: goto label_3bdf78;
        case 0x3bdf7cu: goto label_3bdf7c;
        case 0x3bdf80u: goto label_3bdf80;
        case 0x3bdf84u: goto label_3bdf84;
        case 0x3bdf88u: goto label_3bdf88;
        case 0x3bdf8cu: goto label_3bdf8c;
        default: break;
    }

    ctx->pc = 0x3bdde0u;

label_3bdde0:
    // 0x3bdde0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3bdde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3bdde4:
    // 0x3bdde4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3bdde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3bdde8:
    // 0x3bdde8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3bdde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3bddec:
    // 0x3bddec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bddecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bddf0:
    // 0x3bddf0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3bddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3bddf4:
    // 0x3bddf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bddf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bddf8:
    // 0x3bddf8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3bddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3bddfc:
    // 0x3bddfc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3bddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3bde00:
    // 0x3bde00: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3bde00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3bde04:
    // 0x3bde04: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3bde04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3bde08:
    // 0x3bde08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bde08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bde0c:
    // 0x3bde0c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3bde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3bde10:
    // 0x3bde10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3bde14:
    if (ctx->pc == 0x3BDE14u) {
        ctx->pc = 0x3BDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE10u;
        // 0x3bde14: 0x24140018  addiu       $s4, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDE18u;
        goto label_3bde18;
    }
    ctx->pc = 0x3BDE10u;
    {
        const bool branch_taken_0x3bde10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE10u;
        // 0x3bde14: 0x24140018  addiu       $s4, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bde10) {
            ctx->pc = 0x3BDE1Cu;
            goto label_3bde1c;
        }
    }
    ctx->pc = 0x3BDE18u;
label_3bde18:
    // 0x3bde18: 0x8e34000c  lw          $s4, 0xC($s1)
    ctx->pc = 0x3bde18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3bde1c:
    // 0x3bde1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bde1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bde20:
    // 0x3bde20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bde20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bde24:
    // 0x3bde24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3bde24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bde28:
    // 0x3bde28: 0xc0ef602  jal         func_3BD808
label_3bde2c:
    if (ctx->pc == 0x3BDE2Cu) {
        ctx->pc = 0x3BDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE28u;
        // 0x3bde2c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDE30u;
        goto label_3bde30;
    }
    ctx->pc = 0x3BDE28u;
    SET_GPR_U32(ctx, 31, 0x3BDE30u);
    ctx->pc = 0x3BDE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDE28u;
    // 0x3bde2c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD808u, 0x3BDE28u, 0x3BDE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDE30u;
label_3bde30:
    // 0x3bde30: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3bde30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bde34:
    // 0x3bde34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bde34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bde38:
    // 0x3bde38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bde38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bde3c:
    // 0x3bde3c: 0xc0ef648  jal         func_3BD920
label_3bde40:
    if (ctx->pc == 0x3BDE40u) {
        ctx->pc = 0x3BDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE3Cu;
        // 0x3bde40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDE44u;
        goto label_3bde44;
    }
    ctx->pc = 0x3BDE3Cu;
    SET_GPR_U32(ctx, 31, 0x3BDE44u);
    ctx->pc = 0x3BDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDE3Cu;
    // 0x3bde40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD920u, 0x3BDE3Cu, 0x3BDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDE44u;
label_3bde44:
    // 0x3bde44: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3bde44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bde48:
    // 0x3bde48: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3bde48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3bde4c:
    // 0x3bde4c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3bde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3bde50:
    // 0x3bde50: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3bde50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3bde54:
    // 0x3bde54: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3bde54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3bde58:
    // 0x3bde58: 0x40f809  jalr        $v0
label_3bde5c:
    if (ctx->pc == 0x3BDE5Cu) {
        ctx->pc = 0x3BDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE58u;
        // 0x3bde5c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDE60u;
        goto label_3bde60;
    }
    ctx->pc = 0x3BDE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BDE60u);
        ctx->pc = 0x3BDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE58u;
        // 0x3bde5c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDE58u, 0x3BDE60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BDE60u;
label_3bde60:
    // 0x3bde60: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x3bde60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3bde64:
    // 0x3bde64: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x3bde64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_3bde68:
    // 0x3bde68: 0x600003b  bltz        $s0, . + 4 + (0x3B << 2)
label_3bde6c:
    if (ctx->pc == 0x3BDE6Cu) {
        ctx->pc = 0x3BDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE68u;
        // 0x3bde6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDE70u;
        goto label_3bde70;
    }
    ctx->pc = 0x3BDE68u;
    {
        const bool branch_taken_0x3bde68 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3BDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE68u;
        // 0x3bde6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bde68) {
            ctx->pc = 0x3BDF58u;
            goto label_3bdf58;
        }
    }
    ctx->pc = 0x3BDE70u;
label_3bde70:
    // 0x3bde70: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x3bde70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
label_3bde74:
    // 0x3bde74: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3bde74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3bde78:
    // 0x3bde78: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_3bde7c:
    if (ctx->pc == 0x3BDE7Cu) {
        ctx->pc = 0x3BDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE78u;
        // 0x3bde7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDE80u;
        goto label_3bde80;
    }
    ctx->pc = 0x3BDE78u;
    {
        const bool branch_taken_0x3bde78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE78u;
        // 0x3bde7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bde78) {
            ctx->pc = 0x3BDEF0u;
            goto label_3bdef0;
        }
    }
    ctx->pc = 0x3BDE80u;
label_3bde80:
    // 0x3bde80: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bde80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3bde84:
    // 0x3bde84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3bde88:
    if (ctx->pc == 0x3BDE88u) {
        ctx->pc = 0x3BDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE84u;
        // 0x3bde88: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDE8Cu;
        goto label_3bde8c;
    }
    ctx->pc = 0x3BDE84u;
    {
        const bool branch_taken_0x3bde84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE84u;
        // 0x3bde88: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bde84) {
            ctx->pc = 0x3BDEC8u;
            goto label_3bdec8;
        }
    }
    ctx->pc = 0x3BDE8Cu;
label_3bde8c:
    // 0x3bde8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3bde90:
    if (ctx->pc == 0x3BDE90u) {
        ctx->pc = 0x3BDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE8Cu;
        // 0x3bde90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDE94u;
        goto label_3bde94;
    }
    ctx->pc = 0x3BDE8Cu;
    {
        const bool branch_taken_0x3bde8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE8Cu;
        // 0x3bde90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bde8c) {
            ctx->pc = 0x3BDEACu;
            goto label_3bdeac;
        }
    }
    ctx->pc = 0x3BDE94u;
label_3bde94:
    // 0x3bde94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bde94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bde98:
    // 0x3bde98: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3bde98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bde9c:
    // 0x3bde9c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3bde9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bdea0:
    // 0x3bdea0: 0xc0ef71a  jal         func_3BDC68
label_3bdea4:
    if (ctx->pc == 0x3BDEA4u) {
        ctx->pc = 0x3BDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDEA0u;
        // 0x3bdea4: 0x26b0fffe  addiu       $s0, $s5, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDEA8u;
        goto label_3bdea8;
    }
    ctx->pc = 0x3BDEA0u;
    SET_GPR_U32(ctx, 31, 0x3BDEA8u);
    ctx->pc = 0x3BDEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDEA0u;
    // 0x3bdea4: 0x26b0fffe  addiu       $s0, $s5, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDC68u, 0x3BDEA0u, 0x3BDEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDEA8u;
label_3bdea8:
    // 0x3bdea8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bdea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bdeac:
    // 0x3bdeac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bdeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bdeb0:
    // 0x3bdeb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bdeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bdeb4:
    // 0x3bdeb4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3bdeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bdeb8:
    // 0x3bdeb8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3bdeb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bdebc:
    // 0x3bdebc: 0xc0ef71a  jal         func_3BDC68
label_3bdec0:
    if (ctx->pc == 0x3BDEC0u) {
        ctx->pc = 0x3BDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDEBCu;
        // 0x3bdec0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDEC4u;
        goto label_3bdec4;
    }
    ctx->pc = 0x3BDEBCu;
    SET_GPR_U32(ctx, 31, 0x3BDEC4u);
    ctx->pc = 0x3BDEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDEBCu;
    // 0x3bdec0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDC68u, 0x3BDEBCu, 0x3BDEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDEC4u;
label_3bdec4:
    // 0x3bdec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bdec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bdec8:
    // 0x3bdec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bdec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bdecc:
    // 0x3bdecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bdeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bded0:
    // 0x3bded0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3bded0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bded4:
    // 0x3bded4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3bded4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bded8:
    // 0x3bded8: 0xc0ef71a  jal         func_3BDC68
label_3bdedc:
    if (ctx->pc == 0x3BDEDCu) {
        ctx->pc = 0x3BDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDED8u;
        // 0x3bdedc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDEE0u;
        goto label_3bdee0;
    }
    ctx->pc = 0x3BDED8u;
    SET_GPR_U32(ctx, 31, 0x3BDEE0u);
    ctx->pc = 0x3BDEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDED8u;
    // 0x3bdedc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDC68u, 0x3BDED8u, 0x3BDEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDEE0u;
label_3bdee0:
    // 0x3bdee0: 0x600001e  bltz        $s0, . + 4 + (0x1E << 2)
label_3bdee4:
    if (ctx->pc == 0x3BDEE4u) {
        ctx->pc = 0x3BDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDEE0u;
        // 0x3bdee4: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDEE8u;
        goto label_3bdee8;
    }
    ctx->pc = 0x3BDEE0u;
    {
        const bool branch_taken_0x3bdee0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3BDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDEE0u;
        // 0x3bdee4: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdee0) {
            ctx->pc = 0x3BDF5Cu;
            goto label_3bdf5c;
        }
    }
    ctx->pc = 0x3BDEE8u;
label_3bdee8:
    // 0x3bdee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bdee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bdeec:
    // 0x3bdeec: 0x0  nop
    ctx->pc = 0x3bdeecu;
    // NOP
label_3bdef0:
    // 0x3bdef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bdef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bdef4:
    // 0x3bdef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bdef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bdef8:
    // 0x3bdef8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3bdef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bdefc:
    // 0x3bdefc: 0xc0ef71a  jal         func_3BDC68
label_3bdf00:
    if (ctx->pc == 0x3BDF00u) {
        ctx->pc = 0x3BDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDEFCu;
        // 0x3bdf00: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDF04u;
        goto label_3bdf04;
    }
    ctx->pc = 0x3BDEFCu;
    SET_GPR_U32(ctx, 31, 0x3BDF04u);
    ctx->pc = 0x3BDF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDEFCu;
    // 0x3bdf00: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDC68u, 0x3BDEFCu, 0x3BDF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDF04u;
label_3bdf04:
    // 0x3bdf04: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x3bdf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3bdf08:
    // 0x3bdf08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bdf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf0c:
    // 0x3bdf0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bdf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf10:
    // 0x3bdf10: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3bdf10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf14:
    // 0x3bdf14: 0xc0ef71a  jal         func_3BDC68
label_3bdf18:
    if (ctx->pc == 0x3BDF18u) {
        ctx->pc = 0x3BDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF14u;
        // 0x3bdf18: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDF1Cu;
        goto label_3bdf1c;
    }
    ctx->pc = 0x3BDF14u;
    SET_GPR_U32(ctx, 31, 0x3BDF1Cu);
    ctx->pc = 0x3BDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDF14u;
    // 0x3bdf18: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDC68u, 0x3BDF14u, 0x3BDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDF1Cu;
label_3bdf1c:
    // 0x3bdf1c: 0x2606fffe  addiu       $a2, $s0, -0x2
    ctx->pc = 0x3bdf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_3bdf20:
    // 0x3bdf20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bdf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf24:
    // 0x3bdf24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bdf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf28:
    // 0x3bdf28: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3bdf28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf2c:
    // 0x3bdf2c: 0xc0ef71a  jal         func_3BDC68
label_3bdf30:
    if (ctx->pc == 0x3BDF30u) {
        ctx->pc = 0x3BDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF2Cu;
        // 0x3bdf30: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDF34u;
        goto label_3bdf34;
    }
    ctx->pc = 0x3BDF2Cu;
    SET_GPR_U32(ctx, 31, 0x3BDF34u);
    ctx->pc = 0x3BDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDF2Cu;
    // 0x3bdf30: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDC68u, 0x3BDF2Cu, 0x3BDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDF34u;
label_3bdf34:
    // 0x3bdf34: 0x2606fffd  addiu       $a2, $s0, -0x3
    ctx->pc = 0x3bdf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_3bdf38:
    // 0x3bdf38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bdf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf3c:
    // 0x3bdf3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bdf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf40:
    // 0x3bdf40: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3bdf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf44:
    // 0x3bdf44: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3bdf44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bdf48:
    // 0x3bdf48: 0xc0ef71a  jal         func_3BDC68
label_3bdf4c:
    if (ctx->pc == 0x3BDF4Cu) {
        ctx->pc = 0x3BDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF48u;
        // 0x3bdf4c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDF50u;
        goto label_3bdf50;
    }
    ctx->pc = 0x3BDF48u;
    SET_GPR_U32(ctx, 31, 0x3BDF50u);
    ctx->pc = 0x3BDF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDF48u;
    // 0x3bdf4c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDC68u, 0x3BDF48u, 0x3BDF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDF50u;
label_3bdf50:
    // 0x3bdf50: 0x601ffe7  bgez        $s0, . + 4 + (-0x19 << 2)
label_3bdf54:
    if (ctx->pc == 0x3BDF54u) {
        ctx->pc = 0x3BDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF50u;
        // 0x3bdf54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDF58u;
        goto label_3bdf58;
    }
    ctx->pc = 0x3BDF50u;
    {
        const bool branch_taken_0x3bdf50 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3BDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF50u;
        // 0x3bdf54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdf50) {
            ctx->pc = 0x3BDEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bdef0;
        }
    }
    ctx->pc = 0x3BDF58u;
label_3bdf58:
    // 0x3bdf58: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x3bdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_3bdf5c:
    // 0x3bdf5c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3bdf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3bdf60:
    // 0x3bdf60: 0x40f809  jalr        $v0
label_3bdf64:
    if (ctx->pc == 0x3BDF64u) {
        ctx->pc = 0x3BDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF60u;
        // 0x3bdf64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDF68u;
        goto label_3bdf68;
    }
    ctx->pc = 0x3BDF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BDF68u);
        ctx->pc = 0x3BDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF60u;
        // 0x3bdf64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDF60u, 0x3BDF68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BDF68u;
label_3bdf68:
    // 0x3bdf68: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3bdf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bdf6c:
    // 0x3bdf6c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3bdf6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bdf70:
    // 0x3bdf70: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3bdf70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bdf74:
    // 0x3bdf74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3bdf74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bdf78:
    // 0x3bdf78: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3bdf78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bdf7c:
    // 0x3bdf7c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3bdf7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bdf80:
    // 0x3bdf80: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3bdf80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bdf84:
    // 0x3bdf84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bdf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bdf88:
    // 0x3bdf88: 0x3e00008  jr          $ra
label_3bdf8c:
    if (ctx->pc == 0x3BDF8Cu) {
        ctx->pc = 0x3BDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF88u;
        // 0x3bdf8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BDF90u;
        goto label_fallthrough_0x3bdf88;
    }
    ctx->pc = 0x3BDF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF88u;
        // 0x3bdf8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bdf88:
    ctx->pc = 0x3BDF90u;
}
