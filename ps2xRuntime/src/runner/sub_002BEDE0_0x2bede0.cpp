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

// Function: sub_002BEDE0
// Address: 0x2bede0 - 0x2bf0a0
void sub_002BEDE0_0x2bede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEDE0_0x2bede0");
#endif

    switch (ctx->pc) {
        case 0x2bede0u: goto label_2bede0;
        case 0x2bede4u: goto label_2bede4;
        case 0x2bede8u: goto label_2bede8;
        case 0x2bedecu: goto label_2bedec;
        case 0x2bedf0u: goto label_2bedf0;
        case 0x2bedf4u: goto label_2bedf4;
        case 0x2bedf8u: goto label_2bedf8;
        case 0x2bedfcu: goto label_2bedfc;
        case 0x2bee00u: goto label_2bee00;
        case 0x2bee04u: goto label_2bee04;
        case 0x2bee08u: goto label_2bee08;
        case 0x2bee0cu: goto label_2bee0c;
        case 0x2bee10u: goto label_2bee10;
        case 0x2bee14u: goto label_2bee14;
        case 0x2bee18u: goto label_2bee18;
        case 0x2bee1cu: goto label_2bee1c;
        case 0x2bee20u: goto label_2bee20;
        case 0x2bee24u: goto label_2bee24;
        case 0x2bee28u: goto label_2bee28;
        case 0x2bee2cu: goto label_2bee2c;
        case 0x2bee30u: goto label_2bee30;
        case 0x2bee34u: goto label_2bee34;
        case 0x2bee38u: goto label_2bee38;
        case 0x2bee3cu: goto label_2bee3c;
        case 0x2bee40u: goto label_2bee40;
        case 0x2bee44u: goto label_2bee44;
        case 0x2bee48u: goto label_2bee48;
        case 0x2bee4cu: goto label_2bee4c;
        case 0x2bee50u: goto label_2bee50;
        case 0x2bee54u: goto label_2bee54;
        case 0x2bee58u: goto label_2bee58;
        case 0x2bee5cu: goto label_2bee5c;
        case 0x2bee60u: goto label_2bee60;
        case 0x2bee64u: goto label_2bee64;
        case 0x2bee68u: goto label_2bee68;
        case 0x2bee6cu: goto label_2bee6c;
        case 0x2bee70u: goto label_2bee70;
        case 0x2bee74u: goto label_2bee74;
        case 0x2bee78u: goto label_2bee78;
        case 0x2bee7cu: goto label_2bee7c;
        case 0x2bee80u: goto label_2bee80;
        case 0x2bee84u: goto label_2bee84;
        case 0x2bee88u: goto label_2bee88;
        case 0x2bee8cu: goto label_2bee8c;
        case 0x2bee90u: goto label_2bee90;
        case 0x2bee94u: goto label_2bee94;
        case 0x2bee98u: goto label_2bee98;
        case 0x2bee9cu: goto label_2bee9c;
        case 0x2beea0u: goto label_2beea0;
        case 0x2beea4u: goto label_2beea4;
        case 0x2beea8u: goto label_2beea8;
        case 0x2beeacu: goto label_2beeac;
        case 0x2beeb0u: goto label_2beeb0;
        case 0x2beeb4u: goto label_2beeb4;
        case 0x2beeb8u: goto label_2beeb8;
        case 0x2beebcu: goto label_2beebc;
        case 0x2beec0u: goto label_2beec0;
        case 0x2beec4u: goto label_2beec4;
        case 0x2beec8u: goto label_2beec8;
        case 0x2beeccu: goto label_2beecc;
        case 0x2beed0u: goto label_2beed0;
        case 0x2beed4u: goto label_2beed4;
        case 0x2beed8u: goto label_2beed8;
        case 0x2beedcu: goto label_2beedc;
        case 0x2beee0u: goto label_2beee0;
        case 0x2beee4u: goto label_2beee4;
        case 0x2beee8u: goto label_2beee8;
        case 0x2beeecu: goto label_2beeec;
        case 0x2beef0u: goto label_2beef0;
        case 0x2beef4u: goto label_2beef4;
        case 0x2beef8u: goto label_2beef8;
        case 0x2beefcu: goto label_2beefc;
        case 0x2bef00u: goto label_2bef00;
        case 0x2bef04u: goto label_2bef04;
        case 0x2bef08u: goto label_2bef08;
        case 0x2bef0cu: goto label_2bef0c;
        case 0x2bef10u: goto label_2bef10;
        case 0x2bef14u: goto label_2bef14;
        case 0x2bef18u: goto label_2bef18;
        case 0x2bef1cu: goto label_2bef1c;
        case 0x2bef20u: goto label_2bef20;
        case 0x2bef24u: goto label_2bef24;
        case 0x2bef28u: goto label_2bef28;
        case 0x2bef2cu: goto label_2bef2c;
        case 0x2bef30u: goto label_2bef30;
        case 0x2bef34u: goto label_2bef34;
        case 0x2bef38u: goto label_2bef38;
        case 0x2bef3cu: goto label_2bef3c;
        case 0x2bef40u: goto label_2bef40;
        case 0x2bef44u: goto label_2bef44;
        case 0x2bef48u: goto label_2bef48;
        case 0x2bef4cu: goto label_2bef4c;
        case 0x2bef50u: goto label_2bef50;
        case 0x2bef54u: goto label_2bef54;
        case 0x2bef58u: goto label_2bef58;
        case 0x2bef5cu: goto label_2bef5c;
        case 0x2bef60u: goto label_2bef60;
        case 0x2bef64u: goto label_2bef64;
        case 0x2bef68u: goto label_2bef68;
        case 0x2bef6cu: goto label_2bef6c;
        case 0x2bef70u: goto label_2bef70;
        case 0x2bef74u: goto label_2bef74;
        case 0x2bef78u: goto label_2bef78;
        case 0x2bef7cu: goto label_2bef7c;
        case 0x2bef80u: goto label_2bef80;
        case 0x2bef84u: goto label_2bef84;
        case 0x2bef88u: goto label_2bef88;
        case 0x2bef8cu: goto label_2bef8c;
        case 0x2bef90u: goto label_2bef90;
        case 0x2bef94u: goto label_2bef94;
        case 0x2bef98u: goto label_2bef98;
        case 0x2bef9cu: goto label_2bef9c;
        case 0x2befa0u: goto label_2befa0;
        case 0x2befa4u: goto label_2befa4;
        case 0x2befa8u: goto label_2befa8;
        case 0x2befacu: goto label_2befac;
        case 0x2befb0u: goto label_2befb0;
        case 0x2befb4u: goto label_2befb4;
        case 0x2befb8u: goto label_2befb8;
        case 0x2befbcu: goto label_2befbc;
        case 0x2befc0u: goto label_2befc0;
        case 0x2befc4u: goto label_2befc4;
        case 0x2befc8u: goto label_2befc8;
        case 0x2befccu: goto label_2befcc;
        case 0x2befd0u: goto label_2befd0;
        case 0x2befd4u: goto label_2befd4;
        case 0x2befd8u: goto label_2befd8;
        case 0x2befdcu: goto label_2befdc;
        case 0x2befe0u: goto label_2befe0;
        case 0x2befe4u: goto label_2befe4;
        case 0x2befe8u: goto label_2befe8;
        case 0x2befecu: goto label_2befec;
        case 0x2beff0u: goto label_2beff0;
        case 0x2beff4u: goto label_2beff4;
        case 0x2beff8u: goto label_2beff8;
        case 0x2beffcu: goto label_2beffc;
        case 0x2bf000u: goto label_2bf000;
        case 0x2bf004u: goto label_2bf004;
        case 0x2bf008u: goto label_2bf008;
        case 0x2bf00cu: goto label_2bf00c;
        case 0x2bf010u: goto label_2bf010;
        case 0x2bf014u: goto label_2bf014;
        case 0x2bf018u: goto label_2bf018;
        case 0x2bf01cu: goto label_2bf01c;
        case 0x2bf020u: goto label_2bf020;
        case 0x2bf024u: goto label_2bf024;
        case 0x2bf028u: goto label_2bf028;
        case 0x2bf02cu: goto label_2bf02c;
        case 0x2bf030u: goto label_2bf030;
        case 0x2bf034u: goto label_2bf034;
        case 0x2bf038u: goto label_2bf038;
        case 0x2bf03cu: goto label_2bf03c;
        case 0x2bf040u: goto label_2bf040;
        case 0x2bf044u: goto label_2bf044;
        case 0x2bf048u: goto label_2bf048;
        case 0x2bf04cu: goto label_2bf04c;
        case 0x2bf050u: goto label_2bf050;
        case 0x2bf054u: goto label_2bf054;
        case 0x2bf058u: goto label_2bf058;
        case 0x2bf05cu: goto label_2bf05c;
        case 0x2bf060u: goto label_2bf060;
        case 0x2bf064u: goto label_2bf064;
        case 0x2bf068u: goto label_2bf068;
        case 0x2bf06cu: goto label_2bf06c;
        case 0x2bf070u: goto label_2bf070;
        case 0x2bf074u: goto label_2bf074;
        case 0x2bf078u: goto label_2bf078;
        case 0x2bf07cu: goto label_2bf07c;
        case 0x2bf080u: goto label_2bf080;
        case 0x2bf084u: goto label_2bf084;
        case 0x2bf088u: goto label_2bf088;
        case 0x2bf08cu: goto label_2bf08c;
        case 0x2bf090u: goto label_2bf090;
        case 0x2bf094u: goto label_2bf094;
        case 0x2bf098u: goto label_2bf098;
        case 0x2bf09cu: goto label_2bf09c;
        default: break;
    }

    ctx->pc = 0x2bede0u;

