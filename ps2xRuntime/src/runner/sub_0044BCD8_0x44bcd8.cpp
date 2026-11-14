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

// Function: sub_0044BCD8
// Address: 0x44bcd8 - 0x44bf20
void sub_0044BCD8_0x44bcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BCD8_0x44bcd8");
#endif

    switch (ctx->pc) {
        case 0x44bcd8u: goto label_44bcd8;
        case 0x44bcdcu: goto label_44bcdc;
        case 0x44bce0u: goto label_44bce0;
        case 0x44bce4u: goto label_44bce4;
        case 0x44bce8u: goto label_44bce8;
        case 0x44bcecu: goto label_44bcec;
        case 0x44bcf0u: goto label_44bcf0;
        case 0x44bcf4u: goto label_44bcf4;
        case 0x44bcf8u: goto label_44bcf8;
        case 0x44bcfcu: goto label_44bcfc;
        case 0x44bd00u: goto label_44bd00;
        case 0x44bd04u: goto label_44bd04;
        case 0x44bd08u: goto label_44bd08;
        case 0x44bd0cu: goto label_44bd0c;
        case 0x44bd10u: goto label_44bd10;
        case 0x44bd14u: goto label_44bd14;
        case 0x44bd18u: goto label_44bd18;
        case 0x44bd1cu: goto label_44bd1c;
        case 0x44bd20u: goto label_44bd20;
        case 0x44bd24u: goto label_44bd24;
        case 0x44bd28u: goto label_44bd28;
        case 0x44bd2cu: goto label_44bd2c;
        case 0x44bd30u: goto label_44bd30;
        case 0x44bd34u: goto label_44bd34;
        case 0x44bd38u: goto label_44bd38;
        case 0x44bd3cu: goto label_44bd3c;
        case 0x44bd40u: goto label_44bd40;
        case 0x44bd44u: goto label_44bd44;
        case 0x44bd48u: goto label_44bd48;
        case 0x44bd4cu: goto label_44bd4c;
        case 0x44bd50u: goto label_44bd50;
        case 0x44bd54u: goto label_44bd54;
        case 0x44bd58u: goto label_44bd58;
        case 0x44bd5cu: goto label_44bd5c;
        case 0x44bd60u: goto label_44bd60;
        case 0x44bd64u: goto label_44bd64;
        case 0x44bd68u: goto label_44bd68;
        case 0x44bd6cu: goto label_44bd6c;
        case 0x44bd70u: goto label_44bd70;
        case 0x44bd74u: goto label_44bd74;
        case 0x44bd78u: goto label_44bd78;
        case 0x44bd7cu: goto label_44bd7c;
        case 0x44bd80u: goto label_44bd80;
        case 0x44bd84u: goto label_44bd84;
        case 0x44bd88u: goto label_44bd88;
        case 0x44bd8cu: goto label_44bd8c;
        case 0x44bd90u: goto label_44bd90;
        case 0x44bd94u: goto label_44bd94;
        case 0x44bd98u: goto label_44bd98;
        case 0x44bd9cu: goto label_44bd9c;
        case 0x44bda0u: goto label_44bda0;
        case 0x44bda4u: goto label_44bda4;
        case 0x44bda8u: goto label_44bda8;
        case 0x44bdacu: goto label_44bdac;
        case 0x44bdb0u: goto label_44bdb0;
        case 0x44bdb4u: goto label_44bdb4;
        case 0x44bdb8u: goto label_44bdb8;
        case 0x44bdbcu: goto label_44bdbc;
        case 0x44bdc0u: goto label_44bdc0;
        case 0x44bdc4u: goto label_44bdc4;
        case 0x44bdc8u: goto label_44bdc8;
        case 0x44bdccu: goto label_44bdcc;
        case 0x44bdd0u: goto label_44bdd0;
        case 0x44bdd4u: goto label_44bdd4;
        case 0x44bdd8u: goto label_44bdd8;
        case 0x44bddcu: goto label_44bddc;
        case 0x44bde0u: goto label_44bde0;
        case 0x44bde4u: goto label_44bde4;
        case 0x44bde8u: goto label_44bde8;
        case 0x44bdecu: goto label_44bdec;
        case 0x44bdf0u: goto label_44bdf0;
        case 0x44bdf4u: goto label_44bdf4;
        case 0x44bdf8u: goto label_44bdf8;
        case 0x44bdfcu: goto label_44bdfc;
        case 0x44be00u: goto label_44be00;
        case 0x44be04u: goto label_44be04;
        case 0x44be08u: goto label_44be08;
        case 0x44be0cu: goto label_44be0c;
        case 0x44be10u: goto label_44be10;
        case 0x44be14u: goto label_44be14;
        case 0x44be18u: goto label_44be18;
        case 0x44be1cu: goto label_44be1c;
        case 0x44be20u: goto label_44be20;
        case 0x44be24u: goto label_44be24;
        case 0x44be28u: goto label_44be28;
        case 0x44be2cu: goto label_44be2c;
        case 0x44be30u: goto label_44be30;
        case 0x44be34u: goto label_44be34;
        case 0x44be38u: goto label_44be38;
        case 0x44be3cu: goto label_44be3c;
        case 0x44be40u: goto label_44be40;
        case 0x44be44u: goto label_44be44;
        case 0x44be48u: goto label_44be48;
        case 0x44be4cu: goto label_44be4c;
        case 0x44be50u: goto label_44be50;
        case 0x44be54u: goto label_44be54;
        case 0x44be58u: goto label_44be58;
        case 0x44be5cu: goto label_44be5c;
        case 0x44be60u: goto label_44be60;
        case 0x44be64u: goto label_44be64;
        case 0x44be68u: goto label_44be68;
        case 0x44be6cu: goto label_44be6c;
        case 0x44be70u: goto label_44be70;
        case 0x44be74u: goto label_44be74;
        case 0x44be78u: goto label_44be78;
        case 0x44be7cu: goto label_44be7c;
        case 0x44be80u: goto label_44be80;
        case 0x44be84u: goto label_44be84;
        case 0x44be88u: goto label_44be88;
        case 0x44be8cu: goto label_44be8c;
        case 0x44be90u: goto label_44be90;
        case 0x44be94u: goto label_44be94;
        case 0x44be98u: goto label_44be98;
        case 0x44be9cu: goto label_44be9c;
        case 0x44bea0u: goto label_44bea0;
        case 0x44bea4u: goto label_44bea4;
        case 0x44bea8u: goto label_44bea8;
        case 0x44beacu: goto label_44beac;
        case 0x44beb0u: goto label_44beb0;
        case 0x44beb4u: goto label_44beb4;
        case 0x44beb8u: goto label_44beb8;
        case 0x44bebcu: goto label_44bebc;
        case 0x44bec0u: goto label_44bec0;
        case 0x44bec4u: goto label_44bec4;
        case 0x44bec8u: goto label_44bec8;
        case 0x44beccu: goto label_44becc;
        case 0x44bed0u: goto label_44bed0;
        case 0x44bed4u: goto label_44bed4;
        case 0x44bed8u: goto label_44bed8;
        case 0x44bedcu: goto label_44bedc;
        case 0x44bee0u: goto label_44bee0;
        case 0x44bee4u: goto label_44bee4;
        case 0x44bee8u: goto label_44bee8;
        case 0x44beecu: goto label_44beec;
        case 0x44bef0u: goto label_44bef0;
        case 0x44bef4u: goto label_44bef4;
        case 0x44bef8u: goto label_44bef8;
        case 0x44befcu: goto label_44befc;
        case 0x44bf00u: goto label_44bf00;
        case 0x44bf04u: goto label_44bf04;
        case 0x44bf08u: goto label_44bf08;
        case 0x44bf0cu: goto label_44bf0c;
        case 0x44bf10u: goto label_44bf10;
        case 0x44bf14u: goto label_44bf14;
        case 0x44bf18u: goto label_44bf18;
        case 0x44bf1cu: goto label_44bf1c;
        default: break;
    }

    ctx->pc = 0x44bcd8u;

