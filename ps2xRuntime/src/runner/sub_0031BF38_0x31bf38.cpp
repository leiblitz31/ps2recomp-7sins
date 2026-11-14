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

// Function: sub_0031BF38
// Address: 0x31bf38 - 0x31c198
void sub_0031BF38_0x31bf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BF38_0x31bf38");
#endif

    switch (ctx->pc) {
        case 0x31bf38u: goto label_31bf38;
        case 0x31bf3cu: goto label_31bf3c;
        case 0x31bf40u: goto label_31bf40;
        case 0x31bf44u: goto label_31bf44;
        case 0x31bf48u: goto label_31bf48;
        case 0x31bf4cu: goto label_31bf4c;
        case 0x31bf50u: goto label_31bf50;
        case 0x31bf54u: goto label_31bf54;
        case 0x31bf58u: goto label_31bf58;
        case 0x31bf5cu: goto label_31bf5c;
        case 0x31bf60u: goto label_31bf60;
        case 0x31bf64u: goto label_31bf64;
        case 0x31bf68u: goto label_31bf68;
        case 0x31bf6cu: goto label_31bf6c;
        case 0x31bf70u: goto label_31bf70;
        case 0x31bf74u: goto label_31bf74;
        case 0x31bf78u: goto label_31bf78;
        case 0x31bf7cu: goto label_31bf7c;
        case 0x31bf80u: goto label_31bf80;
        case 0x31bf84u: goto label_31bf84;
        case 0x31bf88u: goto label_31bf88;
        case 0x31bf8cu: goto label_31bf8c;
        case 0x31bf90u: goto label_31bf90;
        case 0x31bf94u: goto label_31bf94;
        case 0x31bf98u: goto label_31bf98;
        case 0x31bf9cu: goto label_31bf9c;
        case 0x31bfa0u: goto label_31bfa0;
        case 0x31bfa4u: goto label_31bfa4;
        case 0x31bfa8u: goto label_31bfa8;
        case 0x31bfacu: goto label_31bfac;
        case 0x31bfb0u: goto label_31bfb0;
        case 0x31bfb4u: goto label_31bfb4;
        case 0x31bfb8u: goto label_31bfb8;
        case 0x31bfbcu: goto label_31bfbc;
        case 0x31bfc0u: goto label_31bfc0;
        case 0x31bfc4u: goto label_31bfc4;
        case 0x31bfc8u: goto label_31bfc8;
        case 0x31bfccu: goto label_31bfcc;
        case 0x31bfd0u: goto label_31bfd0;
        case 0x31bfd4u: goto label_31bfd4;
        case 0x31bfd8u: goto label_31bfd8;
        case 0x31bfdcu: goto label_31bfdc;
        case 0x31bfe0u: goto label_31bfe0;
        case 0x31bfe4u: goto label_31bfe4;
        case 0x31bfe8u: goto label_31bfe8;
        case 0x31bfecu: goto label_31bfec;
        case 0x31bff0u: goto label_31bff0;
        case 0x31bff4u: goto label_31bff4;
        case 0x31bff8u: goto label_31bff8;
        case 0x31bffcu: goto label_31bffc;
        case 0x31c000u: goto label_31c000;
        case 0x31c004u: goto label_31c004;
        case 0x31c008u: goto label_31c008;
        case 0x31c00cu: goto label_31c00c;
        case 0x31c010u: goto label_31c010;
        case 0x31c014u: goto label_31c014;
        case 0x31c018u: goto label_31c018;
        case 0x31c01cu: goto label_31c01c;
        case 0x31c020u: goto label_31c020;
        case 0x31c024u: goto label_31c024;
        case 0x31c028u: goto label_31c028;
        case 0x31c02cu: goto label_31c02c;
        case 0x31c030u: goto label_31c030;
        case 0x31c034u: goto label_31c034;
        case 0x31c038u: goto label_31c038;
        case 0x31c03cu: goto label_31c03c;
        case 0x31c040u: goto label_31c040;
        case 0x31c044u: goto label_31c044;
        case 0x31c048u: goto label_31c048;
        case 0x31c04cu: goto label_31c04c;
        case 0x31c050u: goto label_31c050;
        case 0x31c054u: goto label_31c054;
        case 0x31c058u: goto label_31c058;
        case 0x31c05cu: goto label_31c05c;
        case 0x31c060u: goto label_31c060;
        case 0x31c064u: goto label_31c064;
        case 0x31c068u: goto label_31c068;
        case 0x31c06cu: goto label_31c06c;
        case 0x31c070u: goto label_31c070;
        case 0x31c074u: goto label_31c074;
        case 0x31c078u: goto label_31c078;
        case 0x31c07cu: goto label_31c07c;
        case 0x31c080u: goto label_31c080;
        case 0x31c084u: goto label_31c084;
        case 0x31c088u: goto label_31c088;
        case 0x31c08cu: goto label_31c08c;
        case 0x31c090u: goto label_31c090;
        case 0x31c094u: goto label_31c094;
        case 0x31c098u: goto label_31c098;
        case 0x31c09cu: goto label_31c09c;
        case 0x31c0a0u: goto label_31c0a0;
        case 0x31c0a4u: goto label_31c0a4;
        case 0x31c0a8u: goto label_31c0a8;
        case 0x31c0acu: goto label_31c0ac;
        case 0x31c0b0u: goto label_31c0b0;
        case 0x31c0b4u: goto label_31c0b4;
        case 0x31c0b8u: goto label_31c0b8;
        case 0x31c0bcu: goto label_31c0bc;
        case 0x31c0c0u: goto label_31c0c0;
        case 0x31c0c4u: goto label_31c0c4;
        case 0x31c0c8u: goto label_31c0c8;
        case 0x31c0ccu: goto label_31c0cc;
        case 0x31c0d0u: goto label_31c0d0;
        case 0x31c0d4u: goto label_31c0d4;
        case 0x31c0d8u: goto label_31c0d8;
        case 0x31c0dcu: goto label_31c0dc;
        case 0x31c0e0u: goto label_31c0e0;
        case 0x31c0e4u: goto label_31c0e4;
        case 0x31c0e8u: goto label_31c0e8;
        case 0x31c0ecu: goto label_31c0ec;
        case 0x31c0f0u: goto label_31c0f0;
        case 0x31c0f4u: goto label_31c0f4;
        case 0x31c0f8u: goto label_31c0f8;
        case 0x31c0fcu: goto label_31c0fc;
        case 0x31c100u: goto label_31c100;
        case 0x31c104u: goto label_31c104;
        case 0x31c108u: goto label_31c108;
        case 0x31c10cu: goto label_31c10c;
        case 0x31c110u: goto label_31c110;
        case 0x31c114u: goto label_31c114;
        case 0x31c118u: goto label_31c118;
        case 0x31c11cu: goto label_31c11c;
        case 0x31c120u: goto label_31c120;
        case 0x31c124u: goto label_31c124;
        case 0x31c128u: goto label_31c128;
        case 0x31c12cu: goto label_31c12c;
        case 0x31c130u: goto label_31c130;
        case 0x31c134u: goto label_31c134;
        case 0x31c138u: goto label_31c138;
        case 0x31c13cu: goto label_31c13c;
        case 0x31c140u: goto label_31c140;
        case 0x31c144u: goto label_31c144;
        case 0x31c148u: goto label_31c148;
        case 0x31c14cu: goto label_31c14c;
        case 0x31c150u: goto label_31c150;
        case 0x31c154u: goto label_31c154;
        case 0x31c158u: goto label_31c158;
        case 0x31c15cu: goto label_31c15c;
        case 0x31c160u: goto label_31c160;
        case 0x31c164u: goto label_31c164;
        case 0x31c168u: goto label_31c168;
        case 0x31c16cu: goto label_31c16c;
        case 0x31c170u: goto label_31c170;
        case 0x31c174u: goto label_31c174;
        case 0x31c178u: goto label_31c178;
        case 0x31c17cu: goto label_31c17c;
        case 0x31c180u: goto label_31c180;
        case 0x31c184u: goto label_31c184;
        case 0x31c188u: goto label_31c188;
        case 0x31c18cu: goto label_31c18c;
        case 0x31c190u: goto label_31c190;
        case 0x31c194u: goto label_31c194;
        default: break;
    }

    ctx->pc = 0x31bf38u;