label_2bede0:
    // 0x2bede0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2bede4:
    // 0x2bede4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2bede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2bede8:
    // 0x2bede8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2bede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2bedec:
    // 0x2bedec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bedecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bedf0:
    // 0x2bedf0: 0x3e00008  jr          $ra
label_2bedf4:
    if (ctx->pc == 0x2BEDF4u) {
        ctx->pc = 0x2BEDF8u;
        goto label_2bedf8;
    }
    ctx->pc = 0x2BEDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDF8u;
label_2bedf8:
    // 0x2bedf8: 0x0  nop
    ctx->pc = 0x2bedf8u;
    // NOP
label_2bedfc:
    // 0x2bedfc: 0x0  nop
    ctx->pc = 0x2bedfcu;
    // NOP
label_2bee00:
    // 0x2bee00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2bee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2bee04:
    // 0x2bee04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2bee08:
    // 0x2bee08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2bee0c:
    // 0x2bee0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2bee10:
    // 0x2bee10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2bee14:
    // 0x2bee14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bee18:
    // 0x2bee18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bee1c:
    // 0x2bee1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bee20:
    // 0x2bee20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bee24:
    // 0x2bee24: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2bee24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_2bee28:
    // 0x2bee28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bee2c:
    // 0x2bee2c: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2bee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2bee30:
    // 0x2bee30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bee30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bee34:
    // 0x2bee34: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2bee34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2bee38:
    // 0x2bee38: 0x320f809  jalr        $t9