label_44bcd8:
    // 0x44bcd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x44bcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_44bcdc:
    // 0x44bcdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44bce0:
    // 0x44bce0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x44bce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_44bce4:
    // 0x44bce4: 0x24c6001f  addiu       $a2, $a2, 0x1F
    ctx->pc = 0x44bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
label_44bce8:
    // 0x44bce8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x44bce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_44bcec:
    // 0x44bcec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x44bcecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44bcf0:
    // 0x44bcf0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x44bcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_44bcf4:
    // 0x44bcf4: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x44bcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
label_44bcf8:
    // 0x44bcf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44bcfc:
    // 0x44bcfc: 0x26b3ffe0  addiu       $s3, $s5, -0x20
    ctx->pc = 0x44bcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
label_44bd00:
    // 0x44bd00: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x44bd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_44bd04:
    // 0x44bd04: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x44bd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_44bd08:
    // 0x44bd08: 0xc2b024  and         $s6, $a2, $v0
    ctx->pc = 0x44bd08u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_44bd0c:
    // 0x44bd0c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x44bd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_44bd10:
    // 0x44bd10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44bd14:
    // 0x44bd14: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x44bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44bd18:
    // 0x44bd18: 0x2c3a023  subu        $s4, $s6, $v1
    ctx->pc = 0x44bd18u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_44bd1c:
    // 0x44bd1c: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