label_31bf38:
    // 0x31bf38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31bf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_31bf3c:
    // 0x31bf3c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31bf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_31bf40:
    // 0x31bf40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31bf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31bf44:
    // 0x31bf44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31bf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bf48:
    // 0x31bf48: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_31bf4c:
    // 0x31bf4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31bf4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31bf50:
    // 0x31bf50: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31bf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_31bf54:
    // 0x31bf54: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x31bf54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
label_31bf58:
    // 0x31bf58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31bf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_31bf5c:
    // 0x31bf5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31bf60:
    // 0x31bf60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31bf64:
    // 0x31bf64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_31bf68:
    if (ctx->pc == 0x31BF68u) {
        ctx->pc = 0x31BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF64u;
        // 0x31bf68: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BF6Cu;
        goto label_31bf6c;
    }
    ctx->pc = 0x31BF64u;
    {
        const bool branch_taken_0x31bf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF64u;
        // 0x31bf68: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf64) {
            ctx->pc = 0x31BFA4u;
            goto label_31bfa4;
        }
    }
    ctx->pc = 0x31BF6Cu;
label_31bf6c:
    // 0x31bf6c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x31bf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_31bf70:
    // 0x31bf70: 0x2693e880  addiu       $s3, $s4, -0x1780
    ctx->pc = 0x31bf70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_31bf74:
    // 0x31bf74: 0x0  nop
    ctx->pc = 0x31bf74u;
    // NOP