label_2bee3c:
    if (ctx->pc == 0x2BEE3Cu) {
        ctx->pc = 0x2BEE40u;
        goto label_2bee40;
    }
    ctx->pc = 0x2BEE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEE40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEE38u, 0x2BEE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BEE40u;
label_2bee40:
    // 0x2bee40: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2bee40u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bee44:
    // 0x2bee44: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bee48:
    // 0x2bee48: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2bee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2bee4c:
    // 0x2bee4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2bee50:
    if (ctx->pc == 0x2BEE50u) {
        ctx->pc = 0x2BEE54u;
        goto label_2bee54;
    }
    ctx->pc = 0x2BEE4Cu;
    {
        const bool branch_taken_0x2bee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee4c) {
            ctx->pc = 0x2BEE7Cu;
            goto label_2bee7c;
        }
    }
    ctx->pc = 0x2BEE54u;
label_2bee54:
    // 0x2bee54: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bee58:
    // 0x2bee58: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2bee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2bee5c:
    // 0x2bee5c: 0xc0afd0c  jal         func_2BF430
label_2bee60:
    if (ctx->pc == 0x2BEE60u) {
        ctx->pc = 0x2BEE64u;
        goto label_2bee64;
    }
    ctx->pc = 0x2BEE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BEE64u);
    ctx->pc = 0x2BF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF430u, 0x2BEE5Cu, 0x2BEE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE64u;
label_2bee64:
    // 0x2bee64: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bee68:
    // 0x2bee68: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2bee68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2bee6c:
    // 0x2bee6c: 0xc119c5c  jal         func_467170
