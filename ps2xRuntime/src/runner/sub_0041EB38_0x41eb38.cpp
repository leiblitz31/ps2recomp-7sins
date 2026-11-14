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

// Function: sub_0041EB38
// Address: 0x41eb38 - 0x41ef78
void sub_0041EB38_0x41eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EB38_0x41eb38");
#endif

    switch (ctx->pc) {
        case 0x41eb38u: goto label_41eb38;
        case 0x41eb3cu: goto label_41eb3c;
        case 0x41eb40u: goto label_41eb40;
        case 0x41eb44u: goto label_41eb44;
        case 0x41eb48u: goto label_41eb48;
        case 0x41eb4cu: goto label_41eb4c;
        case 0x41eb50u: goto label_41eb50;
        case 0x41eb54u: goto label_41eb54;
        case 0x41eb58u: goto label_41eb58;
        case 0x41eb5cu: goto label_41eb5c;
        case 0x41eb60u: goto label_41eb60;
        case 0x41eb64u: goto label_41eb64;
        case 0x41eb68u: goto label_41eb68;
        case 0x41eb6cu: goto label_41eb6c;
        case 0x41eb70u: goto label_41eb70;
        case 0x41eb74u: goto label_41eb74;
        case 0x41eb78u: goto label_41eb78;
        case 0x41eb7cu: goto label_41eb7c;
        case 0x41eb80u: goto label_41eb80;
        case 0x41eb84u: goto label_41eb84;
        case 0x41eb88u: goto label_41eb88;
        case 0x41eb8cu: goto label_41eb8c;
        case 0x41eb90u: goto label_41eb90;
        case 0x41eb94u: goto label_41eb94;
        case 0x41eb98u: goto label_41eb98;
        case 0x41eb9cu: goto label_41eb9c;
        case 0x41eba0u: goto label_41eba0;
        case 0x41eba4u: goto label_41eba4;
        case 0x41eba8u: goto label_41eba8;
        case 0x41ebacu: goto label_41ebac;
        case 0x41ebb0u: goto label_41ebb0;
        case 0x41ebb4u: goto label_41ebb4;
        case 0x41ebb8u: goto label_41ebb8;
        case 0x41ebbcu: goto label_41ebbc;
        case 0x41ebc0u: goto label_41ebc0;
        case 0x41ebc4u: goto label_41ebc4;
        case 0x41ebc8u: goto label_41ebc8;
        case 0x41ebccu: goto label_41ebcc;
        case 0x41ebd0u: goto label_41ebd0;
        case 0x41ebd4u: goto label_41ebd4;
        case 0x41ebd8u: goto label_41ebd8;
        case 0x41ebdcu: goto label_41ebdc;
        case 0x41ebe0u: goto label_41ebe0;
        case 0x41ebe4u: goto label_41ebe4;
        case 0x41ebe8u: goto label_41ebe8;
        case 0x41ebecu: goto label_41ebec;
        case 0x41ebf0u: goto label_41ebf0;
        case 0x41ebf4u: goto label_41ebf4;
        case 0x41ebf8u: goto label_41ebf8;
        case 0x41ebfcu: goto label_41ebfc;
        case 0x41ec00u: goto label_41ec00;
        case 0x41ec04u: goto label_41ec04;
        case 0x41ec08u: goto label_41ec08;
        case 0x41ec0cu: goto label_41ec0c;
        case 0x41ec10u: goto label_41ec10;
        case 0x41ec14u: goto label_41ec14;
        case 0x41ec18u: goto label_41ec18;
        case 0x41ec1cu: goto label_41ec1c;
        case 0x41ec20u: goto label_41ec20;
        case 0x41ec24u: goto label_41ec24;
        case 0x41ec28u: goto label_41ec28;
        case 0x41ec2cu: goto label_41ec2c;
        case 0x41ec30u: goto label_41ec30;
        case 0x41ec34u: goto label_41ec34;
        case 0x41ec38u: goto label_41ec38;
        case 0x41ec3cu: goto label_41ec3c;
        case 0x41ec40u: goto label_41ec40;
        case 0x41ec44u: goto label_41ec44;
        case 0x41ec48u: goto label_41ec48;
        case 0x41ec4cu: goto label_41ec4c;
        case 0x41ec50u: goto label_41ec50;
        case 0x41ec54u: goto label_41ec54;
        case 0x41ec58u: goto label_41ec58;
        case 0x41ec5cu: goto label_41ec5c;
        case 0x41ec60u: goto label_41ec60;
        case 0x41ec64u: goto label_41ec64;
        case 0x41ec68u: goto label_41ec68;
        case 0x41ec6cu: goto label_41ec6c;
        case 0x41ec70u: goto label_41ec70;
        case 0x41ec74u: goto label_41ec74;
        case 0x41ec78u: goto label_41ec78;
        case 0x41ec7cu: goto label_41ec7c;
        case 0x41ec80u: goto label_41ec80;
        case 0x41ec84u: goto label_41ec84;
        case 0x41ec88u: goto label_41ec88;
        case 0x41ec8cu: goto label_41ec8c;
        case 0x41ec90u: goto label_41ec90;
        case 0x41ec94u: goto label_41ec94;
        case 0x41ec98u: goto label_41ec98;
        case 0x41ec9cu: goto label_41ec9c;
        case 0x41eca0u: goto label_41eca0;
        case 0x41eca4u: goto label_41eca4;
        case 0x41eca8u: goto label_41eca8;
        case 0x41ecacu: goto label_41ecac;
        case 0x41ecb0u: goto label_41ecb0;
        case 0x41ecb4u: goto label_41ecb4;
        case 0x41ecb8u: goto label_41ecb8;
        case 0x41ecbcu: goto label_41ecbc;
        case 0x41ecc0u: goto label_41ecc0;
        case 0x41ecc4u: goto label_41ecc4;
        case 0x41ecc8u: goto label_41ecc8;
        case 0x41ecccu: goto label_41eccc;
        case 0x41ecd0u: goto label_41ecd0;
        case 0x41ecd4u: goto label_41ecd4;
        case 0x41ecd8u: goto label_41ecd8;
        case 0x41ecdcu: goto label_41ecdc;
        case 0x41ece0u: goto label_41ece0;
        case 0x41ece4u: goto label_41ece4;
        case 0x41ece8u: goto label_41ece8;
        case 0x41ececu: goto label_41ecec;
        case 0x41ecf0u: goto label_41ecf0;
        case 0x41ecf4u: goto label_41ecf4;
        case 0x41ecf8u: goto label_41ecf8;
        case 0x41ecfcu: goto label_41ecfc;
        case 0x41ed00u: goto label_41ed00;
        case 0x41ed04u: goto label_41ed04;
        case 0x41ed08u: goto label_41ed08;
        case 0x41ed0cu: goto label_41ed0c;
        case 0x41ed10u: goto label_41ed10;
        case 0x41ed14u: goto label_41ed14;
        case 0x41ed18u: goto label_41ed18;
        case 0x41ed1cu: goto label_41ed1c;
        case 0x41ed20u: goto label_41ed20;
        case 0x41ed24u: goto label_41ed24;
        case 0x41ed28u: goto label_41ed28;
        case 0x41ed2cu: goto label_41ed2c;
        case 0x41ed30u: goto label_41ed30;
        case 0x41ed34u: goto label_41ed34;
        case 0x41ed38u: goto label_41ed38;
        case 0x41ed3cu: goto label_41ed3c;
        case 0x41ed40u: goto label_41ed40;
        case 0x41ed44u: goto label_41ed44;
        case 0x41ed48u: goto label_41ed48;
        case 0x41ed4cu: goto label_41ed4c;
        case 0x41ed50u: goto label_41ed50;
        case 0x41ed54u: goto label_41ed54;
        case 0x41ed58u: goto label_41ed58;
        case 0x41ed5cu: goto label_41ed5c;
        case 0x41ed60u: goto label_41ed60;
        case 0x41ed64u: goto label_41ed64;
        case 0x41ed68u: goto label_41ed68;
        case 0x41ed6cu: goto label_41ed6c;
        case 0x41ed70u: goto label_41ed70;
        case 0x41ed74u: goto label_41ed74;
        case 0x41ed78u: goto label_41ed78;
        case 0x41ed7cu: goto label_41ed7c;
        case 0x41ed80u: goto label_41ed80;
        case 0x41ed84u: goto label_41ed84;
        case 0x41ed88u: goto label_41ed88;
        case 0x41ed8cu: goto label_41ed8c;
        case 0x41ed90u: goto label_41ed90;
        case 0x41ed94u: goto label_41ed94;
        case 0x41ed98u: goto label_41ed98;
        case 0x41ed9cu: goto label_41ed9c;
        case 0x41eda0u: goto label_41eda0;
        case 0x41eda4u: goto label_41eda4;
        case 0x41eda8u: goto label_41eda8;
        case 0x41edacu: goto label_41edac;
        case 0x41edb0u: goto label_41edb0;
        case 0x41edb4u: goto label_41edb4;
        case 0x41edb8u: goto label_41edb8;
        case 0x41edbcu: goto label_41edbc;
        case 0x41edc0u: goto label_41edc0;
        case 0x41edc4u: goto label_41edc4;
        case 0x41edc8u: goto label_41edc8;
        case 0x41edccu: goto label_41edcc;
        case 0x41edd0u: goto label_41edd0;
        case 0x41edd4u: goto label_41edd4;
        case 0x41edd8u: goto label_41edd8;
        case 0x41eddcu: goto label_41eddc;
        case 0x41ede0u: goto label_41ede0;
        case 0x41ede4u: goto label_41ede4;
        case 0x41ede8u: goto label_41ede8;
        case 0x41edecu: goto label_41edec;
        case 0x41edf0u: goto label_41edf0;
        case 0x41edf4u: goto label_41edf4;
        case 0x41edf8u: goto label_41edf8;
        case 0x41edfcu: goto label_41edfc;
        case 0x41ee00u: goto label_41ee00;
        case 0x41ee04u: goto label_41ee04;
        case 0x41ee08u: goto label_41ee08;
        case 0x41ee0cu: goto label_41ee0c;
        case 0x41ee10u: goto label_41ee10;
        case 0x41ee14u: goto label_41ee14;
        case 0x41ee18u: goto label_41ee18;
        case 0x41ee1cu: goto label_41ee1c;
        case 0x41ee20u: goto label_41ee20;
        case 0x41ee24u: goto label_41ee24;
        case 0x41ee28u: goto label_41ee28;
        case 0x41ee2cu: goto label_41ee2c;
        case 0x41ee30u: goto label_41ee30;
        case 0x41ee34u: goto label_41ee34;
        case 0x41ee38u: goto label_41ee38;
        case 0x41ee3cu: goto label_41ee3c;
        case 0x41ee40u: goto label_41ee40;
        case 0x41ee44u: goto label_41ee44;
        case 0x41ee48u: goto label_41ee48;
        case 0x41ee4cu: goto label_41ee4c;
        case 0x41ee50u: goto label_41ee50;
        case 0x41ee54u: goto label_41ee54;
        case 0x41ee58u: goto label_41ee58;
        case 0x41ee5cu: goto label_41ee5c;
        case 0x41ee60u: goto label_41ee60;
        case 0x41ee64u: goto label_41ee64;
        case 0x41ee68u: goto label_41ee68;
        case 0x41ee6cu: goto label_41ee6c;
        case 0x41ee70u: goto label_41ee70;
        case 0x41ee74u: goto label_41ee74;
        case 0x41ee78u: goto label_41ee78;
        case 0x41ee7cu: goto label_41ee7c;
        case 0x41ee80u: goto label_41ee80;
        case 0x41ee84u: goto label_41ee84;
        case 0x41ee88u: goto label_41ee88;
        case 0x41ee8cu: goto label_41ee8c;
        case 0x41ee90u: goto label_41ee90;
        case 0x41ee94u: goto label_41ee94;
        case 0x41ee98u: goto label_41ee98;
        case 0x41ee9cu: goto label_41ee9c;
        case 0x41eea0u: goto label_41eea0;
        case 0x41eea4u: goto label_41eea4;
        case 0x41eea8u: goto label_41eea8;
        case 0x41eeacu: goto label_41eeac;
        case 0x41eeb0u: goto label_41eeb0;
        case 0x41eeb4u: goto label_41eeb4;
        case 0x41eeb8u: goto label_41eeb8;
        case 0x41eebcu: goto label_41eebc;
        case 0x41eec0u: goto label_41eec0;
        case 0x41eec4u: goto label_41eec4;
        case 0x41eec8u: goto label_41eec8;
        case 0x41eeccu: goto label_41eecc;
        case 0x41eed0u: goto label_41eed0;
        case 0x41eed4u: goto label_41eed4;
        case 0x41eed8u: goto label_41eed8;
        case 0x41eedcu: goto label_41eedc;
        case 0x41eee0u: goto label_41eee0;
        case 0x41eee4u: goto label_41eee4;
        case 0x41eee8u: goto label_41eee8;
        case 0x41eeecu: goto label_41eeec;
        case 0x41eef0u: goto label_41eef0;
        case 0x41eef4u: goto label_41eef4;
        case 0x41eef8u: goto label_41eef8;
        case 0x41eefcu: goto label_41eefc;
        case 0x41ef00u: goto label_41ef00;
        case 0x41ef04u: goto label_41ef04;
        case 0x41ef08u: goto label_41ef08;
        case 0x41ef0cu: goto label_41ef0c;
        case 0x41ef10u: goto label_41ef10;
        case 0x41ef14u: goto label_41ef14;
        case 0x41ef18u: goto label_41ef18;
        case 0x41ef1cu: goto label_41ef1c;
        case 0x41ef20u: goto label_41ef20;
        case 0x41ef24u: goto label_41ef24;
        case 0x41ef28u: goto label_41ef28;
        case 0x41ef2cu: goto label_41ef2c;
        case 0x41ef30u: goto label_41ef30;
        case 0x41ef34u: goto label_41ef34;
        case 0x41ef38u: goto label_41ef38;
        case 0x41ef3cu: goto label_41ef3c;
        case 0x41ef40u: goto label_41ef40;
        case 0x41ef44u: goto label_41ef44;
        case 0x41ef48u: goto label_41ef48;
        case 0x41ef4cu: goto label_41ef4c;
        case 0x41ef50u: goto label_41ef50;
        case 0x41ef54u: goto label_41ef54;
        case 0x41ef58u: goto label_41ef58;
        case 0x41ef5cu: goto label_41ef5c;
        case 0x41ef60u: goto label_41ef60;
        case 0x41ef64u: goto label_41ef64;
        case 0x41ef68u: goto label_41ef68;
        case 0x41ef6cu: goto label_41ef6c;
        case 0x41ef70u: goto label_41ef70;
        case 0x41ef74u: goto label_41ef74;
        default: break;
    }

    ctx->pc = 0x41eb38u;