label_44bd20:
    if (ctx->pc == 0x44BD20u) {
        ctx->pc = 0x44BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD1Cu;
        // 0x44bd20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BD24u;
        goto label_44bd24;
    }
    ctx->pc = 0x44BD1Cu;
    {
        const bool branch_taken_0x44bd1c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x44BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD1Cu;
        // 0x44bd20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bd1c) {
            ctx->pc = 0x44BD3Cu;
            goto label_44bd3c;
        }
    }
    ctx->pc = 0x44BD24u;
label_44bd24:
    // 0x44bd24: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x44bd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_44bd28:
    // 0x44bd28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x44bd28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44bd2c:
    // 0x44bd2c: 0xc112ed0  jal         func_44BB40
label_44bd30:
    if (ctx->pc == 0x44BD30u) {
        ctx->pc = 0x44BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD2Cu;
        // 0x44bd30: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BD34u;
        goto label_44bd34;
    }
    ctx->pc = 0x44BD2Cu;
    SET_GPR_U32(ctx, 31, 0x44BD34u);
    ctx->pc = 0x44BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BD2Cu;
    // 0x44bd30: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BB40u, 0x44BD2Cu, 0x44BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BD34u;
label_44bd34:
    // 0x44bd34: 0x1000006f  b           . + 4 + (0x6F << 2)
label_44bd38:
    if (ctx->pc == 0x44BD38u) {
        ctx->pc = 0x44BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD34u;
        // 0x44bd38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BD3Cu;
        goto label_44bd3c;
    }
    ctx->pc = 0x44BD34u;
    {
        const bool branch_taken_0x44bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD34u;
        // 0x44bd38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bd34) {
            ctx->pc = 0x44BEF4u;
            goto label_44bef4;
        }
    }
    ctx->pc = 0x44BD3Cu;
label_44bd3c:
    // 0x44bd3c: 0x14a023  negu        $s4, $s4
    ctx->pc = 0x44bd3cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_44bd40:
    // 0x44bd40: 0x2a820100  slti        $v0, $s4, 0x100
    ctx->pc = 0x44bd40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
label_44bd44:
    // 0x44bd44: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_44bd48:
    if (ctx->pc == 0x44BD48u) {
        ctx->pc = 0x44BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD44u;
        // 0x44bd48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BD4Cu;
        goto label_44bd4c;
    }
    ctx->pc = 0x44BD44u;
    {
        const bool branch_taken_0x44bd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD44u;
        // 0x44bd48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bd44) {
            ctx->pc = 0x44BEF4u;
            goto label_44bef4;
        }
    }
    ctx->pc = 0x44BD4Cu;
label_44bd4c:
    // 0x44bd4c: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x44bd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_44bd50:
    // 0x44bd50: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x44bd50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44bd54:
    // 0x44bd54: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x44bd54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_44bd58:
    // 0x44bd58: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_44bd5c:
    if (ctx->pc == 0x44BD5Cu) {
        ctx->pc = 0x44BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD58u;
        // 0x44bd5c: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BD60u;
        goto label_44bd60;
    }
    ctx->pc = 0x44BD58u;
    {
        const bool branch_taken_0x44bd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD58u;
        // 0x44bd5c: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bd58) {
            ctx->pc = 0x44BE88u;
            goto label_44be88;
        }
    }
    ctx->pc = 0x44BD60u;
label_44bd60:
    // 0x44bd60: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x44bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_44bd64:
    // 0x44bd64: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x44bd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_44bd68:
    // 0x44bd68: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x44bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_44bd6c:
    // 0x44bd6c: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x44bd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_44bd70:
    // 0x44bd70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44bd74:
    // 0x44bd74: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x44bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_44bd78:
    // 0x44bd78: 0xae470010  sw          $a3, 0x10($s2)
    ctx->pc = 0x44bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 7));
label_44bd7c:
    // 0x44bd7c: 0x40f809  jalr        $v0