label_2bee70:
    if (ctx->pc == 0x2BEE70u) {
        ctx->pc = 0x2BEE74u;
        goto label_2bee74;
    }
    ctx->pc = 0x2BEE6Cu;
    SET_GPR_U32(ctx, 31, 0x2BEE74u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2BEE6Cu, 0x2BEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE74u;
label_2bee74:
    // 0x2bee74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bee78:
    // 0x2bee78: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x2bee78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_2bee7c:
    // 0x2bee7c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bee80:
    // 0x2bee80: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2bee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2bee84:
    // 0x2bee84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bee84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bee88:
    // 0x2bee88: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2bee88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2bee8c:
    // 0x2bee8c: 0x320f809  jalr        $t9
label_2bee90:
    if (ctx->pc == 0x2BEE90u) {
        ctx->pc = 0x2BEE94u;
        goto label_2bee94;
    }
    ctx->pc = 0x2BEE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEE94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEE8Cu, 0x2BEE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BEE94u;
label_2bee94:
    // 0x2bee94: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2bee94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bee98:
    // 0x2bee98: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bee9c:
    // 0x2bee9c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2bee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2beea0:
    // 0x2beea0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2beea4:
    if (ctx->pc == 0x2BEEA4u) {
        ctx->pc = 0x2BEEA8u;
        goto label_2beea8;
    }
    ctx->pc = 0x2BEEA0u;
    {
        const bool branch_taken_0x2beea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beea0) {
            ctx->pc = 0x2BEED0u;
            goto label_2beed0;
        }
    }
    ctx->pc = 0x2BEEA8u;
label_2beea8:
    // 0x2beea8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2beea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2beeac:
    // 0x2beeac: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2beeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2beeb0:
    // 0x2beeb0: 0xc0afcfc  jal         func_2BF3F0
label_2beeb4:
    if (ctx->pc == 0x2BEEB4u) {
        ctx->pc = 0x2BEEB8u;
        goto label_2beeb8;
    }
    ctx->pc = 0x2BEEB0u;
    SET_GPR_U32(ctx, 31, 0x2BEEB8u);
    ctx->pc = 0x2BF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF3F0u, 0x2BEEB0u, 0x2BEEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEEB8u;
label_2beeb8:
    // 0x2beeb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2beeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2beebc:
    // 0x2beebc: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2beebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2beec0:
    // 0x2beec0: 0xc119c5c  jal         func_467170
label_2beec4:
    if (ctx->pc == 0x2BEEC4u) {
        ctx->pc = 0x2BEEC8u;
        goto label_2beec8;
    }
    ctx->pc = 0x2BEEC0u;
    SET_GPR_U32(ctx, 31, 0x2BEEC8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2BEEC0u, 0x2BEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEEC8u;
label_2beec8:
    // 0x2beec8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2beec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2beecc:
    // 0x2beecc: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2beeccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_2beed0:
    // 0x2beed0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2beed4:
    // 0x2beed4: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2beed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2beed8:
    // 0x2beed8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2beed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2beedc:
    // 0x2beedc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2beedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2beee0:
    // 0x2beee0: 0x320f809  jalr        $t9
label_2beee4:
    if (ctx->pc == 0x2BEEE4u) {
        ctx->pc = 0x2BEEE8u;
        goto label_2beee8;
    }
    ctx->pc = 0x2BEEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEEE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEEE0u, 0x2BEEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BEEE8u;
label_2beee8:
    // 0x2beee8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2beee8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2beeec:
    // 0x2beeec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2beeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2beef0:
    // 0x2beef0: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x2beef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2beef4:
    // 0x2beef4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2beef8:
    if (ctx->pc == 0x2BEEF8u) {
        ctx->pc = 0x2BEEFCu;
        goto label_2beefc;
    }
    ctx->pc = 0x2BEEF4u;
    {
        const bool branch_taken_0x2beef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beef4) {
            ctx->pc = 0x2BEF24u;
            goto label_2bef24;
        }
    }
    ctx->pc = 0x2BEEFCu;
label_2beefc:
    // 0x2beefc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2beefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bef00:
    // 0x2bef00: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2bef00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2bef04:
    // 0x2bef04: 0xc0afcec  jal         func_2BF3B0
label_2bef08:
    if (ctx->pc == 0x2BEF08u) {
        ctx->pc = 0x2BEF0Cu;
        goto label_2bef0c;
    }
    ctx->pc = 0x2BEF04u;
    SET_GPR_U32(ctx, 31, 0x2BEF0Cu);
    ctx->pc = 0x2BF3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF3B0u, 0x2BEF04u, 0x2BEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF0Cu;