label_41eb38:
    // 0x41eb38: 0x340c8ae0  ori         $t4, $zero, 0x8AE0
    ctx->pc = 0x41eb38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35552);
label_41eb3c:
    // 0x41eb3c: 0x3ace823  subu        $sp, $sp, $t4
    ctx->pc = 0x41eb3cu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
label_41eb40:
    // 0x41eb40: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x41eb40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
label_41eb44:
    // 0x41eb44: 0x7db0fff0  sq          $s0, -0x10($t5)
    ctx->pc = 0x41eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967280), GPR_VEC(ctx, 16));
label_41eb48:
    // 0x41eb48: 0x7db1ffe0  sq          $s1, -0x20($t5)
    ctx->pc = 0x41eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967264), GPR_VEC(ctx, 17));
label_41eb4c:
    // 0x41eb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41eb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41eb50:
    // 0x41eb50: 0x7db3ffc0  sq          $s3, -0x40($t5)
    ctx->pc = 0x41eb50u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967232), GPR_VEC(ctx, 19));
label_41eb54:
    // 0x41eb54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41eb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41eb58:
    // 0x41eb58: 0x7db4ffb0  sq          $s4, -0x50($t5)
    ctx->pc = 0x41eb58u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967216), GPR_VEC(ctx, 20));