label_31bf78:
    // 0x31bf78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31bf7c:
    // 0x31bf7c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_31bf80:
    if (ctx->pc == 0x31BF80u) {
        ctx->pc = 0x31BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF7Cu;
        // 0x31bf80: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BF84u;
        goto label_31bf84;
    }
    ctx->pc = 0x31BF7Cu;
    {
        const bool branch_taken_0x31bf7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bf7c) {
            ctx->pc = 0x31BF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BF7Cu;
            // 0x31bf80: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BF94u;
            goto label_31bf94;
        }
    }
    ctx->pc = 0x31BF84u;
label_31bf84:
    // 0x31bf84: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x31bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_31bf88:
    // 0x31bf88: 0x40f809  jalr        $v0
label_31bf8c:
    if (ctx->pc == 0x31BF8Cu) {
        ctx->pc = 0x31BF90u;
        goto label_31bf90;
    }
    ctx->pc = 0x31BF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31BF90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BF88u, 0x31BF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BF90u;
label_31bf90:
    // 0x31bf90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31bf94:
    // 0x31bf94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31bf94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31bf98:
    // 0x31bf98: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31bf98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31bf9c:
    // 0x31bf9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_31bfa0:
    if (ctx->pc == 0x31BFA0u) {
        ctx->pc = 0x31BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF9Cu;
        // 0x31bfa0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFA4u;
        goto label_31bfa4;
    }
    ctx->pc = 0x31BF9Cu;
    {
        const bool branch_taken_0x31bf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF9Cu;
        // 0x31bfa0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf9c) {
            ctx->pc = 0x31BF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bf78;
        }
    }
    ctx->pc = 0x31BFA4u;
label_31bfa4:
    // 0x31bfa4: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x31bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_31bfa8:
    // 0x31bfa8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x31bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_31bfac:
    // 0x31bfac: 0x40f809  jalr        $v0
label_31bfb0:
    if (ctx->pc == 0x31BFB0u) {
        ctx->pc = 0x31BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFACu;
        // 0x31bfb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFB4u;
        goto label_31bfb4;
    }
    ctx->pc = 0x31BFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31BFB4u);
        ctx->pc = 0x31BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFACu;
        // 0x31bfb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BFACu, 0x31BFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BFB4u;
label_31bfb4:
    // 0x31bfb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31bfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31bfb8:
    // 0x31bfb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31bfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bfbc:
    // 0x31bfbc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31bfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31bfc0:
    // 0x31bfc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31bfc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31bfc4:
    // 0x31bfc4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31bfc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31bfc8:
    // 0x31bfc8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31bfc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31bfcc:
    // 0x31bfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31bfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31bfd0:
    // 0x31bfd0: 0x3e00008  jr          $ra
label_31bfd4:
    if (ctx->pc == 0x31BFD4u) {
        ctx->pc = 0x31BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFD0u;
        // 0x31bfd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFD8u;
        goto label_31bfd8;
    }
    ctx->pc = 0x31BFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFD0u;
        // 0x31bfd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BFD8u;