label_2bef0c:
    // 0x2bef0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bef10:
    // 0x2bef10: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2bef10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2bef14:
    // 0x2bef14: 0xc119c5c  jal         func_467170
label_2bef18:
    if (ctx->pc == 0x2BEF18u) {
        ctx->pc = 0x2BEF1Cu;
        goto label_2bef1c;
    }
    ctx->pc = 0x2BEF14u;
    SET_GPR_U32(ctx, 31, 0x2BEF1Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2BEF14u, 0x2BEF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF1Cu;
label_2bef1c:
    // 0x2bef1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bef20:
    // 0x2bef20: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x2bef20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
label_2bef24:
    // 0x2bef24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bef24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bef28:
    // 0x2bef28: 0x10000020  b           . + 4 + (0x20 << 2)
label_2bef2c:
    if (ctx->pc == 0x2BEF2Cu) {
        ctx->pc = 0x2BEF30u;
        goto label_2bef30;
    }
    ctx->pc = 0x2BEF28u;
    {
        const bool branch_taken_0x2bef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef28) {
            ctx->pc = 0x2BEFACu;
            goto label_2befac;
        }
    }
    ctx->pc = 0x2BEF30u;
label_2bef30:
    // 0x2bef30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bef34:
    // 0x2bef34: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2bef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2bef38:
    // 0x2bef38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bef38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bef3c:
    // 0x2bef3c: 0xc0afcdc  jal         func_2BF370
label_2bef40:
    if (ctx->pc == 0x2BEF40u) {
        ctx->pc = 0x2BEF44u;
        goto label_2bef44;
    }
    ctx->pc = 0x2BEF3Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF44u);
    ctx->pc = 0x2BF370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF370u, 0x2BEF3Cu, 0x2BEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF44u;
label_2bef44:
    // 0x2bef44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bef48:
    // 0x2bef48: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2bef4c:
    if (ctx->pc == 0x2BEF4Cu) {
        ctx->pc = 0x2BEF50u;
        goto label_2bef50;
    }
    ctx->pc = 0x2BEF48u;
    {
        const bool branch_taken_0x2bef48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef48) {
            ctx->pc = 0x2BEFA8u;
            goto label_2befa8;
        }
    }
    ctx->pc = 0x2BEF50u;
label_2bef50:
    // 0x2bef50: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bef54:
    // 0x2bef54: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2bef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2bef58:
    // 0x2bef58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bef58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bef5c:
    // 0x2bef5c: 0xc0afcdc  jal         func_2BF370
label_2bef60:
    if (ctx->pc == 0x2BEF60u) {
        ctx->pc = 0x2BEF64u;
        goto label_2bef64;
    }
    ctx->pc = 0x2BEF5Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF64u);
    ctx->pc = 0x2BF370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF370u, 0x2BEF5Cu, 0x2BEF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF64u;
label_2bef64:
    // 0x2bef64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bef64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bef68:
    // 0x2bef68: 0xc0afcb0  jal         func_2BF2C0
label_2bef6c:
    if (ctx->pc == 0x2BEF6Cu) {
        ctx->pc = 0x2BEF70u;
        goto label_2bef70;
    }
    ctx->pc = 0x2BEF68u;
    SET_GPR_U32(ctx, 31, 0x2BEF70u);
    ctx->pc = 0x2BF2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF2C0u, 0x2BEF68u, 0x2BEF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF70u;
label_2bef70:
    // 0x2bef70: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bef74:
    // 0x2bef74: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2bef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2bef78:
    // 0x2bef78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bef78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bef7c:
    // 0x2bef7c: 0xc0afcdc  jal         func_2BF370
label_2bef80:
    if (ctx->pc == 0x2BEF80u) {
        ctx->pc = 0x2BEF84u;
        goto label_2bef84;
    }
    ctx->pc = 0x2BEF7Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF84u);
    ctx->pc = 0x2BF370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF370u, 0x2BEF7Cu, 0x2BEF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF84u;
label_2bef84:
    // 0x2bef84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bef84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bef88:
    // 0x2bef88: 0xc119c5c  jal         func_467170