label_41eb5c:
    // 0x41eb5c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x41eb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_41eb60:
    // 0x41eb60: 0x7db5ffa0  sq          $s5, -0x60($t5)
    ctx->pc = 0x41eb60u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967200), GPR_VEC(ctx, 21));
label_41eb64:
    // 0x41eb64: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x41eb64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_41eb68:
    // 0x41eb68: 0x7db6ff90  sq          $s6, -0x70($t5)
    ctx->pc = 0x41eb68u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967184), GPR_VEC(ctx, 22));
label_41eb6c:
    // 0x41eb6c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x41eb6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_41eb70:
    // 0x41eb70: 0x7db7ff80  sq          $s7, -0x80($t5)
    ctx->pc = 0x41eb70u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967168), GPR_VEC(ctx, 23));
label_41eb74:
    // 0x41eb74: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x41eb74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_41eb78:
    // 0x41eb78: 0x7db2ffd0  sq          $s2, -0x30($t5)
    ctx->pc = 0x41eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967248), GPR_VEC(ctx, 18));
label_41eb7c:
    // 0x41eb7c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x41eb7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41eb80:
    // 0x41eb80: 0xfdbfff70  sd          $ra, -0x90($t5)
    ctx->pc = 0x41eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967152), GPR_U64(ctx, 31));
label_41eb84:
    // 0x41eb84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41eb88:
    // 0x41eb88: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41eb88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41eb8c:
    // 0x41eb8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41eb90:
    // 0x41eb90: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x41eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_41eb94:
    // 0x41eb94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41eb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41eb98:
    // 0x41eb98: 0x40f809  jalr        $v0
label_41eb9c:
    if (ctx->pc == 0x41EB9Cu) {
        ctx->pc = 0x41EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EB98u;
        // 0x41eb9c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EBA0u;
        goto label_41eba0;
    }
    ctx->pc = 0x41EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41EBA0u);
        ctx->pc = 0x41EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EB98u;
        // 0x41eb9c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EB98u, 0x41EBA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41EBA0u;
label_41eba0:
    // 0x41eba0: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x41eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_41eba4:
    // 0x41eba4: 0x40f809  jalr        $v0
label_41eba8:
    if (ctx->pc == 0x41EBA8u) {
        ctx->pc = 0x41EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBA4u;
        // 0x41eba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EBACu;
        goto label_41ebac;
    }
    ctx->pc = 0x41EBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41EBACu);
        ctx->pc = 0x41EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBA4u;
        // 0x41eba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EBA4u, 0x41EBACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41EBACu;
label_41ebac:
    // 0x41ebac: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x41ebacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_41ebb0:
    // 0x41ebb0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_41ebb4:
    if (ctx->pc == 0x41EBB4u) {
        ctx->pc = 0x41EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBB0u;
        // 0x41ebb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EBB8u;
        goto label_41ebb8;
    }
    ctx->pc = 0x41EBB0u;
    {
        const bool branch_taken_0x41ebb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBB0u;
        // 0x41ebb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ebb0) {
            ctx->pc = 0x41EBE8u;
            goto label_41ebe8;
        }
    }
    ctx->pc = 0x41EBB8u;
label_41ebb8:
    // 0x41ebb8: 0x820800ff  lb          $t0, 0xFF($s0)
    ctx->pc = 0x41ebb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 255)));
label_41ebbc:
    // 0x41ebbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41ebc0:
    // 0x41ebc0: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x41ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_41ebc4:
    // 0x41ebc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41ebc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ebc8:
    // 0x41ebc8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41ebc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41ebcc:
    // 0x41ebcc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x41ebccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_41ebd0:
    // 0x41ebd0: 0xc1035f6  jal         func_40D7D8
label_41ebd4:
    if (ctx->pc == 0x41EBD4u) {
        ctx->pc = 0x41EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBD0u;
        // 0x41ebd4: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EBD8u;
        goto label_41ebd8;
    }
    ctx->pc = 0x41EBD0u;
    SET_GPR_U32(ctx, 31, 0x41EBD8u);
    ctx->pc = 0x41EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EBD0u;
    // 0x41ebd4: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41EBD0u, 0x41EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EBD8u;
label_41ebd8:
    // 0x41ebd8: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x41ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_41ebdc:
    // 0x41ebdc: 0xc103628  jal         func_40D8A0
label_41ebe0:
    if (ctx->pc == 0x41EBE0u) {
        ctx->pc = 0x41EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBDCu;
        // 0x41ebe0: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EBE4u;
        goto label_41ebe4;
    }
    ctx->pc = 0x41EBDCu;
    SET_GPR_U32(ctx, 31, 0x41EBE4u);
    ctx->pc = 0x41EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EBDCu;
    // 0x41ebe0: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41EBDCu, 0x41EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EBE4u;
label_41ebe4:
    // 0x41ebe4: 0xa3a000ff  sb          $zero, 0xFF($sp)
    ctx->pc = 0x41ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 0));
label_41ebe8:
    // 0x41ebe8: 0xc10726c  jal         func_41C9B0
label_41ebec:
    if (ctx->pc == 0x41EBECu) {
        ctx->pc = 0x41EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBE8u;
        // 0x41ebec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EBF0u;
        goto label_41ebf0;
    }
    ctx->pc = 0x41EBE8u;
    SET_GPR_U32(ctx, 31, 0x41EBF0u);
    ctx->pc = 0x41EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EBE8u;
    // 0x41ebec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9B0u, 0x41EBE8u, 0x41EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EBF0u;
label_41ebf0:
    // 0x41ebf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41ebf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ebf4:
    // 0x41ebf4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_41ebf8:
    if (ctx->pc == 0x41EBF8u) {
        ctx->pc = 0x41EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EBF4u;
        // 0x41ebf8: 0xa3a00100  sb          $zero, 0x100($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EBFCu;
        goto label_41ebfc;
    }
    ctx->pc = 0x41EBF4u;
    {
        const bool branch_taken_0x41ebf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ebf4) {
            ctx->pc = 0x41EBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41EBF4u;
            // 0x41ebf8: 0xa3a00100  sb          $zero, 0x100($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41EC0Cu;
            goto label_41ec0c;
        }
    }
    ctx->pc = 0x41EBFCu;
label_41ebfc:
    // 0x41ebfc: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x41ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_41ec00:
    // 0x41ec00: 0x40f809  jalr        $v0
label_41ec04:
    if (ctx->pc == 0x41EC04u) {
        ctx->pc = 0x41EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC00u;
        // 0x41ec04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC08u;
        goto label_41ec08;
    }
    ctx->pc = 0x41EC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41EC08u);
        ctx->pc = 0x41EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC00u;
        // 0x41ec04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EC00u, 0x41EC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41EC08u;
label_41ec08:
    // 0x41ec08: 0xa3a00100  sb          $zero, 0x100($sp)
    ctx->pc = 0x41ec08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
label_41ec0c:
    // 0x41ec0c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_41ec10:
    if (ctx->pc == 0x41EC10u) {
        ctx->pc = 0x41EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC0Cu;
        // 0x41ec10: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC14u;
        goto label_41ec14;
    }
    ctx->pc = 0x41EC0Cu;
    {
        const bool branch_taken_0x41ec0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC0Cu;
        // 0x41ec10: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ec0c) {
            ctx->pc = 0x41EC98u;
            goto label_41ec98;
        }
    }
    ctx->pc = 0x41EC14u;
label_41ec14:
    // 0x41ec14: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x41ec14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_41ec18:
    // 0x41ec18: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_41ec1c:
    if (ctx->pc == 0x41EC1Cu) {
        ctx->pc = 0x41EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC18u;
        // 0x41ec1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC20u;
        goto label_41ec20;
    }
    ctx->pc = 0x41EC18u;
    {
        const bool branch_taken_0x41ec18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC18u;
        // 0x41ec1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ec18) {
            ctx->pc = 0x41EC98u;
            goto label_41ec98;
        }
    }
    ctx->pc = 0x41EC20u;
label_41ec20:
    // 0x41ec20: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x41ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_41ec24:
    // 0x41ec24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41ec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ec28:
    // 0x41ec28: 0x40f809  jalr        $v0