label_31bfd8:
    // 0x31bfd8: 0x3e00008  jr          $ra
label_31bfdc:
    if (ctx->pc == 0x31BFDCu) {
        ctx->pc = 0x31BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFD8u;
        // 0x31bfdc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFE0u;
        goto label_31bfe0;
    }
    ctx->pc = 0x31BFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFD8u;
        // 0x31bfdc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BFE0u;
label_31bfe0:
    // 0x31bfe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_31bfe4:
    // 0x31bfe4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_31bfe8:
    // 0x31bfe8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_31bfec:
    // 0x31bfec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x31bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31bff0:
    // 0x31bff0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_31bff4:
    // 0x31bff4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31bff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31bff8:
    // 0x31bff8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31bffc:
    // 0x31bffc: 0x2028818  mult        $s1, $s0, $v0
    ctx->pc = 0x31bffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_31c000:
    // 0x31c000: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31c000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_31c004:
    // 0x31c004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31c008:
    // 0x31c008: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31c008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c00c:
    // 0x31c00c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x31c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_31c010:
    // 0x31c010: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x31c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_31c014:
    // 0x31c014: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31c014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31c018:
    // 0x31c018: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x31c018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_31c01c:
    // 0x31c01c: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x31c01cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_31c020:
    // 0x31c020: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x31c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_31c024:
    // 0x31c024: 0x40f809  jalr        $v0
label_31c028:
    if (ctx->pc == 0x31C028u) {
        ctx->pc = 0x31C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C024u;
        // 0x31c028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C02Cu;
        goto label_31c02c;
    }
    ctx->pc = 0x31C024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C02Cu);
        ctx->pc = 0x31C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C024u;
        // 0x31c028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C024u, 0x31C02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C02Cu;
label_31c02c:
    // 0x31c02c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_31c030:
    if (ctx->pc == 0x31C030u) {
        ctx->pc = 0x31C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C02Cu;
        // 0x31c030: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C034u;
        goto label_31c034;
    }
    ctx->pc = 0x31C02Cu;
    {
        const bool branch_taken_0x31c02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C02Cu;
        // 0x31c030: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c02c) {
            ctx->pc = 0x31C060u;
            goto label_31c060;
        }
    }
    ctx->pc = 0x31C034u;
label_31c034:
    // 0x31c034: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31c038:
    // 0x31c038: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31c038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31c03c:
    // 0x31c03c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31c040:
    // 0x31c040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c044:
    // 0x31c044: 0xc1035f6  jal         func_40D7D8
label_31c048:
    if (ctx->pc == 0x31C048u) {
        ctx->pc = 0x31C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C044u;
        // 0x31c048: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C04Cu;
        goto label_31c04c;
    }
    ctx->pc = 0x31C044u;
    SET_GPR_U32(ctx, 31, 0x31C04Cu);
    ctx->pc = 0x31C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C044u;
    // 0x31c048: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31C044u, 0x31C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C04Cu;
label_31c04c:
    // 0x31c04c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31c050:
    // 0x31c050: 0xc103628  jal         func_40D8A0
label_31c054:
    if (ctx->pc == 0x31C054u) {
        ctx->pc = 0x31C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C050u;
        // 0x31c054: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C058u;
        goto label_31c058;
    }
    ctx->pc = 0x31C050u;
    SET_GPR_U32(ctx, 31, 0x31C058u);
    ctx->pc = 0x31C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C050u;
    // 0x31c054: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31C050u, 0x31C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C058u;
label_31c058:
    // 0x31c058: 0x1000002b  b           . + 4 + (0x2B << 2)
label_31c05c:
    if (ctx->pc == 0x31C05Cu) {
        ctx->pc = 0x31C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C058u;
        // 0x31c05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C060u;
        goto label_31c060;
    }
    ctx->pc = 0x31C058u;
    {
        const bool branch_taken_0x31c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C058u;
        // 0x31c05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c058) {
            ctx->pc = 0x31C108u;
            goto label_31c108;
        }
    }
    ctx->pc = 0x31C060u;
label_31c060:
    // 0x31c060: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31c060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c064:
    // 0x31c064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31c068:
    // 0x31c068: 0xc0bb7e6  jal         func_2EDF98