label_2bef8c:
    if (ctx->pc == 0x2BEF8Cu) {
        ctx->pc = 0x2BEF90u;
        goto label_2bef90;
    }
    ctx->pc = 0x2BEF88u;
    SET_GPR_U32(ctx, 31, 0x2BEF90u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2BEF88u, 0x2BEF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF90u;
label_2bef90:
    // 0x2bef90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bef94:
    // 0x2bef94: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2bef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2bef98:
    // 0x2bef98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bef98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bef9c:
    // 0x2bef9c: 0xc0afcdc  jal         func_2BF370
label_2befa0:
    if (ctx->pc == 0x2BEFA0u) {
        ctx->pc = 0x2BEFA4u;
        goto label_2befa4;
    }
    ctx->pc = 0x2BEF9Cu;
    SET_GPR_U32(ctx, 31, 0x2BEFA4u);
    ctx->pc = 0x2BF370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF370u, 0x2BEF9Cu, 0x2BEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFA4u;
label_2befa4:
    // 0x2befa4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2befa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2befa8:
    // 0x2befa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2befa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2befac:
    // 0x2befac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2befacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2befb0:
    // 0x2befb0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2befb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2befb4:
    // 0x2befb4: 0xc0afca0  jal         func_2BF280
label_2befb8:
    if (ctx->pc == 0x2BEFB8u) {
        ctx->pc = 0x2BEFBCu;
        goto label_2befbc;
    }
    ctx->pc = 0x2BEFB4u;
    SET_GPR_U32(ctx, 31, 0x2BEFBCu);
    ctx->pc = 0x2BF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF280u, 0x2BEFB4u, 0x2BEFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFBCu;
label_2befbc:
    // 0x2befbc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2befbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2befc0:
    // 0x2befc0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_2befc4:
    if (ctx->pc == 0x2BEFC4u) {
        ctx->pc = 0x2BEFC8u;
        goto label_2befc8;
    }
    ctx->pc = 0x2BEFC0u;
    {
        const bool branch_taken_0x2befc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2befc0) {
            ctx->pc = 0x2BEF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bef30;
        }
    }
    ctx->pc = 0x2BEFC8u;
label_2befc8:
    // 0x2befc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2befc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2befcc:
    // 0x2befcc: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2befccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2befd0:
    // 0x2befd0: 0xc0afc4c  jal         func_2BF130
label_2befd4:
    if (ctx->pc == 0x2BEFD4u) {
        ctx->pc = 0x2BEFD8u;
        goto label_2befd8;
    }
    ctx->pc = 0x2BEFD0u;
    SET_GPR_U32(ctx, 31, 0x2BEFD8u);
    ctx->pc = 0x2BF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF130u, 0x2BEFD0u, 0x2BEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFD8u;
label_2befd8:
    // 0x2befd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2befd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2befdc:
    // 0x2befdc: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x2befdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2befe0:
    // 0x2befe0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2befe4:
    if (ctx->pc == 0x2BEFE4u) {
        ctx->pc = 0x2BEFE8u;
        goto label_2befe8;
    }
    ctx->pc = 0x2BEFE0u;
    {
        const bool branch_taken_0x2befe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2befe0) {
            ctx->pc = 0x2BF010u;
            goto label_2bf010;
        }
    }
    ctx->pc = 0x2BEFE8u;
label_2befe8:
    // 0x2befe8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2befe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2befec:
    // 0x2befec: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2befecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2beff0:
    // 0x2beff0: 0xc0afc28  jal         func_2BF0A0
label_2beff4:
    if (ctx->pc == 0x2BEFF4u) {
        ctx->pc = 0x2BEFF8u;
        goto label_2beff8;
    }
    ctx->pc = 0x2BEFF0u;
    SET_GPR_U32(ctx, 31, 0x2BEFF8u);
    ctx->pc = 0x2BF0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF0A0u, 0x2BEFF0u, 0x2BEFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFF8u;
label_2beff8:
    // 0x2beff8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2beff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2beffc:
    // 0x2beffc: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2beffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2bf000:
    // 0x2bf000: 0xc119c5c  jal         func_467170