label_41ec2c:
    if (ctx->pc == 0x41EC2Cu) {
        ctx->pc = 0x41EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC28u;
        // 0x41ec2c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC30u;
        goto label_41ec30;
    }
    ctx->pc = 0x41EC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41EC30u);
        ctx->pc = 0x41EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC28u;
        // 0x41ec2c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EC28u, 0x41EC30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41EC30u;
label_41ec30:
    // 0x41ec30: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x41ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_41ec34:
    // 0x41ec34: 0x40f809  jalr        $v0
label_41ec38:
    if (ctx->pc == 0x41EC38u) {
        ctx->pc = 0x41EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC34u;
        // 0x41ec38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC3Cu;
        goto label_41ec3c;
    }
    ctx->pc = 0x41EC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41EC3Cu);
        ctx->pc = 0x41EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC34u;
        // 0x41ec38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EC34u, 0x41EC3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41EC3Cu;
label_41ec3c:
    // 0x41ec3c: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x41ec3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_41ec40:
    // 0x41ec40: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_41ec44:
    if (ctx->pc == 0x41EC44u) {
        ctx->pc = 0x41EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC40u;
        // 0x41ec44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC48u;
        goto label_41ec48;
    }
    ctx->pc = 0x41EC40u;
    {
        const bool branch_taken_0x41ec40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC40u;
        // 0x41ec44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ec40) {
            ctx->pc = 0x41EC78u;
            goto label_41ec78;
        }
    }
    ctx->pc = 0x41EC48u;
label_41ec48:
    // 0x41ec48: 0x822800ff  lb          $t0, 0xFF($s1)
    ctx->pc = 0x41ec48u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 255)));
label_41ec4c:
    // 0x41ec4c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41ec50:
    // 0x41ec50: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x41ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_41ec54:
    // 0x41ec54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41ec54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ec58:
    // 0x41ec58: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41ec5c:
    // 0x41ec5c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x41ec5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_41ec60:
    // 0x41ec60: 0xc1035f6  jal         func_40D7D8
label_41ec64:
    if (ctx->pc == 0x41EC64u) {
        ctx->pc = 0x41EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC60u;
        // 0x41ec64: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC68u;
        goto label_41ec68;
    }
    ctx->pc = 0x41EC60u;
    SET_GPR_U32(ctx, 31, 0x41EC68u);
    ctx->pc = 0x41EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EC60u;
    // 0x41ec64: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41EC60u, 0x41EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EC68u;
label_41ec68:
    // 0x41ec68: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x41ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_41ec6c:
    // 0x41ec6c: 0xc103628  jal         func_40D8A0
label_41ec70:
    if (ctx->pc == 0x41EC70u) {
        ctx->pc = 0x41EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC6Cu;
        // 0x41ec70: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC74u;
        goto label_41ec74;
    }
    ctx->pc = 0x41EC6Cu;
    SET_GPR_U32(ctx, 31, 0x41EC74u);
    ctx->pc = 0x41EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EC6Cu;
    // 0x41ec70: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41EC6Cu, 0x41EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EC74u;
label_41ec74:
    // 0x41ec74: 0xa3a001ff  sb          $zero, 0x1FF($sp)
    ctx->pc = 0x41ec74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 511), (uint8_t)GPR_U32(ctx, 0));
label_41ec78:
    // 0x41ec78: 0xc10726c  jal         func_41C9B0
label_41ec7c:
    if (ctx->pc == 0x41EC7Cu) {
        ctx->pc = 0x41EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC78u;
        // 0x41ec7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC80u;
        goto label_41ec80;
    }
    ctx->pc = 0x41EC78u;
    SET_GPR_U32(ctx, 31, 0x41EC80u);
    ctx->pc = 0x41EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EC78u;
    // 0x41ec7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9B0u, 0x41EC78u, 0x41EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EC80u;
label_41ec80:
    // 0x41ec80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41ec80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ec84:
    // 0x41ec84: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_41ec88:
    if (ctx->pc == 0x41EC88u) {
        ctx->pc = 0x41EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC84u;
        // 0x41ec88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC8Cu;
        goto label_41ec8c;
    }
    ctx->pc = 0x41EC84u;
    {
        const bool branch_taken_0x41ec84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ec84) {
            ctx->pc = 0x41EC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41EC84u;
            // 0x41ec88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41EC9Cu;
            goto label_41ec9c;
        }
    }
    ctx->pc = 0x41EC8Cu;
label_41ec8c:
    // 0x41ec8c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x41ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_41ec90:
    // 0x41ec90: 0x40f809  jalr        $v0
label_41ec94:
    if (ctx->pc == 0x41EC94u) {
        ctx->pc = 0x41EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC90u;
        // 0x41ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EC98u;
        goto label_41ec98;
    }
    ctx->pc = 0x41EC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41EC98u);
        ctx->pc = 0x41EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC90u;
        // 0x41ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EC90u, 0x41EC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41EC98u;
label_41ec98:
    // 0x41ec98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41ec98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ec9c:
    // 0x41ec9c: 0xc106db0  jal         func_41B6C0
label_41eca0:
    if (ctx->pc == 0x41ECA0u) {
        ctx->pc = 0x41ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC9Cu;
        // 0x41eca0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ECA4u;
        goto label_41eca4;
    }
    ctx->pc = 0x41EC9Cu;
    SET_GPR_U32(ctx, 31, 0x41ECA4u);
    ctx->pc = 0x41ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EC9Cu;
    // 0x41eca0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B6C0u, 0x41EC9Cu, 0x41ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ECA4u;
label_41eca4:
    // 0x41eca4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41eca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41eca8:
    // 0x41eca8: 0x122000a5  beqz        $s1, . + 4 + (0xA5 << 2)
label_41ecac:
    if (ctx->pc == 0x41ECACu) {
        ctx->pc = 0x41ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECA8u;
        // 0x41ecac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ECB0u;
        goto label_41ecb0;
    }
    ctx->pc = 0x41ECA8u;
    {
        const bool branch_taken_0x41eca8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECA8u;
        // 0x41ecac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eca8) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41ECB0u;
label_41ecb0:
    // 0x41ecb0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x41ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41ecb4:
    // 0x41ecb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_41ecb8:
    if (ctx->pc == 0x41ECB8u) {
        ctx->pc = 0x41ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECB4u;
        // 0x41ecb8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ECBCu;
        goto label_41ecbc;
    }
    ctx->pc = 0x41ECB4u;
    {
        const bool branch_taken_0x41ecb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECB4u;
        // 0x41ecb8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ecb4) {
            ctx->pc = 0x41ECCCu;
            goto label_41eccc;
        }
    }
    ctx->pc = 0x41ECBCu;
label_41ecbc:
    // 0x41ecbc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x41ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_41ecc0:
    // 0x41ecc0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_41ecc4:
    if (ctx->pc == 0x41ECC4u) {
        ctx->pc = 0x41ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECC0u;
        // 0x41ecc4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ECC8u;
        goto label_41ecc8;
    }
    ctx->pc = 0x41ECC0u;
    {
        const bool branch_taken_0x41ecc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ecc0) {
            ctx->pc = 0x41ECC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41ECC0u;
            // 0x41ecc4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41ED20u;
            goto label_41ed20;
        }
    }
    ctx->pc = 0x41ECC8u;
label_41ecc8:
    // 0x41ecc8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x41ecc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_41eccc:
    // 0x41eccc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x41ecccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41ecd0:
    // 0x41ecd0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x41ecd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41ecd4:
    // 0x41ecd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41ecd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ecd8:
    // 0x41ecd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x41ecd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41ecdc:
    // 0x41ecdc: 0xc107408  jal         func_41D020
label_41ece0:
    if (ctx->pc == 0x41ECE0u) {
        ctx->pc = 0x41ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECDCu;
        // 0x41ece0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ECE4u;
        goto label_41ece4;
    }
    ctx->pc = 0x41ECDCu;
    SET_GPR_U32(ctx, 31, 0x41ECE4u);
    ctx->pc = 0x41ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ECDCu;
    // 0x41ece0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D020u, 0x41ECDCu, 0x41ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ECE4u;