label_44bd80:
    if (ctx->pc == 0x44BD80u) {
        ctx->pc = 0x44BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD7Cu;
        // 0x44bd80: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BD84u;
        goto label_44bd84;
    }
    ctx->pc = 0x44BD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44BD84u);
        ctx->pc = 0x44BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD7Cu;
        // 0x44bd80: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44BD7Cu, 0x44BD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44BD84u;
label_44bd84:
    // 0x44bd84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44bd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44bd88:
    // 0x44bd88: 0x5620000f  bnel        $s1, $zero, . + 4 + (0xF << 2)
label_44bd8c:
    if (ctx->pc == 0x44BD8Cu) {
        ctx->pc = 0x44BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD88u;
        // 0x44bd8c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BD90u;
        goto label_44bd90;
    }
    ctx->pc = 0x44BD88u;
    {
        const bool branch_taken_0x44bd88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x44bd88) {
            ctx->pc = 0x44BD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BD88u;
            // 0x44bd8c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BDC8u;
            goto label_44bdc8;
        }
    }
    ctx->pc = 0x44BD90u;
label_44bd90:
    // 0x44bd90: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x44bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44bd94:
    // 0x44bd94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44bd98:
    // 0x44bd98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44bd9c:
    // 0x44bd9c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_44bda0:
    // 0x44bda0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x44bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_44bda4:
    // 0x44bda4: 0xc1035f6  jal         func_40D7D8
label_44bda8:
    if (ctx->pc == 0x44BDA8u) {
        ctx->pc = 0x44BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDA4u;
        // 0x44bda8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BDACu;
        goto label_44bdac;
    }
    ctx->pc = 0x44BDA4u;
    SET_GPR_U32(ctx, 31, 0x44BDACu);
    ctx->pc = 0x44BDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BDA4u;
    // 0x44bda8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44BDA4u, 0x44BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BDACu;
label_44bdac:
    // 0x44bdac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44bdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_44bdb0:
    // 0x44bdb0: 0xc103628  jal         func_40D8A0
label_44bdb4:
    if (ctx->pc == 0x44BDB4u) {
        ctx->pc = 0x44BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDB0u;
        // 0x44bdb4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BDB8u;
        goto label_44bdb8;
    }
    ctx->pc = 0x44BDB0u;
    SET_GPR_U32(ctx, 31, 0x44BDB8u);
    ctx->pc = 0x44BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BDB0u;
    // 0x44bdb4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44BDB0u, 0x44BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BDB8u;
label_44bdb8:
    // 0x44bdb8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x44bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44bdbc:
    // 0x44bdbc: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x44bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_44bdc0:
    // 0x44bdc0: 0x10000031  b           . + 4 + (0x31 << 2)
label_44bdc4:
    if (ctx->pc == 0x44BDC4u) {
        ctx->pc = 0x44BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDC0u;
        // 0x44bdc4: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BDC8u;
        goto label_44bdc8;
    }
    ctx->pc = 0x44BDC0u;
    {
        const bool branch_taken_0x44bdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDC0u;
        // 0x44bdc4: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bdc0) {
            ctx->pc = 0x44BE88u;
            goto label_44be88;
        }
    }
    ctx->pc = 0x44BDC8u;
label_44bdc8:
    // 0x44bdc8: 0x5222002f  beql        $s1, $v0, . + 4 + (0x2F << 2)
label_44bdcc:
    if (ctx->pc == 0x44BDCCu) {
        ctx->pc = 0x44BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDC8u;
        // 0x44bdcc: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BDD0u;
        goto label_44bdd0;
    }
    ctx->pc = 0x44BDC8u;
    {
        const bool branch_taken_0x44bdc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x44bdc8) {
            ctx->pc = 0x44BDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BDC8u;
            // 0x44bdcc: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BE88u;
            goto label_44be88;
        }
    }
    ctx->pc = 0x44BDD0u;
label_44bdd0:
    // 0x44bdd0: 0x5200002d  beql        $s0, $zero, . + 4 + (0x2D << 2)
label_44bdd4:
    if (ctx->pc == 0x44BDD4u) {
        ctx->pc = 0x44BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDD0u;
        // 0x44bdd4: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BDD8u;
        goto label_44bdd8;
    }
    ctx->pc = 0x44BDD0u;
    {
        const bool branch_taken_0x44bdd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bdd0) {
            ctx->pc = 0x44BDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BDD0u;
            // 0x44bdd4: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BE88u;
            goto label_44be88;
        }
    }
    ctx->pc = 0x44BDD8u;