label_2bf004:
    if (ctx->pc == 0x2BF004u) {
        ctx->pc = 0x2BF008u;
        goto label_2bf008;
    }
    ctx->pc = 0x2BF000u;
    SET_GPR_U32(ctx, 31, 0x2BF008u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2BF000u, 0x2BF008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF008u;
label_2bf008:
    // 0x2bf008: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2bf008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bf00c:
    // 0x2bf00c: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x2bf00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
label_2bf010:
    // 0x2bf010: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bf010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf014:
    // 0x2bf014: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bf014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf018:
    // 0x2bf018: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bf018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf01c:
    // 0x2bf01c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_2bf020:
    if (ctx->pc == 0x2BF020u) {
        ctx->pc = 0x2BF024u;
        goto label_2bf024;
    }
    ctx->pc = 0x2BF01Cu;
    {
        const bool branch_taken_0x2bf01c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf01c) {
            ctx->pc = 0x2BF034u;
            goto label_2bf034;
        }
    }
    ctx->pc = 0x2BF024u;
label_2bf024:
    // 0x2bf024: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_2bf028:
    if (ctx->pc == 0x2BF028u) {
        ctx->pc = 0x2BF02Cu;
        goto label_2bf02c;
    }
    ctx->pc = 0x2BF024u;
    {
        const bool branch_taken_0x2bf024 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf024) {
            ctx->pc = 0x2BF034u;
            goto label_2bf034;
        }
    }
    ctx->pc = 0x2BF02Cu;
label_2bf02c:
    // 0x2bf02c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf030:
    // 0x2bf030: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2bf030u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bf034:
    // 0x2bf034: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2bf038:
    if (ctx->pc == 0x2BF038u) {
        ctx->pc = 0x2BF03Cu;
        goto label_2bf03c;
    }
    ctx->pc = 0x2BF034u;
    {
        const bool branch_taken_0x2bf034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf034) {
            ctx->pc = 0x2BF04Cu;
            goto label_2bf04c;
        }
    }
    ctx->pc = 0x2BF03Cu;
label_2bf03c:
    // 0x2bf03c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2bf040:
    if (ctx->pc == 0x2BF040u) {
        ctx->pc = 0x2BF044u;
        goto label_2bf044;
    }
    ctx->pc = 0x2BF03Cu;
    {
        const bool branch_taken_0x2bf03c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf03c) {
            ctx->pc = 0x2BF04Cu;
            goto label_2bf04c;
        }
    }
    ctx->pc = 0x2BF044u;
label_2bf044:
    // 0x2bf044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf048:
    // 0x2bf048: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2bf048u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bf04c:
    // 0x2bf04c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2bf050:
    if (ctx->pc == 0x2BF050u) {
        ctx->pc = 0x2BF054u;
        goto label_2bf054;
    }
    ctx->pc = 0x2BF04Cu;
    {
        const bool branch_taken_0x2bf04c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf04c) {
            ctx->pc = 0x2BF070u;
            goto label_2bf070;
        }
    }
    ctx->pc = 0x2BF054u;
label_2bf054:
    // 0x2bf054: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2bf054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2bf058:
    // 0x2bf058: 0xc08ec48  jal         func_23B120
label_2bf05c:
    if (ctx->pc == 0x2BF05Cu) {
        ctx->pc = 0x2BF060u;
        goto label_2bf060;
    }
    ctx->pc = 0x2BF058u;
    SET_GPR_U32(ctx, 31, 0x2BF060u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x2BF058u, 0x2BF060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF060u;
label_2bf060:
    // 0x2bf060: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bf064:
    if (ctx->pc == 0x2BF064u) {
        ctx->pc = 0x2BF068u;
        goto label_2bf068;
    }
    ctx->pc = 0x2BF060u;
    {
        const bool branch_taken_0x2bf060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf060) {
            ctx->pc = 0x2BF070u;
            goto label_2bf070;
        }
    }
    ctx->pc = 0x2BF068u;
label_2bf068:
    // 0x2bf068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf06c:
    // 0x2bf06c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2bf06cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bf070:
    // 0x2bf070: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bf070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bf074:
    // 0x2bf074: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bf074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2bf078:
    // 0x2bf078: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bf078u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bf07c:
    // 0x2bf07c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bf07cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bf080:
    // 0x2bf080: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bf080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bf084:
    // 0x2bf084: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bf088:
    // 0x2bf088: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf08c:
    // 0x2bf08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf090:
    // 0x2bf090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf094:
    // 0x2bf094: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2bf094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2bf098:
    // 0x2bf098: 0x3e00008  jr          $ra
label_2bf09c:
    if (ctx->pc == 0x2BF09Cu) {
        ctx->pc = 0x2BF0A0u;
        goto label_fallthrough_0x2bf098;
    }
    ctx->pc = 0x2BF098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bf098:
    ctx->pc = 0x2BF0A0u;
}