label_41ece4:
    // 0x41ece4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_41ece8:
    if (ctx->pc == 0x41ECE8u) {
        ctx->pc = 0x41ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECE4u;
        // 0x41ece8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ECECu;
        goto label_41ecec;
    }
    ctx->pc = 0x41ECE4u;
    {
        const bool branch_taken_0x41ece4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ece4) {
            ctx->pc = 0x41ECE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41ECE4u;
            // 0x41ece8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41ED20u;
            goto label_41ed20;
        }
    }
    ctx->pc = 0x41ECECu;
label_41ecec:
    // 0x41ecec: 0xc10705c  jal         func_41C170
label_41ecf0:
    if (ctx->pc == 0x41ECF0u) {
        ctx->pc = 0x41ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECECu;
        // 0x41ecf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ECF4u;
        goto label_41ecf4;
    }
    ctx->pc = 0x41ECECu;
    SET_GPR_U32(ctx, 31, 0x41ECF4u);
    ctx->pc = 0x41ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ECECu;
    // 0x41ecf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41ECECu, 0x41ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ECF4u;
label_41ecf4:
    // 0x41ecf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ecf8:
    // 0x41ecf8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41ecfc:
    // 0x41ecfc: 0xafa30220  sw          $v1, 0x220($sp)
    ctx->pc = 0x41ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 3));
label_41ed00:
    // 0x41ed00: 0xc1035f6  jal         func_40D7D8
label_41ed04:
    if (ctx->pc == 0x41ED04u) {
        ctx->pc = 0x41ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED00u;
        // 0x41ed04: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED08u;
        goto label_41ed08;
    }
    ctx->pc = 0x41ED00u;
    SET_GPR_U32(ctx, 31, 0x41ED08u);
    ctx->pc = 0x41ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED00u;
    // 0x41ed04: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41ED00u, 0x41ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ED08u;
label_41ed08:
    // 0x41ed08: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x41ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
label_41ed0c:
    // 0x41ed0c: 0xc103628  jal         func_40D8A0
label_41ed10:
    if (ctx->pc == 0x41ED10u) {
        ctx->pc = 0x41ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED0Cu;
        // 0x41ed10: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED14u;
        goto label_41ed14;
    }
    ctx->pc = 0x41ED0Cu;
    SET_GPR_U32(ctx, 31, 0x41ED14u);
    ctx->pc = 0x41ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED0Cu;
    // 0x41ed10: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41ED0Cu, 0x41ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ED14u;
label_41ed14:
    // 0x41ed14: 0x1000008a  b           . + 4 + (0x8A << 2)
label_41ed18:
    if (ctx->pc == 0x41ED18u) {
        ctx->pc = 0x41ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED14u;
        // 0x41ed18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED1Cu;
        goto label_41ed1c;
    }
    ctx->pc = 0x41ED14u;
    {
        const bool branch_taken_0x41ed14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED14u;
        // 0x41ed18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ed14) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41ED1Cu;
label_41ed1c:
    // 0x41ed1c: 0x0  nop
    ctx->pc = 0x41ed1cu;
    // NOP
label_41ed20:
    // 0x41ed20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x41ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41ed24:
    // 0x41ed24: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_41ed28:
    if (ctx->pc == 0x41ED28u) {
        ctx->pc = 0x41ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED24u;
        // 0x41ed28: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED2Cu;
        goto label_41ed2c;
    }
    ctx->pc = 0x41ED24u;
    {
        const bool branch_taken_0x41ed24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x41ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED24u;
        // 0x41ed28: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ed24) {
            ctx->pc = 0x41ED3Cu;
            goto label_41ed3c;
        }
    }
    ctx->pc = 0x41ED2Cu;
label_41ed2c:
    // 0x41ed2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x41ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41ed30:
    // 0x41ed30: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x41ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_41ed34:
    // 0x41ed34: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
label_41ed38:
    if (ctx->pc == 0x41ED38u) {
        ctx->pc = 0x41ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED34u;
        // 0x41ed38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED3Cu;
        goto label_41ed3c;
    }
    ctx->pc = 0x41ED34u;
    {
        const bool branch_taken_0x41ed34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED34u;
        // 0x41ed38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ed34) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41ED3Cu;
label_41ed3c:
    // 0x41ed3c: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x41ed3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_41ed40:
    // 0x41ed40: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x41ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_41ed44:
    // 0x41ed44: 0x52420014  beql        $s2, $v0, . + 4 + (0x14 << 2)
label_41ed48:
    if (ctx->pc == 0x41ED48u) {
        ctx->pc = 0x41ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED44u;
        // 0x41ed48: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED4Cu;
        goto label_41ed4c;
    }
    ctx->pc = 0x41ED44u;
    {
        const bool branch_taken_0x41ed44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x41ed44) {
            ctx->pc = 0x41ED48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41ED44u;
            // 0x41ed48: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41ED98u;
            goto label_41ed98;
        }
    }
    ctx->pc = 0x41ED4Cu;
label_41ed4c:
    // 0x41ed4c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x41ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41ed50:
    // 0x41ed50: 0xc107034  jal         func_41C0D0
label_41ed54:
    if (ctx->pc == 0x41ED54u) {
        ctx->pc = 0x41ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED50u;
        // 0x41ed54: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED58u;
        goto label_41ed58;
    }
    ctx->pc = 0x41ED50u;
    SET_GPR_U32(ctx, 31, 0x41ED58u);
    ctx->pc = 0x41ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED50u;
    // 0x41ed54: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41ED50u, 0x41ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ED58u;
label_41ed58:
    // 0x41ed58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41ed58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ed5c:
    // 0x41ed5c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_41ed60:
    if (ctx->pc == 0x41ED60u) {
        ctx->pc = 0x41ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED5Cu;
        // 0x41ed60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED64u;
        goto label_41ed64;
    }
    ctx->pc = 0x41ED5Cu;
    {
        const bool branch_taken_0x41ed5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED5Cu;
        // 0x41ed60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ed5c) {
            ctx->pc = 0x41EDCCu;
            goto label_41edcc;
        }
    }
    ctx->pc = 0x41ED64u;
label_41ed64:
    // 0x41ed64: 0xc107078  jal         func_41C1E0
label_41ed68:
    if (ctx->pc == 0x41ED68u) {
        ctx->pc = 0x41ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED64u;
        // 0x41ed68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED6Cu;
        goto label_41ed6c;
    }
    ctx->pc = 0x41ED64u;
    SET_GPR_U32(ctx, 31, 0x41ED6Cu);
    ctx->pc = 0x41ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED64u;
    // 0x41ed68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41ED64u, 0x41ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ED6Cu;
label_41ed6c:
    // 0x41ed6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_41ed70:
    if (ctx->pc == 0x41ED70u) {
        ctx->pc = 0x41ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED6Cu;
        // 0x41ed70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED74u;
        goto label_41ed74;
    }
    ctx->pc = 0x41ED6Cu;
    {
        const bool branch_taken_0x41ed6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED6Cu;
        // 0x41ed70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ed6c) {
            ctx->pc = 0x41ED84u;
            goto label_41ed84;
        }
    }
    ctx->pc = 0x41ED74u;
label_41ed74:
    // 0x41ed74: 0xc10705c  jal         func_41C170
label_41ed78:
    if (ctx->pc == 0x41ED78u) {
        ctx->pc = 0x41ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED74u;
        // 0x41ed78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED7Cu;
        goto label_41ed7c;
    }
    ctx->pc = 0x41ED74u;
    SET_GPR_U32(ctx, 31, 0x41ED7Cu);
    ctx->pc = 0x41ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED74u;
    // 0x41ed78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41ED74u, 0x41ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ED7Cu;
label_41ed7c:
    // 0x41ed7c: 0x10000013  b           . + 4 + (0x13 << 2)
label_41ed80:
    if (ctx->pc == 0x41ED80u) {
        ctx->pc = 0x41ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED7Cu;
        // 0x41ed80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED84u;
        goto label_41ed84;
    }
    ctx->pc = 0x41ED7Cu;
    {
        const bool branch_taken_0x41ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED7Cu;
        // 0x41ed80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ed7c) {
            ctx->pc = 0x41EDCCu;
            goto label_41edcc;
        }
    }
    ctx->pc = 0x41ED84u;