label_44bdd8:
    // 0x44bdd8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x44bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_44bddc:
    // 0x44bddc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x44bddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44bde0:
    // 0x44bde0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x44bde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_44bde4:
    // 0x44bde4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_44bde8:
    if (ctx->pc == 0x44BDE8u) {
        ctx->pc = 0x44BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDE4u;
        // 0x44bde8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BDECu;
        goto label_44bdec;
    }
    ctx->pc = 0x44BDE4u;
    {
        const bool branch_taken_0x44bde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDE4u;
        // 0x44bde8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bde4) {
            ctx->pc = 0x44BE40u;
            goto label_44be40;
        }
    }
    ctx->pc = 0x44BDECu;
label_44bdec:
    // 0x44bdec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44bdecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_44bdf0:
    // 0x44bdf0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_44bdf4:
    if (ctx->pc == 0x44BDF4u) {
        ctx->pc = 0x44BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDF0u;
        // 0x44bdf4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BDF8u;
        goto label_44bdf8;
    }
    ctx->pc = 0x44BDF0u;
    {
        const bool branch_taken_0x44bdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDF0u;
        // 0x44bdf4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bdf0) {
            ctx->pc = 0x44BE28u;
            goto label_44be28;
        }
    }
    ctx->pc = 0x44BDF8u;
label_44bdf8:
    // 0x44bdf8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_44bdfc:
    if (ctx->pc == 0x44BDFCu) {
        ctx->pc = 0x44BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDF8u;
        // 0x44bdfc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BE00u;
        goto label_44be00;
    }
    ctx->pc = 0x44BDF8u;
    {
        const bool branch_taken_0x44bdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bdf8) {
            ctx->pc = 0x44BDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BDF8u;
            // 0x44bdfc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BE18u;
            goto label_44be18;
        }
    }
    ctx->pc = 0x44BE00u;
label_44be00:
    // 0x44be00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x44be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_44be04:
    // 0x44be04: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x44be04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_44be08:
    // 0x44be08: 0x26290008  addiu       $t1, $s1, 0x8
    ctx->pc = 0x44be08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_44be0c:
    // 0x44be0c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44be0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44be10:
    // 0x44be10: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x44be10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_44be14:
    // 0x44be14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44be14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44be18:
    // 0x44be18: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44be18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44be1c:
    // 0x44be1c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x44be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_44be20:
    // 0x44be20: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44be20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44be24:
    // 0x44be24: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x44be24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_44be28:
    // 0x44be28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44be2c:
    // 0x44be2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44be2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44be30:
    // 0x44be30: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x44be30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_44be34:
    // 0x44be34: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44be34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44be38:
    // 0x44be38: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_44be3c:
    if (ctx->pc == 0x44BE3Cu) {
        ctx->pc = 0x44BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BE38u;
        // 0x44be3c: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BE40u;
        goto label_44be40;
    }
    ctx->pc = 0x44BE38u;
    {
        const bool branch_taken_0x44be38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BE38u;
        // 0x44be3c: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44be38) {
            ctx->pc = 0x44BE84u;
            goto label_44be84;
        }
    }
    ctx->pc = 0x44BE40u;
label_44be40:
    // 0x44be40: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x44be40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44be44:
    // 0x44be44: 0x0  nop
    ctx->pc = 0x44be44u;
    // NOP
label_44be48:
    // 0x44be48: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44be4c:
    // 0x44be4c: 0x25250008  addiu       $a1, $t1, 0x8
    ctx->pc = 0x44be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_44be50:
    // 0x44be50: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x44be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_44be54:
    // 0x44be54: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x44be54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_44be58:
    // 0x44be58: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44be58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44be5c:
    // 0x44be5c: 0x25270018  addiu       $a3, $t1, 0x18
    ctx->pc = 0x44be5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_44be60:
    // 0x44be60: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x44be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_44be64:
    // 0x44be64: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x44be64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_44be68:
    // 0x44be68: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x44be68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_44be6c:
    // 0x44be6c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x44be6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_44be70:
    // 0x44be70: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x44be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_44be74:
    // 0x44be74: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x44be74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_44be78:
    // 0x44be78: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x44be78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_44be7c:
    // 0x44be7c: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
label_44be80:
    if (ctx->pc == 0x44BE80u) {
        ctx->pc = 0x44BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BE7Cu;
        // 0x44be80: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BE84u;
        goto label_44be84;
    }
    ctx->pc = 0x44BE7Cu;
    {
        const bool branch_taken_0x44be7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BE7Cu;
        // 0x44be80: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44be7c) {
            ctx->pc = 0x44BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44be48;
        }
    }
    ctx->pc = 0x44BE84u;