label_31c06c:
    if (ctx->pc == 0x31C06Cu) {
        ctx->pc = 0x31C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C068u;
        // 0x31c06c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C070u;
        goto label_31c070;
    }
    ctx->pc = 0x31C068u;
    SET_GPR_U32(ctx, 31, 0x31C070u);
    ctx->pc = 0x31C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C068u;
    // 0x31c06c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31C068u, 0x31C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C070u;
label_31c070:
    // 0x31c070: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_31c074:
    if (ctx->pc == 0x31C074u) {
        ctx->pc = 0x31C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C070u;
        // 0x31c074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C078u;
        goto label_31c078;
    }
    ctx->pc = 0x31C070u;
    {
        const bool branch_taken_0x31c070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C070u;
        // 0x31c074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c070) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C078u;
label_31c078:
    // 0x31c078: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x31c078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31c07c:
    // 0x31c07c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_31c080:
    // 0x31c080: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x31c080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_31c084:
    // 0x31c084: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x31c084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_31c088:
    // 0x31c088: 0x1a00000f  blez        $s0, . + 4 + (0xF << 2)
label_31c08c:
    if (ctx->pc == 0x31C08Cu) {
        ctx->pc = 0x31C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C088u;
        // 0x31c08c: 0x24e40010  addiu       $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C090u;
        goto label_31c090;
    }
    ctx->pc = 0x31C088u;
    {
        const bool branch_taken_0x31c088 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x31C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C088u;
        // 0x31c08c: 0x24e40010  addiu       $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c088) {
            ctx->pc = 0x31C0C8u;
            goto label_31c0c8;
        }
    }
    ctx->pc = 0x31C090u;
label_31c090:
    // 0x31c090: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_31c094:
    if (ctx->pc == 0x31C094u) {
        ctx->pc = 0x31C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C090u;
        // 0x31c094: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C098u;
        goto label_31c098;
    }
    ctx->pc = 0x31C090u;
    {
        const bool branch_taken_0x31c090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C090u;
        // 0x31c094: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c090) {
            ctx->pc = 0x31C0E0u;
            goto label_31c0e0;
        }
    }
    ctx->pc = 0x31C098u;
label_31c098:
    // 0x31c098: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x31c098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_31c09c:
    // 0x31c09c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_31c0a0:
    if (ctx->pc == 0x31C0A0u) {
        ctx->pc = 0x31C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C09Cu;
        // 0x31c0a0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C0A4u;
        goto label_31c0a4;
    }
    ctx->pc = 0x31C09Cu;
    {
        const bool branch_taken_0x31c09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c09c) {
            ctx->pc = 0x31C0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C09Cu;
            // 0x31c0a0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C0CCu;
            goto label_31c0cc;
        }
    }
    ctx->pc = 0x31C0A4u;
label_31c0a4:
    // 0x31c0a4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x31c0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_31c0a8:
    // 0x31c0a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_31c0ac:
    if (ctx->pc == 0x31C0ACu) {
        ctx->pc = 0x31C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0A8u;
        // 0x31c0ac: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C0B0u;
        goto label_31c0b0;
    }
    ctx->pc = 0x31C0A8u;
    {
        const bool branch_taken_0x31c0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c0a8) {
            ctx->pc = 0x31C0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C0A8u;
            // 0x31c0ac: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C0C0u;
            goto label_31c0c0;
        }
    }
    ctx->pc = 0x31C0B0u;
label_31c0b0:
    // 0x31c0b0: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x31c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
label_31c0b4:
    // 0x31c0b4: 0x24e40024  addiu       $a0, $a3, 0x24
    ctx->pc = 0x31c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