label_41ed84:
    // 0x41ed84: 0xc1070d0  jal         func_41C340
label_41ed88:
    if (ctx->pc == 0x41ED88u) {
        ctx->pc = 0x41ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED84u;
        // 0x41ed88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED8Cu;
        goto label_41ed8c;
    }
    ctx->pc = 0x41ED84u;
    SET_GPR_U32(ctx, 31, 0x41ED8Cu);
    ctx->pc = 0x41ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED84u;
    // 0x41ed88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C340u, 0x41ED84u, 0x41ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ED8Cu;
label_41ed8c:
    // 0x41ed8c: 0xc10705c  jal         func_41C170
label_41ed90:
    if (ctx->pc == 0x41ED90u) {
        ctx->pc = 0x41ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED8Cu;
        // 0x41ed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ED94u;
        goto label_41ed94;
    }
    ctx->pc = 0x41ED8Cu;
    SET_GPR_U32(ctx, 31, 0x41ED94u);
    ctx->pc = 0x41ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED8Cu;
    // 0x41ed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41ED8Cu, 0x41ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ED94u;
label_41ed94:
    // 0x41ed94: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x41ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41ed98:
    // 0x41ed98: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x41ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_41ed9c:
    // 0x41ed9c: 0xc107034  jal         func_41C0D0
label_41eda0:
    if (ctx->pc == 0x41EDA0u) {
        ctx->pc = 0x41EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ED9Cu;
        // 0x41eda0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDA4u;
        goto label_41eda4;
    }
    ctx->pc = 0x41ED9Cu;
    SET_GPR_U32(ctx, 31, 0x41EDA4u);
    ctx->pc = 0x41EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ED9Cu;
    // 0x41eda0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41ED9Cu, 0x41EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EDA4u;
label_41eda4:
    // 0x41eda4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41eda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41eda8:
    // 0x41eda8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_41edac:
    if (ctx->pc == 0x41EDACu) {
        ctx->pc = 0x41EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDA8u;
        // 0x41edac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDB0u;
        goto label_41edb0;
    }
    ctx->pc = 0x41EDA8u;
    {
        const bool branch_taken_0x41eda8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDA8u;
        // 0x41edac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eda8) {
            ctx->pc = 0x41EDCCu;
            goto label_41edcc;
        }
    }
    ctx->pc = 0x41EDB0u;
label_41edb0:
    // 0x41edb0: 0xc107078  jal         func_41C1E0
label_41edb4:
    if (ctx->pc == 0x41EDB4u) {
        ctx->pc = 0x41EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDB0u;
        // 0x41edb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDB8u;
        goto label_41edb8;
    }
    ctx->pc = 0x41EDB0u;
    SET_GPR_U32(ctx, 31, 0x41EDB8u);
    ctx->pc = 0x41EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EDB0u;
    // 0x41edb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41EDB0u, 0x41EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EDB8u;
label_41edb8:
    // 0x41edb8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_41edbc:
    if (ctx->pc == 0x41EDBCu) {
        ctx->pc = 0x41EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDB8u;
        // 0x41edbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDC0u;
        goto label_41edc0;
    }
    ctx->pc = 0x41EDB8u;
    {
        const bool branch_taken_0x41edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDB8u;
        // 0x41edbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41edb8) {
            ctx->pc = 0x41EDDCu;
            goto label_41eddc;
        }
    }
    ctx->pc = 0x41EDC0u;
label_41edc0:
    // 0x41edc0: 0xc10705c  jal         func_41C170
label_41edc4:
    if (ctx->pc == 0x41EDC4u) {
        ctx->pc = 0x41EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDC0u;
        // 0x41edc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDC8u;
        goto label_41edc8;
    }
    ctx->pc = 0x41EDC0u;
    SET_GPR_U32(ctx, 31, 0x41EDC8u);
    ctx->pc = 0x41EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EDC0u;
    // 0x41edc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41EDC0u, 0x41EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EDC8u;
label_41edc8:
    // 0x41edc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41edc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41edcc:
    // 0x41edcc: 0xc10705c  jal         func_41C170