label_44be84:
    // 0x44be84: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x44be84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_44be88:
    // 0x44be88: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_44be8c:
    if (ctx->pc == 0x44BE8Cu) {
        ctx->pc = 0x44BE90u;
        goto label_44be90;
    }
    ctx->pc = 0x44BE88u;
    {
        const bool branch_taken_0x44be88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44be88) {
            ctx->pc = 0x44BEA4u;
            goto label_44bea4;
        }
    }
    ctx->pc = 0x44BE90u;
label_44be90:
    // 0x44be90: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x44be90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_44be94:
    // 0x44be94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x44be94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_44be98:
    // 0x44be98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44be9c:
    // 0x44be9c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x44be9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_44bea0:
    // 0x44bea0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x44bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_44bea4:
    // 0x44bea4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_44bea8:
    if (ctx->pc == 0x44BEA8u) {
        ctx->pc = 0x44BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BEA4u;
        // 0x44bea8: 0x26c20020  addiu       $v0, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BEACu;
        goto label_44beac;
    }
    ctx->pc = 0x44BEA4u;
    {
        const bool branch_taken_0x44bea4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BEA4u;
        // 0x44bea8: 0x26c20020  addiu       $v0, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bea4) {
            ctx->pc = 0x44BEB4u;
            goto label_44beb4;
        }
    }
    ctx->pc = 0x44BEACu;
label_44beac:
    // 0x44beac: 0x10000011  b           . + 4 + (0x11 << 2)
label_44beb0:
    if (ctx->pc == 0x44BEB0u) {
        ctx->pc = 0x44BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BEACu;
        // 0x44beb0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BEB4u;
        goto label_44beb4;
    }
    ctx->pc = 0x44BEACu;
    {
        const bool branch_taken_0x44beac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BEACu;
        // 0x44beb0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44beac) {
            ctx->pc = 0x44BEF4u;
            goto label_44bef4;
        }
    }
    ctx->pc = 0x44BEB4u;
label_44beb4:
    // 0x44beb4: 0x2683ffe0  addiu       $v1, $s4, -0x20
    ctx->pc = 0x44beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967264));
label_44beb8:
    // 0x44beb8: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x44beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_44bebc:
    // 0x44bebc: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x44bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_44bec0:
    // 0x44bec0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x44bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_44bec4:
    // 0x44bec4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x44bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44bec8:
    // 0x44bec8: 0xae760008  sw          $s6, 0x8($s3)
    ctx->pc = 0x44bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 22));
label_44becc:
    // 0x44becc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x44beccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_44bed0:
    // 0x44bed0: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x44bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_44bed4:
    // 0x44bed4: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x44bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
label_44bed8:
    // 0x44bed8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x44bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_44bedc:
    // 0x44bedc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_44bee0:
    if (ctx->pc == 0x44BEE0u) {
        ctx->pc = 0x44BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BEDCu;
        // 0x44bee0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BEE4u;
        goto label_44bee4;
    }
    ctx->pc = 0x44BEDCu;
    {
        const bool branch_taken_0x44bedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44bedc) {
            ctx->pc = 0x44BEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BEDCu;
            // 0x44bee0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BEE4u;
            goto label_44bee4;
        }
    }
    ctx->pc = 0x44BEE4u;
label_44bee4:
    // 0x44bee4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_44bee8:
    // 0x44bee8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x44bee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_44beec:
    // 0x44beec: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x44beecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_44bef0:
    // 0x44bef0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44bef4:
    // 0x44bef4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x44bef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44bef8:
    // 0x44bef8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x44bef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44befc:
    // 0x44befc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x44befcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44bf00:
    // 0x44bf00: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x44bf00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44bf04:
    // 0x44bf04: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x44bf04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44bf08:
    // 0x44bf08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44bf08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44bf0c:
    // 0x44bf0c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x44bf0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44bf10:
    // 0x44bf10: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x44bf10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44bf14:
    // 0x44bf14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44bf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44bf18:
    // 0x44bf18: 0x3e00008  jr          $ra
label_44bf1c:
    if (ctx->pc == 0x44BF1Cu) {
        ctx->pc = 0x44BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF18u;
        // 0x44bf1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BF20u;
        goto label_fallthrough_0x44bf18;
    }
    ctx->pc = 0x44BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF18u;
        // 0x44bf1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44BF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44bf18:
    ctx->pc = 0x44BF20u;
}