label_31c0b8:
    // 0x31c0b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31c0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c0bc:
    // 0x31c0bc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_31c0c0:
    // 0x31c0c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31c0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31c0c4:
    // 0x31c0c4: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x31c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_31c0c8:
    // 0x31c0c8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_31c0cc:
    // 0x31c0cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31c0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31c0d0:
    // 0x31c0d0: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x31c0d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_31c0d4:
    // 0x31c0d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_31c0d8:
    if (ctx->pc == 0x31C0D8u) {
        ctx->pc = 0x31C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0D4u;
        // 0x31c0d8: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C0DCu;
        goto label_31c0dc;
    }
    ctx->pc = 0x31C0D4u;
    {
        const bool branch_taken_0x31c0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0D4u;
        // 0x31c0d8: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0d4) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C0DCu;
label_31c0dc:
    // 0x31c0dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31c0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c0e0:
    // 0x31c0e0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x31c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_31c0e4:
    // 0x31c0e4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x31c0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_31c0e8:
    // 0x31c0e8: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x31c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_31c0ec:
    // 0x31c0ec: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x31c0ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_31c0f0:
    // 0x31c0f0: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x31c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_31c0f4:
    // 0x31c0f4: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x31c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_31c0f8:
    // 0x31c0f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_31c0fc:
    if (ctx->pc == 0x31C0FCu) {
        ctx->pc = 0x31C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0F8u;
        // 0x31c0fc: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C100u;
        goto label_31c100;
    }
    ctx->pc = 0x31C0F8u;
    {
        const bool branch_taken_0x31c0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0F8u;
        // 0x31c0fc: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0f8) {
            ctx->pc = 0x31C0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c0e0;
        }
    }
    ctx->pc = 0x31C100u;
label_31c100:
    // 0x31c100: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x31c100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_31c104:
    // 0x31c104: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x31c104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c108:
    // 0x31c108: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31c108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31c10c:
    // 0x31c10c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31c10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31c110:
    // 0x31c110: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31c110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31c114:
    // 0x31c114: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31c114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31c118:
    // 0x31c118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31c118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31c11c:
    // 0x31c11c: 0x3e00008  jr          $ra
label_31c120:
    if (ctx->pc == 0x31C120u) {
        ctx->pc = 0x31C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C11Cu;
        // 0x31c120: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C124u;
        goto label_31c124;
    }
    ctx->pc = 0x31C11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C11Cu;
        // 0x31c120: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C124u;
label_31c124:
    // 0x31c124: 0x0  nop
    ctx->pc = 0x31c124u;
    // NOP
label_31c128:
    // 0x31c128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31c12c:
    // 0x31c12c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_31c130:
    // 0x31c130: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_31c134:
    // 0x31c134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31c138:
    // 0x31c138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31c13c:
    // 0x31c13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31c13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c140:
    // 0x31c140: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31c144:
    // 0x31c144: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x31c144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_31c148:
    // 0x31c148: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31c148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31c14c:
    // 0x31c14c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_31c150:
    if (ctx->pc == 0x31C150u) {
        ctx->pc = 0x31C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C14Cu;
        // 0x31c150: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C154u;
        goto label_31c154;
    }
    ctx->pc = 0x31C14Cu;
    {
        const bool branch_taken_0x31c14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C14Cu;
        // 0x31c150: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c14c) {
            ctx->pc = 0x31C168u;
            goto label_31c168;
        }
    }
    ctx->pc = 0x31C154u;
label_31c154:
    // 0x31c154: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x31c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_31c158:
    // 0x31c158: 0x40f809  jalr        $v0
label_31c15c:
    if (ctx->pc == 0x31C15Cu) {
        ctx->pc = 0x31C160u;
        goto label_31c160;
    }
    ctx->pc = 0x31C158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C160u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C158u, 0x31C160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C160u;
label_31c160:
    // 0x31c160: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x31c160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_31c164:
    // 0x31c164: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31c164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_31c168:
    // 0x31c168: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31c168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c16c:
    // 0x31c16c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31c16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31c170:
    // 0x31c170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31c170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31c174:
    // 0x31c174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31c178:
    // 0x31c178: 0x3e00008  jr          $ra
label_31c17c:
    if (ctx->pc == 0x31C17Cu) {
        ctx->pc = 0x31C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C178u;
        // 0x31c17c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C180u;
        goto label_31c180;
    }
    ctx->pc = 0x31C178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C178u;
        // 0x31c17c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C180u;
label_31c180:
    // 0x31c180: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31c184:
    // 0x31c184: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_31c188:
    // 0x31c188: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31c188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31c18c:
    // 0x31c18c: 0x3e00008  jr          $ra
label_31c190:
    if (ctx->pc == 0x31C190u) {
        ctx->pc = 0x31C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C18Cu;
        // 0x31c190: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C194u;
        goto label_31c194;
    }
    ctx->pc = 0x31C18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C18Cu;
        // 0x31c190: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C194u;
label_31c194:
    // 0x31c194: 0x0  nop
    ctx->pc = 0x31c194u;
    // NOP
    ctx->pc = 0x31c198u;
}