label_41edd0:
    if (ctx->pc == 0x41EDD0u) {
        ctx->pc = 0x41EDD4u;
        goto label_41edd4;
    }
    ctx->pc = 0x41EDCCu;
    SET_GPR_U32(ctx, 31, 0x41EDD4u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41EDCCu, 0x41EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EDD4u;
label_41edd4:
    // 0x41edd4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_41edd8:
    if (ctx->pc == 0x41EDD8u) {
        ctx->pc = 0x41EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDD4u;
        // 0x41edd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDDCu;
        goto label_41eddc;
    }
    ctx->pc = 0x41EDD4u;
    {
        const bool branch_taken_0x41edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDD4u;
        // 0x41edd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41edd4) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41EDDCu;
label_41eddc:
    // 0x41eddc: 0xc107798  jal         func_41DE60
label_41ede0:
    if (ctx->pc == 0x41EDE0u) {
        ctx->pc = 0x41EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDDCu;
        // 0x41ede0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDE4u;
        goto label_41ede4;
    }
    ctx->pc = 0x41EDDCu;
    SET_GPR_U32(ctx, 31, 0x41EDE4u);
    ctx->pc = 0x41EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EDDCu;
    // 0x41ede0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DE60u, 0x41EDDCu, 0x41EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EDE4u;
label_41ede4:
    // 0x41ede4: 0xc10705c  jal         func_41C170
label_41ede8:
    if (ctx->pc == 0x41EDE8u) {
        ctx->pc = 0x41EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDE4u;
        // 0x41ede8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDECu;
        goto label_41edec;
    }
    ctx->pc = 0x41EDE4u;
    SET_GPR_U32(ctx, 31, 0x41EDECu);
    ctx->pc = 0x41EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EDE4u;
    // 0x41ede8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41EDE4u, 0x41EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EDECu;
label_41edec:
    // 0x41edec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41edf0:
    // 0x41edf0: 0x16420029  bne         $s2, $v0, . + 4 + (0x29 << 2)
label_41edf4:
    if (ctx->pc == 0x41EDF4u) {
        ctx->pc = 0x41EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDF0u;
        // 0x41edf4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EDF8u;
        goto label_41edf8;
    }
    ctx->pc = 0x41EDF0u;
    {
        const bool branch_taken_0x41edf0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x41EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDF0u;
        // 0x41edf4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41edf0) {
            ctx->pc = 0x41EE98u;
            goto label_41ee98;
        }
    }
    ctx->pc = 0x41EDF8u;
label_41edf8:
    // 0x41edf8: 0xc109b1a  jal         func_426C68
label_41edfc:
    if (ctx->pc == 0x41EDFCu) {
        ctx->pc = 0x41EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDF8u;
        // 0x41edfc: 0x27a40630  addiu       $a0, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE00u;
        goto label_41ee00;
    }
    ctx->pc = 0x41EDF8u;
    SET_GPR_U32(ctx, 31, 0x41EE00u);
    ctx->pc = 0x41EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EDF8u;
    // 0x41edfc: 0x27a40630  addiu       $a0, $sp, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C68u, 0x41EDF8u, 0x41EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE00u;
label_41ee00:
    // 0x41ee00: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_41ee04:
    if (ctx->pc == 0x41EE04u) {
        ctx->pc = 0x41EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE00u;
        // 0x41ee04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE08u;
        goto label_41ee08;
    }
    ctx->pc = 0x41EE00u;
    {
        const bool branch_taken_0x41ee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE00u;
        // 0x41ee04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ee00) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41EE08u;
label_41ee08:
    // 0x41ee08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41ee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_41ee0c:
    // 0x41ee0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41ee0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41ee10:
    // 0x41ee10: 0x27a40630  addiu       $a0, $sp, 0x630
    ctx->pc = 0x41ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_41ee14:
    // 0x41ee14: 0xc1092e8  jal         func_424BA0
label_41ee18:
    if (ctx->pc == 0x41EE18u) {
        ctx->pc = 0x41EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE14u;
        // 0x41ee18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE1Cu;
        goto label_41ee1c;
    }
    ctx->pc = 0x41EE14u;
    SET_GPR_U32(ctx, 31, 0x41EE1Cu);
    ctx->pc = 0x41EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE14u;
    // 0x41ee18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41EE14u, 0x41EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE1Cu;
label_41ee1c:
    // 0x41ee1c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x41ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_41ee20:
    // 0x41ee20: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x41ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_41ee24:
    // 0x41ee24: 0xc1096e4  jal         func_425B90
label_41ee28:
    if (ctx->pc == 0x41EE28u) {
        ctx->pc = 0x41EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE24u;
        // 0x41ee28: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE2Cu;
        goto label_41ee2c;
    }
    ctx->pc = 0x41EE24u;
    SET_GPR_U32(ctx, 31, 0x41EE2Cu);
    ctx->pc = 0x41EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE24u;
    // 0x41ee28: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425B90u, 0x41EE24u, 0x41EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE2Cu;
label_41ee2c:
    // 0x41ee2c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x41ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41ee30:
    // 0x41ee30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41ee30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41ee34:
    // 0x41ee34: 0xc107034  jal         func_41C0D0
label_41ee38:
    if (ctx->pc == 0x41EE38u) {
        ctx->pc = 0x41EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE34u;
        // 0x41ee38: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE3Cu;
        goto label_41ee3c;
    }
    ctx->pc = 0x41EE34u;
    SET_GPR_U32(ctx, 31, 0x41EE3Cu);
    ctx->pc = 0x41EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE34u;
    // 0x41ee38: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41EE34u, 0x41EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE3Cu;
label_41ee3c:
    // 0x41ee3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41ee3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ee40:
    // 0x41ee40: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
label_41ee44:
    if (ctx->pc == 0x41EE44u) {
        ctx->pc = 0x41EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE40u;
        // 0x41ee44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE48u;
        goto label_41ee48;
    }
    ctx->pc = 0x41EE40u;
    {
        const bool branch_taken_0x41ee40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE40u;
        // 0x41ee44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ee40) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41EE48u;
label_41ee48:
    // 0x41ee48: 0xc107078  jal         func_41C1E0
label_41ee4c:
    if (ctx->pc == 0x41EE4Cu) {
        ctx->pc = 0x41EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE48u;
        // 0x41ee4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE50u;
        goto label_41ee50;
    }
    ctx->pc = 0x41EE48u;
    SET_GPR_U32(ctx, 31, 0x41EE50u);
    ctx->pc = 0x41EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE48u;
    // 0x41ee4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41EE48u, 0x41EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE50u;
label_41ee50:
    // 0x41ee50: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x41ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_41ee54:
    // 0x41ee54: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x41ee54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ee58:
    // 0x41ee58: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x41ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41ee5c:
    // 0x41ee5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41ee5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41ee60:
    // 0x41ee60: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x41ee60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41ee64:
    // 0x41ee64: 0xc10996e  jal         func_4265B8
label_41ee68:
    if (ctx->pc == 0x41EE68u) {
        ctx->pc = 0x41EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE64u;
        // 0x41ee68: 0x27a80630  addiu       $t0, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE6Cu;
        goto label_41ee6c;
    }
    ctx->pc = 0x41EE64u;
    SET_GPR_U32(ctx, 31, 0x41EE6Cu);
    ctx->pc = 0x41EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE64u;
    // 0x41ee68: 0x27a80630  addiu       $t0, $sp, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4265B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4265B8u, 0x41EE64u, 0x41EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE6Cu;
label_41ee6c:
    // 0x41ee6c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x41ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_41ee70:
    // 0x41ee70: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x41ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_41ee74:
    // 0x41ee74: 0xc0bb778  jal         func_2EDDE0
label_41ee78:
    if (ctx->pc == 0x41EE78u) {
        ctx->pc = 0x41EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE74u;
        // 0x41ee78: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE7Cu;
        goto label_41ee7c;
    }
    ctx->pc = 0x41EE74u;
    SET_GPR_U32(ctx, 31, 0x41EE7Cu);
    ctx->pc = 0x41EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE74u;
    // 0x41ee78: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41EE74u, 0x41EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE7Cu;
label_41ee7c:
    // 0x41ee7c: 0xc10705c  jal         func_41C170
label_41ee80:
    if (ctx->pc == 0x41EE80u) {
        ctx->pc = 0x41EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE7Cu;
        // 0x41ee80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE84u;
        goto label_41ee84;
    }
    ctx->pc = 0x41EE7Cu;
    SET_GPR_U32(ctx, 31, 0x41EE84u);
    ctx->pc = 0x41EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE7Cu;
    // 0x41ee80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41EE7Cu, 0x41EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE84u;
label_41ee84:
    // 0x41ee84: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x41ee84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ee88:
    // 0x41ee88: 0xc109b64  jal         func_426D90
label_41ee8c:
    if (ctx->pc == 0x41EE8Cu) {
        ctx->pc = 0x41EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE88u;
        // 0x41ee8c: 0x27a40630  addiu       $a0, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE90u;
        goto label_41ee90;
    }
    ctx->pc = 0x41EE88u;
    SET_GPR_U32(ctx, 31, 0x41EE90u);
    ctx->pc = 0x41EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE88u;
    // 0x41ee8c: 0x27a40630  addiu       $a0, $sp, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426D90u, 0x41EE88u, 0x41EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE90u;
label_41ee90:
    // 0x41ee90: 0x1000002b  b           . + 4 + (0x2B << 2)
label_41ee94:
    if (ctx->pc == 0x41EE94u) {
        ctx->pc = 0x41EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE90u;
        // 0x41ee94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EE98u;
        goto label_41ee98;
    }
    ctx->pc = 0x41EE90u;
    {
        const bool branch_taken_0x41ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE90u;
        // 0x41ee94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ee90) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41EE98u;
label_41ee98:
    // 0x41ee98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41ee9c:
    // 0x41ee9c: 0x16420028  bne         $s2, $v0, . + 4 + (0x28 << 2)
label_41eea0:
    if (ctx->pc == 0x41EEA0u) {
        ctx->pc = 0x41EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE9Cu;
        // 0x41eea0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EEA4u;
        goto label_41eea4;
    }
    ctx->pc = 0x41EE9Cu;
    {
        const bool branch_taken_0x41ee9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x41EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE9Cu;
        // 0x41eea0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ee9c) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41EEA4u;
label_41eea4:
    // 0x41eea4: 0xc109b1a  jal         func_426C68
label_41eea8:
    if (ctx->pc == 0x41EEA8u) {
        ctx->pc = 0x41EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEA4u;
        // 0x41eea8: 0x27a44a40  addiu       $a0, $sp, 0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 19008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EEACu;
        goto label_41eeac;
    }
    ctx->pc = 0x41EEA4u;
    SET_GPR_U32(ctx, 31, 0x41EEACu);
    ctx->pc = 0x41EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EEA4u;
    // 0x41eea8: 0x27a44a40  addiu       $a0, $sp, 0x4A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 19008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C68u, 0x41EEA4u, 0x41EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EEACu;
label_41eeac:
    // 0x41eeac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_41eeb0:
    if (ctx->pc == 0x41EEB0u) {
        ctx->pc = 0x41EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEACu;
        // 0x41eeb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EEB4u;
        goto label_41eeb4;
    }
    ctx->pc = 0x41EEACu;
    {
        const bool branch_taken_0x41eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEACu;
        // 0x41eeb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eeac) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41EEB4u;
label_41eeb4:
    // 0x41eeb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41eeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_41eeb8:
    // 0x41eeb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41eeb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41eebc:
    // 0x41eebc: 0x27a44a40  addiu       $a0, $sp, 0x4A40
    ctx->pc = 0x41eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 19008));
label_41eec0:
    // 0x41eec0: 0xc1092e8  jal         func_424BA0
label_41eec4:
    if (ctx->pc == 0x41EEC4u) {
        ctx->pc = 0x41EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEC0u;
        // 0x41eec4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EEC8u;
        goto label_41eec8;
    }
    ctx->pc = 0x41EEC0u;
    SET_GPR_U32(ctx, 31, 0x41EEC8u);
    ctx->pc = 0x41EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EEC0u;
    // 0x41eec4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41EEC0u, 0x41EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EEC8u;
label_41eec8:
    // 0x41eec8: 0x27a44640  addiu       $a0, $sp, 0x4640
    ctx->pc = 0x41eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17984));
label_41eecc:
    // 0x41eecc: 0x27a64a40  addiu       $a2, $sp, 0x4A40
    ctx->pc = 0x41eeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 19008));
label_41eed0:
    // 0x41eed0: 0xc1096e4  jal         func_425B90
label_41eed4:
    if (ctx->pc == 0x41EED4u) {
        ctx->pc = 0x41EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EED0u;
        // 0x41eed4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EED8u;
        goto label_41eed8;
    }
    ctx->pc = 0x41EED0u;
    SET_GPR_U32(ctx, 31, 0x41EED8u);
    ctx->pc = 0x41EED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EED0u;
    // 0x41eed4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425B90u, 0x41EED0u, 0x41EED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EED8u;
label_41eed8:
    // 0x41eed8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x41eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41eedc:
    // 0x41eedc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x41eedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41eee0:
    // 0x41eee0: 0xc107034  jal         func_41C0D0
label_41eee4:
    if (ctx->pc == 0x41EEE4u) {
        ctx->pc = 0x41EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEE0u;
        // 0x41eee4: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EEE8u;
        goto label_41eee8;
    }
    ctx->pc = 0x41EEE0u;
    SET_GPR_U32(ctx, 31, 0x41EEE8u);
    ctx->pc = 0x41EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EEE0u;
    // 0x41eee4: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41EEE0u, 0x41EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EEE8u;
label_41eee8:
    // 0x41eee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41eee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41eeec:
    // 0x41eeec: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_41eef0:
    if (ctx->pc == 0x41EEF0u) {
        ctx->pc = 0x41EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEECu;
        // 0x41eef0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EEF4u;
        goto label_41eef4;
    }
    ctx->pc = 0x41EEECu;
    {
        const bool branch_taken_0x41eeec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEECu;
        // 0x41eef0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eeec) {
            ctx->pc = 0x41EF40u;
            goto label_41ef40;
        }
    }
    ctx->pc = 0x41EEF4u;
label_41eef4:
    // 0x41eef4: 0xc107078  jal         func_41C1E0
label_41eef8:
    if (ctx->pc == 0x41EEF8u) {
        ctx->pc = 0x41EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EEF4u;
        // 0x41eef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EEFCu;
        goto label_41eefc;
    }
    ctx->pc = 0x41EEF4u;
    SET_GPR_U32(ctx, 31, 0x41EEFCu);
    ctx->pc = 0x41EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EEF4u;
    // 0x41eef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41EEF4u, 0x41EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EEFCu;
label_41eefc:
    // 0x41eefc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x41eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_41ef00:
    // 0x41ef00: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x41ef00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ef04:
    // 0x41ef04: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x41ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41ef08:
    // 0x41ef08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41ef08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41ef0c:
    // 0x41ef0c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x41ef0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41ef10:
    // 0x41ef10: 0xc10996e  jal         func_4265B8
label_41ef14:
    if (ctx->pc == 0x41EF14u) {
        ctx->pc = 0x41EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EF10u;
        // 0x41ef14: 0x27a84a40  addiu       $t0, $sp, 0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 19008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EF18u;
        goto label_41ef18;
    }
    ctx->pc = 0x41EF10u;
    SET_GPR_U32(ctx, 31, 0x41EF18u);
    ctx->pc = 0x41EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EF10u;
    // 0x41ef14: 0x27a84a40  addiu       $t0, $sp, 0x4A40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 19008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4265B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4265B8u, 0x41EF10u, 0x41EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EF18u;
label_41ef18:
    // 0x41ef18: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x41ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_41ef1c:
    // 0x41ef1c: 0x27a54640  addiu       $a1, $sp, 0x4640
    ctx->pc = 0x41ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 17984));
label_41ef20:
    // 0x41ef20: 0xc0bb778  jal         func_2EDDE0
label_41ef24:
    if (ctx->pc == 0x41EF24u) {
        ctx->pc = 0x41EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EF20u;
        // 0x41ef24: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EF28u;
        goto label_41ef28;
    }
    ctx->pc = 0x41EF20u;
    SET_GPR_U32(ctx, 31, 0x41EF28u);
    ctx->pc = 0x41EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EF20u;
    // 0x41ef24: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41EF20u, 0x41EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EF28u;
label_41ef28:
    // 0x41ef28: 0xc10705c  jal         func_41C170
label_41ef2c:
    if (ctx->pc == 0x41EF2Cu) {
        ctx->pc = 0x41EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EF28u;
        // 0x41ef2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EF30u;
        goto label_41ef30;
    }
    ctx->pc = 0x41EF28u;
    SET_GPR_U32(ctx, 31, 0x41EF30u);
    ctx->pc = 0x41EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EF28u;
    // 0x41ef2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41EF28u, 0x41EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EF30u;
label_41ef30:
    // 0x41ef30: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x41ef30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ef34:
    // 0x41ef34: 0xc109b64  jal         func_426D90
label_41ef38:
    if (ctx->pc == 0x41EF38u) {
        ctx->pc = 0x41EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EF34u;
        // 0x41ef38: 0x27a44a40  addiu       $a0, $sp, 0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 19008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EF3Cu;
        goto label_41ef3c;
    }
    ctx->pc = 0x41EF34u;
    SET_GPR_U32(ctx, 31, 0x41EF3Cu);
    ctx->pc = 0x41EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EF34u;
    // 0x41ef38: 0x27a44a40  addiu       $a0, $sp, 0x4A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 19008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426D90u, 0x41EF34u, 0x41EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EF3Cu;
label_41ef3c:
    // 0x41ef3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41ef3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ef40:
    // 0x41ef40: 0x340c8ae0  ori         $t4, $zero, 0x8AE0
    ctx->pc = 0x41ef40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35552);
label_41ef44:
    // 0x41ef44: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x41ef44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
label_41ef48:
    // 0x41ef48: 0x79b0fff0  lq          $s0, -0x10($t5)
    ctx->pc = 0x41ef48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 13), 4294967280)));
label_41ef4c:
    // 0x41ef4c: 0x79b1ffe0  lq          $s1, -0x20($t5)
    ctx->pc = 0x41ef4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 13), 4294967264)));
label_41ef50:
    // 0x41ef50: 0x79b2ffd0  lq          $s2, -0x30($t5)
    ctx->pc = 0x41ef50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 4294967248)));
label_41ef54:
    // 0x41ef54: 0x79b3ffc0  lq          $s3, -0x40($t5)
    ctx->pc = 0x41ef54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 13), 4294967232)));
label_41ef58:
    // 0x41ef58: 0x79b4ffb0  lq          $s4, -0x50($t5)
    ctx->pc = 0x41ef58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 13), 4294967216)));
label_41ef5c:
    // 0x41ef5c: 0x79b5ffa0  lq          $s5, -0x60($t5)
    ctx->pc = 0x41ef5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 13), 4294967200)));
label_41ef60:
    // 0x41ef60: 0x79b6ff90  lq          $s6, -0x70($t5)
    ctx->pc = 0x41ef60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 13), 4294967184)));
label_41ef64:
    // 0x41ef64: 0x79b7ff80  lq          $s7, -0x80($t5)
    ctx->pc = 0x41ef64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 13), 4294967168)));
label_41ef68:
    // 0x41ef68: 0xddbfff70  ld          $ra, -0x90($t5)
    ctx->pc = 0x41ef68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 13), 4294967152)));
label_41ef6c:
    // 0x41ef6c: 0x3e00008  jr          $ra
label_41ef70:
    if (ctx->pc == 0x41EF70u) {
        ctx->pc = 0x41EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EF6Cu;
        // 0x41ef70: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EF74u;
        goto label_41ef74;
    }
    ctx->pc = 0x41EF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EF6Cu;
        // 0x41ef70: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EF74u;
label_41ef74:
    // 0x41ef74: 0x0  nop
    ctx->pc = 0x41ef74u;
    // NOP
    ctx->pc = 0x41ef78u;
}
