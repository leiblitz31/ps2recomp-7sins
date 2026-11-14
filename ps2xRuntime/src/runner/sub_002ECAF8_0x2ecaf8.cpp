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

// Function: sub_002ECAF8
// Address: 0x2ecaf8 - 0x2eced8
void sub_002ECAF8_0x2ecaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECAF8_0x2ecaf8");
#endif

    switch (ctx->pc) {
        case 0x2ecaf8u: goto label_2ecaf8;
        case 0x2ecafcu: goto label_2ecafc;
        case 0x2ecb00u: goto label_2ecb00;
        case 0x2ecb04u: goto label_2ecb04;
        case 0x2ecb08u: goto label_2ecb08;
        case 0x2ecb0cu: goto label_2ecb0c;
        case 0x2ecb10u: goto label_2ecb10;
        case 0x2ecb14u: goto label_2ecb14;
        case 0x2ecb18u: goto label_2ecb18;
        case 0x2ecb1cu: goto label_2ecb1c;
        case 0x2ecb20u: goto label_2ecb20;
        case 0x2ecb24u: goto label_2ecb24;
        case 0x2ecb28u: goto label_2ecb28;
        case 0x2ecb2cu: goto label_2ecb2c;
        case 0x2ecb30u: goto label_2ecb30;
        case 0x2ecb34u: goto label_2ecb34;
        case 0x2ecb38u: goto label_2ecb38;
        case 0x2ecb3cu: goto label_2ecb3c;
        case 0x2ecb40u: goto label_2ecb40;
        case 0x2ecb44u: goto label_2ecb44;
        case 0x2ecb48u: goto label_2ecb48;
        case 0x2ecb4cu: goto label_2ecb4c;
        case 0x2ecb50u: goto label_2ecb50;
        case 0x2ecb54u: goto label_2ecb54;
        case 0x2ecb58u: goto label_2ecb58;
        case 0x2ecb5cu: goto label_2ecb5c;
        case 0x2ecb60u: goto label_2ecb60;
        case 0x2ecb64u: goto label_2ecb64;
        case 0x2ecb68u: goto label_2ecb68;
        case 0x2ecb6cu: goto label_2ecb6c;
        case 0x2ecb70u: goto label_2ecb70;
        case 0x2ecb74u: goto label_2ecb74;
        case 0x2ecb78u: goto label_2ecb78;
        case 0x2ecb7cu: goto label_2ecb7c;
        case 0x2ecb80u: goto label_2ecb80;
        case 0x2ecb84u: goto label_2ecb84;
        case 0x2ecb88u: goto label_2ecb88;
        case 0x2ecb8cu: goto label_2ecb8c;
        case 0x2ecb90u: goto label_2ecb90;
        case 0x2ecb94u: goto label_2ecb94;
        case 0x2ecb98u: goto label_2ecb98;
        case 0x2ecb9cu: goto label_2ecb9c;
        case 0x2ecba0u: goto label_2ecba0;
        case 0x2ecba4u: goto label_2ecba4;
        case 0x2ecba8u: goto label_2ecba8;
        case 0x2ecbacu: goto label_2ecbac;
        case 0x2ecbb0u: goto label_2ecbb0;
        case 0x2ecbb4u: goto label_2ecbb4;
        case 0x2ecbb8u: goto label_2ecbb8;
        case 0x2ecbbcu: goto label_2ecbbc;
        case 0x2ecbc0u: goto label_2ecbc0;
        case 0x2ecbc4u: goto label_2ecbc4;
        case 0x2ecbc8u: goto label_2ecbc8;
        case 0x2ecbccu: goto label_2ecbcc;
        case 0x2ecbd0u: goto label_2ecbd0;
        case 0x2ecbd4u: goto label_2ecbd4;
        case 0x2ecbd8u: goto label_2ecbd8;
        case 0x2ecbdcu: goto label_2ecbdc;
        case 0x2ecbe0u: goto label_2ecbe0;
        case 0x2ecbe4u: goto label_2ecbe4;
        case 0x2ecbe8u: goto label_2ecbe8;
        case 0x2ecbecu: goto label_2ecbec;
        case 0x2ecbf0u: goto label_2ecbf0;
        case 0x2ecbf4u: goto label_2ecbf4;
        case 0x2ecbf8u: goto label_2ecbf8;
        case 0x2ecbfcu: goto label_2ecbfc;
        case 0x2ecc00u: goto label_2ecc00;
        case 0x2ecc04u: goto label_2ecc04;
        case 0x2ecc08u: goto label_2ecc08;
        case 0x2ecc0cu: goto label_2ecc0c;
        case 0x2ecc10u: goto label_2ecc10;
        case 0x2ecc14u: goto label_2ecc14;
        case 0x2ecc18u: goto label_2ecc18;
        case 0x2ecc1cu: goto label_2ecc1c;
        case 0x2ecc20u: goto label_2ecc20;
        case 0x2ecc24u: goto label_2ecc24;
        case 0x2ecc28u: goto label_2ecc28;
        case 0x2ecc2cu: goto label_2ecc2c;
        case 0x2ecc30u: goto label_2ecc30;
        case 0x2ecc34u: goto label_2ecc34;
        case 0x2ecc38u: goto label_2ecc38;
        case 0x2ecc3cu: goto label_2ecc3c;
        case 0x2ecc40u: goto label_2ecc40;
        case 0x2ecc44u: goto label_2ecc44;
        case 0x2ecc48u: goto label_2ecc48;
        case 0x2ecc4cu: goto label_2ecc4c;
        case 0x2ecc50u: goto label_2ecc50;
        case 0x2ecc54u: goto label_2ecc54;
        case 0x2ecc58u: goto label_2ecc58;
        case 0x2ecc5cu: goto label_2ecc5c;
        case 0x2ecc60u: goto label_2ecc60;
        case 0x2ecc64u: goto label_2ecc64;
        case 0x2ecc68u: goto label_2ecc68;
        case 0x2ecc6cu: goto label_2ecc6c;
        case 0x2ecc70u: goto label_2ecc70;
        case 0x2ecc74u: goto label_2ecc74;
        case 0x2ecc78u: goto label_2ecc78;
        case 0x2ecc7cu: goto label_2ecc7c;
        case 0x2ecc80u: goto label_2ecc80;
        case 0x2ecc84u: goto label_2ecc84;
        case 0x2ecc88u: goto label_2ecc88;
        case 0x2ecc8cu: goto label_2ecc8c;
        case 0x2ecc90u: goto label_2ecc90;
        case 0x2ecc94u: goto label_2ecc94;
        case 0x2ecc98u: goto label_2ecc98;
        case 0x2ecc9cu: goto label_2ecc9c;
        case 0x2ecca0u: goto label_2ecca0;
        case 0x2ecca4u: goto label_2ecca4;
        case 0x2ecca8u: goto label_2ecca8;
        case 0x2eccacu: goto label_2eccac;
        case 0x2eccb0u: goto label_2eccb0;
        case 0x2eccb4u: goto label_2eccb4;
        case 0x2eccb8u: goto label_2eccb8;
        case 0x2eccbcu: goto label_2eccbc;
        case 0x2eccc0u: goto label_2eccc0;
        case 0x2eccc4u: goto label_2eccc4;
        case 0x2eccc8u: goto label_2eccc8;
        case 0x2eccccu: goto label_2ecccc;
        case 0x2eccd0u: goto label_2eccd0;
        case 0x2eccd4u: goto label_2eccd4;
        case 0x2eccd8u: goto label_2eccd8;
        case 0x2eccdcu: goto label_2eccdc;
        case 0x2ecce0u: goto label_2ecce0;
        case 0x2ecce4u: goto label_2ecce4;
        case 0x2ecce8u: goto label_2ecce8;
        case 0x2eccecu: goto label_2eccec;
        case 0x2eccf0u: goto label_2eccf0;
        case 0x2eccf4u: goto label_2eccf4;
        case 0x2eccf8u: goto label_2eccf8;
        case 0x2eccfcu: goto label_2eccfc;
        case 0x2ecd00u: goto label_2ecd00;
        case 0x2ecd04u: goto label_2ecd04;
        case 0x2ecd08u: goto label_2ecd08;
        case 0x2ecd0cu: goto label_2ecd0c;
        case 0x2ecd10u: goto label_2ecd10;
        case 0x2ecd14u: goto label_2ecd14;
        case 0x2ecd18u: goto label_2ecd18;
        case 0x2ecd1cu: goto label_2ecd1c;
        case 0x2ecd20u: goto label_2ecd20;
        case 0x2ecd24u: goto label_2ecd24;
        case 0x2ecd28u: goto label_2ecd28;
        case 0x2ecd2cu: goto label_2ecd2c;
        case 0x2ecd30u: goto label_2ecd30;
        case 0x2ecd34u: goto label_2ecd34;
        case 0x2ecd38u: goto label_2ecd38;
        case 0x2ecd3cu: goto label_2ecd3c;
        case 0x2ecd40u: goto label_2ecd40;
        case 0x2ecd44u: goto label_2ecd44;
        case 0x2ecd48u: goto label_2ecd48;
        case 0x2ecd4cu: goto label_2ecd4c;
        case 0x2ecd50u: goto label_2ecd50;
        case 0x2ecd54u: goto label_2ecd54;
        case 0x2ecd58u: goto label_2ecd58;
        case 0x2ecd5cu: goto label_2ecd5c;
        case 0x2ecd60u: goto label_2ecd60;
        case 0x2ecd64u: goto label_2ecd64;
        case 0x2ecd68u: goto label_2ecd68;
        case 0x2ecd6cu: goto label_2ecd6c;
        case 0x2ecd70u: goto label_2ecd70;
        case 0x2ecd74u: goto label_2ecd74;
        case 0x2ecd78u: goto label_2ecd78;
        case 0x2ecd7cu: goto label_2ecd7c;
        case 0x2ecd80u: goto label_2ecd80;
        case 0x2ecd84u: goto label_2ecd84;
        case 0x2ecd88u: goto label_2ecd88;
        case 0x2ecd8cu: goto label_2ecd8c;
        case 0x2ecd90u: goto label_2ecd90;
        case 0x2ecd94u: goto label_2ecd94;
        case 0x2ecd98u: goto label_2ecd98;
        case 0x2ecd9cu: goto label_2ecd9c;
        case 0x2ecda0u: goto label_2ecda0;
        case 0x2ecda4u: goto label_2ecda4;
        case 0x2ecda8u: goto label_2ecda8;
        case 0x2ecdacu: goto label_2ecdac;
        case 0x2ecdb0u: goto label_2ecdb0;
        case 0x2ecdb4u: goto label_2ecdb4;
        case 0x2ecdb8u: goto label_2ecdb8;
        case 0x2ecdbcu: goto label_2ecdbc;
        case 0x2ecdc0u: goto label_2ecdc0;
        case 0x2ecdc4u: goto label_2ecdc4;
        case 0x2ecdc8u: goto label_2ecdc8;
        case 0x2ecdccu: goto label_2ecdcc;
        case 0x2ecdd0u: goto label_2ecdd0;
        case 0x2ecdd4u: goto label_2ecdd4;
        case 0x2ecdd8u: goto label_2ecdd8;
        case 0x2ecddcu: goto label_2ecddc;
        case 0x2ecde0u: goto label_2ecde0;
        case 0x2ecde4u: goto label_2ecde4;
        case 0x2ecde8u: goto label_2ecde8;
        case 0x2ecdecu: goto label_2ecdec;
        case 0x2ecdf0u: goto label_2ecdf0;
        case 0x2ecdf4u: goto label_2ecdf4;
        case 0x2ecdf8u: goto label_2ecdf8;
        case 0x2ecdfcu: goto label_2ecdfc;
        case 0x2ece00u: goto label_2ece00;
        case 0x2ece04u: goto label_2ece04;
        case 0x2ece08u: goto label_2ece08;
        case 0x2ece0cu: goto label_2ece0c;
        case 0x2ece10u: goto label_2ece10;
        case 0x2ece14u: goto label_2ece14;
        case 0x2ece18u: goto label_2ece18;
        case 0x2ece1cu: goto label_2ece1c;
        case 0x2ece20u: goto label_2ece20;
        case 0x2ece24u: goto label_2ece24;
        case 0x2ece28u: goto label_2ece28;
        case 0x2ece2cu: goto label_2ece2c;
        case 0x2ece30u: goto label_2ece30;
        case 0x2ece34u: goto label_2ece34;
        case 0x2ece38u: goto label_2ece38;
        case 0x2ece3cu: goto label_2ece3c;
        case 0x2ece40u: goto label_2ece40;
        case 0x2ece44u: goto label_2ece44;
        case 0x2ece48u: goto label_2ece48;
        case 0x2ece4cu: goto label_2ece4c;
        case 0x2ece50u: goto label_2ece50;
        case 0x2ece54u: goto label_2ece54;
        case 0x2ece58u: goto label_2ece58;
        case 0x2ece5cu: goto label_2ece5c;
        case 0x2ece60u: goto label_2ece60;
        case 0x2ece64u: goto label_2ece64;
        case 0x2ece68u: goto label_2ece68;
        case 0x2ece6cu: goto label_2ece6c;
        case 0x2ece70u: goto label_2ece70;
        case 0x2ece74u: goto label_2ece74;
        case 0x2ece78u: goto label_2ece78;
        case 0x2ece7cu: goto label_2ece7c;
        case 0x2ece80u: goto label_2ece80;
        case 0x2ece84u: goto label_2ece84;
        case 0x2ece88u: goto label_2ece88;
        case 0x2ece8cu: goto label_2ece8c;
        case 0x2ece90u: goto label_2ece90;
        case 0x2ece94u: goto label_2ece94;
        case 0x2ece98u: goto label_2ece98;
        case 0x2ece9cu: goto label_2ece9c;
        case 0x2ecea0u: goto label_2ecea0;
        case 0x2ecea4u: goto label_2ecea4;
        case 0x2ecea8u: goto label_2ecea8;
        case 0x2eceacu: goto label_2eceac;
        case 0x2eceb0u: goto label_2eceb0;
        case 0x2eceb4u: goto label_2eceb4;
        case 0x2eceb8u: goto label_2eceb8;
        case 0x2ecebcu: goto label_2ecebc;
        case 0x2ecec0u: goto label_2ecec0;
        case 0x2ecec4u: goto label_2ecec4;
        case 0x2ecec8u: goto label_2ecec8;
        case 0x2ececcu: goto label_2ececc;
        case 0x2eced0u: goto label_2eced0;
        case 0x2eced4u: goto label_2eced4;
        default: break;
    }

    ctx->pc = 0x2ecaf8u;

label_2ecaf8:
    // 0x2ecaf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ecaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ecafc:
    // 0x2ecafc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ecafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb00:
    // 0x2ecb00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ecb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ecb04:
    // 0x2ecb04: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2ecb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2ecb08:
    // 0x2ecb08: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2ecb08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb0c:
    // 0x2ecb0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ecb10:
    // 0x2ecb10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ecb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2ecb14:
    // 0x2ecb14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ecb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2ecb18:
    // 0x2ecb18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ecb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2ecb1c:
    // 0x2ecb1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ecb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2ecb20:
    // 0x2ecb20: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2ecb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2ecb24:
    // 0x2ecb24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ecb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2ecb28:
    // 0x2ecb28: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x2ecb28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2ecb2c:
    // 0x2ecb2c: 0x124000df  beqz        $s2, . + 4 + (0xDF << 2)
label_2ecb30:
    if (ctx->pc == 0x2ECB30u) {
        ctx->pc = 0x2ECB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB2Cu;
        // 0x2ecb30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB34u;
        goto label_2ecb34;
    }
    ctx->pc = 0x2ECB2Cu;
    {
        const bool branch_taken_0x2ecb2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB2Cu;
        // 0x2ecb30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb2c) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECB34u;
label_2ecb34:
    // 0x2ecb34: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2ecb34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2ecb38:
    // 0x2ecb38: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2ecb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2ecb3c:
    // 0x2ecb3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ecb40:
    if (ctx->pc == 0x2ECB40u) {
        ctx->pc = 0x2ECB44u;
        goto label_2ecb44;
    }
    ctx->pc = 0x2ECB3Cu;
    {
        const bool branch_taken_0x2ecb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb3c) {
            ctx->pc = 0x2ECB50u;
            goto label_2ecb50;
        }
    }
    ctx->pc = 0x2ECB44u;
label_2ecb44:
    // 0x2ecb44: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2ecb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ecb48:
    // 0x2ecb48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ecb4c:
    if (ctx->pc == 0x2ECB4Cu) {
        ctx->pc = 0x2ECB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB48u;
        // 0x2ecb4c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB50u;
        goto label_2ecb50;
    }
    ctx->pc = 0x2ECB48u;
    {
        const bool branch_taken_0x2ecb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB48u;
        // 0x2ecb4c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb48) {
            ctx->pc = 0x2ECB68u;
            goto label_2ecb68;
        }
    }
    ctx->pc = 0x2ECB50u;
label_2ecb50:
    // 0x2ecb50: 0xc0bd8c4  jal         func_2F6310
label_2ecb54:
    if (ctx->pc == 0x2ECB54u) {
        ctx->pc = 0x2ECB58u;
        goto label_2ecb58;
    }
    ctx->pc = 0x2ECB50u;
    SET_GPR_U32(ctx, 31, 0x2ECB58u);
    ctx->pc = 0x2F6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6310u, 0x2ECB50u, 0x2ECB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB58u;
label_2ecb58:
    // 0x2ecb58: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
label_2ecb5c:
    if (ctx->pc == 0x2ECB5Cu) {
        ctx->pc = 0x2ECB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB58u;
        // 0x2ecb5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB60u;
        goto label_2ecb60;
    }
    ctx->pc = 0x2ECB58u;
    {
        const bool branch_taken_0x2ecb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB58u;
        // 0x2ecb5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb58) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECB60u;
label_2ecb60:
    // 0x2ecb60: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2ecb60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2ecb64:
    // 0x2ecb64: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2ecb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2ecb68:
    // 0x2ecb68: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x2ecb68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2ecb6c:
    // 0x2ecb6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2ecb70:
    if (ctx->pc == 0x2ECB70u) {
        ctx->pc = 0x2ECB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB6Cu;
        // 0x2ecb70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB74u;
        goto label_2ecb74;
    }
    ctx->pc = 0x2ECB6Cu;
    {
        const bool branch_taken_0x2ecb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB6Cu;
        // 0x2ecb70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb6c) {
            ctx->pc = 0x2ECBE8u;
            goto label_2ecbe8;
        }
    }
    ctx->pc = 0x2ECB74u;
label_2ecb74:
    // 0x2ecb74: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x2ecb74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2ecb78:
    // 0x2ecb78: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_2ecb7c:
    if (ctx->pc == 0x2ECB7Cu) {
        ctx->pc = 0x2ECB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB78u;
        // 0x2ecb7c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB80u;
        goto label_2ecb80;
    }
    ctx->pc = 0x2ECB78u;
    {
        const bool branch_taken_0x2ecb78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb78) {
            ctx->pc = 0x2ECB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECB78u;
            // 0x2ecb7c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECBA0u;
            goto label_2ecba0;
        }
    }
    ctx->pc = 0x2ECB80u;
label_2ecb80:
    // 0x2ecb80: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2ecb80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2ecb84:
    // 0x2ecb84: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2ecb84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ecb88:
    // 0x2ecb88: 0x0  nop
    ctx->pc = 0x2ecb88u;
    // NOP
label_2ecb8c:
    // 0x2ecb8c: 0x0  nop
    ctx->pc = 0x2ecb8cu;
    // NOP
label_2ecb90:
    // 0x2ecb90: 0x0  nop
    ctx->pc = 0x2ecb90u;
    // NOP
label_2ecb94:
    // 0x2ecb94: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2ecb98:
    if (ctx->pc == 0x2ECB98u) {
        ctx->pc = 0x2ECB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB94u;
        // 0x2ecb98: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB9Cu;
        goto label_2ecb9c;
    }
    ctx->pc = 0x2ECB94u;
    {
        const bool branch_taken_0x2ecb94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB94u;
        // 0x2ecb98: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb94) {
            ctx->pc = 0x2ECB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECB9Cu;
label_2ecb9c:
    // 0x2ecb9c: 0x2e430401  sltiu       $v1, $s2, 0x401
    ctx->pc = 0x2ecb9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_2ecba0:
    // 0x2ecba0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ecba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2ecba4:
    // 0x2ecba4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2ecba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2ecba8:
    // 0x2ecba8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ecba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ecbac:
    // 0x2ecbac: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x2ecbacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_2ecbb0:
    // 0x2ecbb0: 0x40f809  jalr        $v0
label_2ecbb4:
    if (ctx->pc == 0x2ECBB4u) {
        ctx->pc = 0x2ECBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBB0u;
        // 0x2ecbb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBB8u;
        goto label_2ecbb8;
    }
    ctx->pc = 0x2ECBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ECBB8u);
        ctx->pc = 0x2ECBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBB0u;
        // 0x2ecbb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECBB0u, 0x2ECBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ECBB8u;
label_2ecbb8:
    // 0x2ecbb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ecbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ecbbc:
    // 0x2ecbbc: 0x5a0000b8  blezl       $s0, . + 4 + (0xB8 << 2)
label_2ecbc0:
    if (ctx->pc == 0x2ECBC0u) {
        ctx->pc = 0x2ECBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBBCu;
        // 0x2ecbc0: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBC4u;
        goto label_2ecbc4;
    }
    ctx->pc = 0x2ECBBCu;
    {
        const bool branch_taken_0x2ecbbc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2ecbbc) {
            ctx->pc = 0x2ECBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECBBCu;
            // 0x2ecbc0: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECBC4u;
label_2ecbc4:
    // 0x2ecbc4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2ecbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2ecbc8:
    // 0x2ecbc8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2ecbc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2ecbcc:
    // 0x2ecbcc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2ecbccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2ecbd0:
    // 0x2ecbd0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2ecbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ecbd4:
    // 0x2ecbd4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2ecbd8:
    if (ctx->pc == 0x2ECBD8u) {
        ctx->pc = 0x2ECBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBD4u;
        // 0x2ecbd8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBDCu;
        goto label_2ecbdc;
    }
    ctx->pc = 0x2ECBD4u;
    {
        const bool branch_taken_0x2ecbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBD4u;
        // 0x2ecbd8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbd4) {
            ctx->pc = 0x2ECB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecb78;
        }
    }
    ctx->pc = 0x2ECBDCu;
label_2ecbdc:
    // 0x2ecbdc: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2ecbe0:
    if (ctx->pc == 0x2ECBE0u) {
        ctx->pc = 0x2ECBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBDCu;
        // 0x2ecbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBE4u;
        goto label_2ecbe4;
    }
    ctx->pc = 0x2ECBDCu;
    {
        const bool branch_taken_0x2ecbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBDCu;
        // 0x2ecbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbdc) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECBE4u;
label_2ecbe4:
    // 0x2ecbe4: 0x0  nop
    ctx->pc = 0x2ecbe4u;
    // NOP
label_2ecbe8:
    // 0x2ecbe8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ecbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ecbec:
    // 0x2ecbec: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_2ecbf0:
    if (ctx->pc == 0x2ECBF0u) {
        ctx->pc = 0x2ECBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBECu;
        // 0x2ecbf0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBF4u;
        goto label_2ecbf4;
    }
    ctx->pc = 0x2ECBECu;
    {
        const bool branch_taken_0x2ecbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBECu;
        // 0x2ecbf0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbec) {
            ctx->pc = 0x2ECD38u;
            goto label_2ecd38;
        }
    }
    ctx->pc = 0x2ECBF4u;
label_2ecbf4:
    // 0x2ecbf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ecbf8:
    if (ctx->pc == 0x2ECBF8u) {
        ctx->pc = 0x2ECBFCu;
        goto label_2ecbfc;
    }
    ctx->pc = 0x2ECBF4u;
    {
        const bool branch_taken_0x2ecbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecbf4) {
            ctx->pc = 0x2ECC08u;
            goto label_2ecc08;
        }
    }
    ctx->pc = 0x2ECBFCu;
label_2ecbfc:
    // 0x2ecbfc: 0x0  nop
    ctx->pc = 0x2ecbfcu;
    // NOP
label_2ecc00:
    // 0x2ecc00: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2ecc00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2ecc04:
    // 0x2ecc04: 0x0  nop
    ctx->pc = 0x2ecc04u;
    // NOP
label_2ecc08:
    // 0x2ecc08: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_2ecc0c:
    if (ctx->pc == 0x2ECC0Cu) {
        ctx->pc = 0x2ECC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC08u;
        // 0x2ecc0c: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC10u;
        goto label_2ecc10;
    }
    ctx->pc = 0x2ECC08u;
    {
        const bool branch_taken_0x2ecc08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC08u;
        // 0x2ecc0c: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc08) {
            ctx->pc = 0x2ECC30u;
            goto label_2ecc30;
        }
    }
    ctx->pc = 0x2ECC10u;
label_2ecc10:
    // 0x2ecc10: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2ecc10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2ecc14:
    // 0x2ecc14: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2ecc14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ecc18:
    // 0x2ecc18: 0x0  nop
    ctx->pc = 0x2ecc18u;
    // NOP
label_2ecc1c:
    // 0x2ecc1c: 0x0  nop
    ctx->pc = 0x2ecc1cu;
    // NOP
label_2ecc20:
    // 0x2ecc20: 0x0  nop
    ctx->pc = 0x2ecc20u;
    // NOP
label_2ecc24:
    // 0x2ecc24: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2ecc28:
    if (ctx->pc == 0x2ECC28u) {
        ctx->pc = 0x2ECC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC24u;
        // 0x2ecc28: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC2Cu;
        goto label_2ecc2c;
    }
    ctx->pc = 0x2ECC24u;
    {
        const bool branch_taken_0x2ecc24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC24u;
        // 0x2ecc28: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc24) {
            ctx->pc = 0x2ECC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecc10;
        }
    }
    ctx->pc = 0x2ECC2Cu;
label_2ecc2c:
    // 0x2ecc2c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2ecc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2ecc30:
    // 0x2ecc30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ecc34:
    if (ctx->pc == 0x2ECC34u) {
        ctx->pc = 0x2ECC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC30u;
        // 0x2ecc34: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC38u;
        goto label_2ecc38;
    }
    ctx->pc = 0x2ECC30u;
    {
        const bool branch_taken_0x2ecc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC30u;
        // 0x2ecc34: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc30) {
            ctx->pc = 0x2ECC68u;
            goto label_2ecc68;
        }
    }
    ctx->pc = 0x2ECC38u;
label_2ecc38:
    // 0x2ecc38: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2ecc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2ecc3c:
    // 0x2ecc3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ecc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecc40:
    // 0x2ecc40: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x2ecc40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_2ecc44:
    // 0x2ecc44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ecc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ecc48:
    // 0x2ecc48: 0xc0bb7a4  jal         func_2EDE90
label_2ecc4c:
    if (ctx->pc == 0x2ECC4Cu) {
        ctx->pc = 0x2ECC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC48u;
        // 0x2ecc4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC50u;
        goto label_2ecc50;
    }
    ctx->pc = 0x2ECC48u;
    SET_GPR_U32(ctx, 31, 0x2ECC50u);
    ctx->pc = 0x2ECC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC48u;
    // 0x2ecc4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x2ECC48u, 0x2ECC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC50u;
label_2ecc50:
    // 0x2ecc50: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2ecc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ecc54:
    // 0x2ecc54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ecc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecc58:
    // 0x2ecc58: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2ecc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ecc5c:
    // 0x2ecc5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ecc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ecc60:
    // 0x2ecc60: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2ecc64:
    if (ctx->pc == 0x2ECC64u) {
        ctx->pc = 0x2ECC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC60u;
        // 0x2ecc64: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC68u;
        goto label_2ecc68;
    }
    ctx->pc = 0x2ECC60u;
    {
        const bool branch_taken_0x2ecc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC60u;
        // 0x2ecc64: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc60) {
            ctx->pc = 0x2ECD0Cu;
            goto label_2ecd0c;
        }
    }
    ctx->pc = 0x2ECC68u;
label_2ecc68:
    // 0x2ecc68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ecc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecc6c:
    // 0x2ecc6c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2ecc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ecc70:
    // 0x2ecc70: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2ecc70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2ecc74:
    // 0x2ecc74: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2ecc78:
    if (ctx->pc == 0x2ECC78u) {
        ctx->pc = 0x2ECC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC74u;
        // 0x2ecc78: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC7Cu;
        goto label_2ecc7c;
    }
    ctx->pc = 0x2ECC74u;
    {
        const bool branch_taken_0x2ecc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc74) {
            ctx->pc = 0x2ECC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC74u;
            // 0x2ecc78: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCB8u;
            goto label_2eccb8;
        }
    }
    ctx->pc = 0x2ECC7Cu;
label_2ecc7c:
    // 0x2ecc7c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2ecc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2ecc80:
    // 0x2ecc80: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2ecc84:
    if (ctx->pc == 0x2ECC84u) {
        ctx->pc = 0x2ECC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC80u;
        // 0x2ecc84: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC88u;
        goto label_2ecc88;
    }
    ctx->pc = 0x2ECC80u;
    {
        const bool branch_taken_0x2ecc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc80) {
            ctx->pc = 0x2ECC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC80u;
            // 0x2ecc84: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCB8u;
            goto label_2eccb8;
        }
    }
    ctx->pc = 0x2ECC88u;
label_2ecc88:
    // 0x2ecc88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ecc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ecc8c:
    // 0x2ecc8c: 0xc0bb7a4  jal         func_2EDE90
label_2ecc90:
    if (ctx->pc == 0x2ECC90u) {
        ctx->pc = 0x2ECC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC8Cu;
        // 0x2ecc90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC94u;
        goto label_2ecc94;
    }
    ctx->pc = 0x2ECC8Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC94u);
    ctx->pc = 0x2ECC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC8Cu;
    // 0x2ecc90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x2ECC8Cu, 0x2ECC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC94u;
label_2ecc94:
    // 0x2ecc94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ecc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecc98:
    // 0x2ecc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ecc9c:
    // 0x2ecc9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ecc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ecca0:
    // 0x2ecca0: 0xc0baea4  jal         func_2EBA90
label_2ecca4:
    if (ctx->pc == 0x2ECCA4u) {
        ctx->pc = 0x2ECCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCA0u;
        // 0x2ecca4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCA8u;
        goto label_2ecca8;
    }
    ctx->pc = 0x2ECCA0u;
    SET_GPR_U32(ctx, 31, 0x2ECCA8u);
    ctx->pc = 0x2ECCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCA0u;
    // 0x2ecca4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBA90u, 0x2ECCA0u, 0x2ECCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCA8u;
label_2ecca8:
    // 0x2ecca8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2eccac:
    if (ctx->pc == 0x2ECCACu) {
        ctx->pc = 0x2ECCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCA8u;
        // 0x2eccac: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCB0u;
        goto label_2eccb0;
    }
    ctx->pc = 0x2ECCA8u;
    {
        const bool branch_taken_0x2ecca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecca8) {
            ctx->pc = 0x2ECCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECCA8u;
            // 0x2eccac: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD18u;
            goto label_2ecd18;
        }
    }
    ctx->pc = 0x2ECCB0u;
label_2eccb0:
    // 0x2eccb0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2eccb4:
    if (ctx->pc == 0x2ECCB4u) {
        ctx->pc = 0x2ECCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCB0u;
        // 0x2eccb4: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCB8u;
        goto label_2eccb8;
    }
    ctx->pc = 0x2ECCB0u;
    {
        const bool branch_taken_0x2eccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCB0u;
        // 0x2eccb4: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccb0) {
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECCB8u;
label_2eccb8:
    // 0x2eccb8: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2eccb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2eccbc:
    // 0x2eccbc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2eccc0:
    if (ctx->pc == 0x2ECCC0u) {
        ctx->pc = 0x2ECCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCBCu;
        // 0x2eccc0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCC4u;
        goto label_2eccc4;
    }
    ctx->pc = 0x2ECCBCu;
    {
        const bool branch_taken_0x2eccbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eccbc) {
            ctx->pc = 0x2ECCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECCBCu;
            // 0x2eccc0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCF0u;
            goto label_2eccf0;
        }
    }
    ctx->pc = 0x2ECCC4u;
label_2eccc4:
    // 0x2eccc4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2eccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2eccc8:
    // 0x2eccc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eccc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ecccc:
    // 0x2ecccc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2eccccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2eccd0:
    // 0x2eccd0: 0x40f809  jalr        $v0
label_2eccd4:
    if (ctx->pc == 0x2ECCD4u) {
        ctx->pc = 0x2ECCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCD0u;
        // 0x2eccd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCD8u;
        goto label_2eccd8;
    }
    ctx->pc = 0x2ECCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ECCD8u);
        ctx->pc = 0x2ECCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCD0u;
        // 0x2eccd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECCD0u, 0x2ECCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ECCD8u;
label_2eccd8:
    // 0x2eccd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eccd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eccdc:
    // 0x2eccdc: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_2ecce0:
    if (ctx->pc == 0x2ECCE0u) {
        ctx->pc = 0x2ECCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCDCu;
        // 0x2ecce0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCE4u;
        goto label_2ecce4;
    }
    ctx->pc = 0x2ECCDCu;
    {
        const bool branch_taken_0x2eccdc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2eccdc) {
            ctx->pc = 0x2ECCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECCDCu;
            // 0x2ecce0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD18u;
            goto label_2ecd18;
        }
    }
    ctx->pc = 0x2ECCE4u;
label_2ecce4:
    // 0x2ecce4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2ecce8:
    if (ctx->pc == 0x2ECCE8u) {
        ctx->pc = 0x2ECCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCE4u;
        // 0x2ecce8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCECu;
        goto label_2eccec;
    }
    ctx->pc = 0x2ECCE4u;
    {
        const bool branch_taken_0x2ecce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCE4u;
        // 0x2ecce8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecce4) {
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECCECu;
label_2eccec:
    // 0x2eccec: 0x0  nop
    ctx->pc = 0x2eccecu;
    // NOP
label_2eccf0:
    // 0x2eccf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eccf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eccf4:
    // 0x2eccf4: 0xc0bb7a4  jal         func_2EDE90
label_2eccf8:
    if (ctx->pc == 0x2ECCF8u) {
        ctx->pc = 0x2ECCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCF4u;
        // 0x2eccf8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCFCu;
        goto label_2eccfc;
    }
    ctx->pc = 0x2ECCF4u;
    SET_GPR_U32(ctx, 31, 0x2ECCFCu);
    ctx->pc = 0x2ECCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCF4u;
    // 0x2eccf8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x2ECCF4u, 0x2ECCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCFCu;
label_2eccfc:
    // 0x2eccfc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2eccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ecd00:
    // 0x2ecd00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ecd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecd04:
    // 0x2ecd04: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2ecd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ecd08:
    // 0x2ecd08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ecd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ecd0c:
    // 0x2ecd0c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2ecd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2ecd10:
    // 0x2ecd10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ecd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ecd14:
    // 0x2ecd14: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2ecd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2ecd18:
    // 0x2ecd18: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2ecd18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2ecd1c:
    // 0x2ecd1c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2ecd1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2ecd20:
    // 0x2ecd20: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2ecd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ecd24:
    // 0x2ecd24: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_2ecd28:
    if (ctx->pc == 0x2ECD28u) {
        ctx->pc = 0x2ECD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD24u;
        // 0x2ecd28: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD2Cu;
        goto label_2ecd2c;
    }
    ctx->pc = 0x2ECD24u;
    {
        const bool branch_taken_0x2ecd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD24u;
        // 0x2ecd28: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd24) {
            ctx->pc = 0x2ECC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecc00;
        }
    }
    ctx->pc = 0x2ECD2Cu;
label_2ecd2c:
    // 0x2ecd2c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2ecd30:
    if (ctx->pc == 0x2ECD30u) {
        ctx->pc = 0x2ECD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD2Cu;
        // 0x2ecd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD34u;
        goto label_2ecd34;
    }
    ctx->pc = 0x2ECD2Cu;
    {
        const bool branch_taken_0x2ecd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD2Cu;
        // 0x2ecd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd2c) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECD34u;
label_2ecd34:
    // 0x2ecd34: 0x0  nop
    ctx->pc = 0x2ecd34u;
    // NOP
label_2ecd38:
    // 0x2ecd38: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_2ecd3c:
    if (ctx->pc == 0x2ECD3Cu) {
        ctx->pc = 0x2ECD40u;
        goto label_2ecd40;
    }
    ctx->pc = 0x2ECD38u;
    {
        const bool branch_taken_0x2ecd38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd38) {
            ctx->pc = 0x2ECD64u;
            goto label_2ecd64;
        }
    }
    ctx->pc = 0x2ECD40u;
label_2ecd40:
    // 0x2ecd40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ecd40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecd44:
    // 0x2ecd44: 0x0  nop
    ctx->pc = 0x2ecd44u;
    // NOP
label_2ecd48:
    // 0x2ecd48: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2ecd48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2ecd4c:
    // 0x2ecd4c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2ecd4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ecd50:
    // 0x2ecd50: 0x0  nop
    ctx->pc = 0x2ecd50u;
    // NOP
label_2ecd54:
    // 0x2ecd54: 0x0  nop
    ctx->pc = 0x2ecd54u;
    // NOP
label_2ecd58:
    // 0x2ecd58: 0x0  nop
    ctx->pc = 0x2ecd58u;
    // NOP
label_2ecd5c:
    // 0x2ecd5c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2ecd60:
    if (ctx->pc == 0x2ECD60u) {
        ctx->pc = 0x2ECD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD5Cu;
        // 0x2ecd60: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD64u;
        goto label_2ecd64;
    }
    ctx->pc = 0x2ECD5Cu;
    {
        const bool branch_taken_0x2ecd5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD5Cu;
        // 0x2ecd60: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd5c) {
            ctx->pc = 0x2ECD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecd48;
        }
    }
    ctx->pc = 0x2ECD64u;
label_2ecd64:
    // 0x2ecd64: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_2ecd68:
    if (ctx->pc == 0x2ECD68u) {
        ctx->pc = 0x2ECD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD64u;
        // 0x2ecd68: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD6Cu;
        goto label_2ecd6c;
    }
    ctx->pc = 0x2ECD64u;
    {
        const bool branch_taken_0x2ecd64 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd64) {
            ctx->pc = 0x2ECD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD64u;
            // 0x2ecd68: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD9Cu;
            goto label_2ecd9c;
        }
    }
    ctx->pc = 0x2ECD6Cu;
label_2ecd6c:
    // 0x2ecd6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ecd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ecd70:
    // 0x2ecd70: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ecd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ecd74:
    // 0x2ecd74: 0xc0bb71a  jal         func_2EDC68
label_2ecd78:
    if (ctx->pc == 0x2ECD78u) {
        ctx->pc = 0x2ECD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD74u;
        // 0x2ecd78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD7Cu;
        goto label_2ecd7c;
    }
    ctx->pc = 0x2ECD74u;
    SET_GPR_U32(ctx, 31, 0x2ECD7Cu);
    ctx->pc = 0x2ECD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD74u;
    // 0x2ecd78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDC68u, 0x2ECD74u, 0x2ECD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD7Cu;
label_2ecd7c:
    // 0x2ecd7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ecd80:
    if (ctx->pc == 0x2ECD80u) {
        ctx->pc = 0x2ECD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD7Cu;
        // 0x2ecd80: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD84u;
        goto label_2ecd84;
    }
    ctx->pc = 0x2ECD7Cu;
    {
        const bool branch_taken_0x2ecd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD7Cu;
        // 0x2ecd80: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd7c) {
            ctx->pc = 0x2ECD90u;
            goto label_2ecd90;
        }
    }
    ctx->pc = 0x2ECD84u;
label_2ecd84:
    // 0x2ecd84: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ecd88:
    if (ctx->pc == 0x2ECD88u) {
        ctx->pc = 0x2ECD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD84u;
        // 0x2ecd88: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD8Cu;
        goto label_2ecd8c;
    }
    ctx->pc = 0x2ECD84u;
    {
        const bool branch_taken_0x2ecd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD84u;
        // 0x2ecd88: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd84) {
            ctx->pc = 0x2ECD94u;
            goto label_2ecd94;
        }
    }
    ctx->pc = 0x2ECD8Cu;
label_2ecd8c:
    // 0x2ecd8c: 0x0  nop
    ctx->pc = 0x2ecd8cu;
    // NOP
label_2ecd90:
    // 0x2ecd90: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x2ecd90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ecd94:
    // 0x2ecd94: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2ecd94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ecd98:
    // 0x2ecd98: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x2ecd98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecd9c:
    // 0x2ecd9c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x2ecd9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2ecda0:
    // 0x2ecda0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2ecda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ecda4:
    // 0x2ecda4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ecda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecda8:
    // 0x2ecda8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2ecda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ecdac:
    // 0x2ecdac: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x2ecdacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_2ecdb0:
    // 0x2ecdb0: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x2ecdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ecdb4:
    // 0x2ecdb4: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x2ecdb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2ecdb8:
    // 0x2ecdb8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2ecdbc:
    if (ctx->pc == 0x2ECDBCu) {
        ctx->pc = 0x2ECDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDB8u;
        // 0x2ecdbc: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDC0u;
        goto label_2ecdc0;
    }
    ctx->pc = 0x2ECDB8u;
    {
        const bool branch_taken_0x2ecdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDB8u;
        // 0x2ecdbc: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdb8) {
            ctx->pc = 0x2ECE00u;
            goto label_2ece00;
        }
    }
    ctx->pc = 0x2ECDC0u;
label_2ecdc0:
    // 0x2ecdc0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2ecdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2ecdc4:
    // 0x2ecdc4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2ecdc8:
    if (ctx->pc == 0x2ECDC8u) {
        ctx->pc = 0x2ECDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDC4u;
        // 0x2ecdc8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDCCu;
        goto label_2ecdcc;
    }
    ctx->pc = 0x2ECDC4u;
    {
        const bool branch_taken_0x2ecdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecdc4) {
            ctx->pc = 0x2ECDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECDC4u;
            // 0x2ecdc8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECE04u;
            goto label_2ece04;
        }
    }
    ctx->pc = 0x2ECDCCu;
label_2ecdcc:
    // 0x2ecdcc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2ecdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ecdd0:
    // 0x2ecdd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ecdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ecdd4:
    // 0x2ecdd4: 0xc0bb7a4  jal         func_2EDE90
label_2ecdd8:
    if (ctx->pc == 0x2ECDD8u) {
        ctx->pc = 0x2ECDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDD4u;
        // 0x2ecdd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDDCu;
        goto label_2ecddc;
    }
    ctx->pc = 0x2ECDD4u;
    SET_GPR_U32(ctx, 31, 0x2ECDDCu);
    ctx->pc = 0x2ECDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDD4u;
    // 0x2ecdd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x2ECDD4u, 0x2ECDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDDCu;
label_2ecddc:
    // 0x2ecddc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ecddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecde0:
    // 0x2ecde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ecde4:
    // 0x2ecde4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ecde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ecde8:
    // 0x2ecde8: 0xc0baea4  jal         func_2EBA90
label_2ecdec:
    if (ctx->pc == 0x2ECDECu) {
        ctx->pc = 0x2ECDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDE8u;
        // 0x2ecdec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDF0u;
        goto label_2ecdf0;
    }
    ctx->pc = 0x2ECDE8u;
    SET_GPR_U32(ctx, 31, 0x2ECDF0u);
    ctx->pc = 0x2ECDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDE8u;
    // 0x2ecdec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBA90u, 0x2ECDE8u, 0x2ECDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDF0u;
label_2ecdf0:
    // 0x2ecdf0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2ecdf4:
    if (ctx->pc == 0x2ECDF4u) {
        ctx->pc = 0x2ECDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDF0u;
        // 0x2ecdf4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDF8u;
        goto label_2ecdf8;
    }
    ctx->pc = 0x2ECDF0u;
    {
        const bool branch_taken_0x2ecdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDF0u;
        // 0x2ecdf4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdf0) {
            ctx->pc = 0x2ECE64u;
            goto label_2ece64;
        }
    }
    ctx->pc = 0x2ECDF8u;
label_2ecdf8:
    // 0x2ecdf8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2ecdfc:
    if (ctx->pc == 0x2ECDFCu) {
        ctx->pc = 0x2ECDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDF8u;
        // 0x2ecdfc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE00u;
        goto label_2ece00;
    }
    ctx->pc = 0x2ECDF8u;
    {
        const bool branch_taken_0x2ecdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDF8u;
        // 0x2ecdfc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdf8) {
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECE00u;
label_2ece00:
    // 0x2ece00: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ece00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ece04:
    // 0x2ece04: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2ece04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2ece08:
    // 0x2ece08: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2ece0c:
    if (ctx->pc == 0x2ECE0Cu) {
        ctx->pc = 0x2ECE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE08u;
        // 0x2ece0c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE10u;
        goto label_2ece10;
    }
    ctx->pc = 0x2ECE08u;
    {
        const bool branch_taken_0x2ece08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ece08) {
            ctx->pc = 0x2ECE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECE08u;
            // 0x2ece0c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECE38u;
            goto label_2ece38;
        }
    }
    ctx->pc = 0x2ECE10u;
label_2ece10:
    // 0x2ece10: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ece10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2ece14:
    // 0x2ece14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ece14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ece18:
    // 0x2ece18: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2ece18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2ece1c:
    // 0x2ece1c: 0x40f809  jalr        $v0
label_2ece20:
    if (ctx->pc == 0x2ECE20u) {
        ctx->pc = 0x2ECE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE1Cu;
        // 0x2ece20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE24u;
        goto label_2ece24;
    }
    ctx->pc = 0x2ECE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ECE24u);
        ctx->pc = 0x2ECE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE1Cu;
        // 0x2ece20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECE1Cu, 0x2ECE24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ECE24u;
label_2ece24:
    // 0x2ece24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ece24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ece28:
    // 0x2ece28: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
label_2ece2c:
    if (ctx->pc == 0x2ECE2Cu) {
        ctx->pc = 0x2ECE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE28u;
        // 0x2ece2c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE30u;
        goto label_2ece30;
    }
    ctx->pc = 0x2ECE28u;
    {
        const bool branch_taken_0x2ece28 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2ECE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE28u;
        // 0x2ece2c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece28) {
            ctx->pc = 0x2ECE64u;
            goto label_2ece64;
        }
    }
    ctx->pc = 0x2ECE30u;
label_2ece30:
    // 0x2ece30: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2ece34:
    if (ctx->pc == 0x2ECE34u) {
        ctx->pc = 0x2ECE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE30u;
        // 0x2ece34: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE38u;
        goto label_2ece38;
    }
    ctx->pc = 0x2ECE30u;
    {
        const bool branch_taken_0x2ece30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE30u;
        // 0x2ece34: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece30) {
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECE38u;
label_2ece38:
    // 0x2ece38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ece38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ece3c:
    // 0x2ece3c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2ece3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ece40:
    // 0x2ece40: 0xc0bb7a4  jal         func_2EDE90
label_2ece44:
    if (ctx->pc == 0x2ECE44u) {
        ctx->pc = 0x2ECE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE40u;
        // 0x2ece44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE48u;
        goto label_2ece48;
    }
    ctx->pc = 0x2ECE40u;
    SET_GPR_U32(ctx, 31, 0x2ECE48u);
    ctx->pc = 0x2ECE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE40u;
    // 0x2ece44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x2ECE40u, 0x2ECE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE48u;
label_2ece48:
    // 0x2ece48: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2ece48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ece4c:
    // 0x2ece4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ece4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ece50:
    // 0x2ece50: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2ece50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ece54:
    // 0x2ece54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ece54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ece58:
    // 0x2ece58: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2ece58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2ece5c:
    // 0x2ece5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ece5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ece60:
    // 0x2ece60: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x2ece60u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_2ece64:
    // 0x2ece64: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
label_2ece68:
    if (ctx->pc == 0x2ECE68u) {
        ctx->pc = 0x2ECE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE64u;
        // 0x2ece68: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE6Cu;
        goto label_2ece6c;
    }
    ctx->pc = 0x2ECE64u;
    {
        const bool branch_taken_0x2ece64 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ece64) {
            ctx->pc = 0x2ECE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECE64u;
            // 0x2ece68: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECE84u;
            goto label_2ece84;
        }
    }
    ctx->pc = 0x2ECE6Cu;
label_2ece6c:
    // 0x2ece6c: 0xc0baea4  jal         func_2EBA90
label_2ece70:
    if (ctx->pc == 0x2ECE70u) {
        ctx->pc = 0x2ECE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE6Cu;
        // 0x2ece70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE74u;
        goto label_2ece74;
    }
    ctx->pc = 0x2ECE6Cu;
    SET_GPR_U32(ctx, 31, 0x2ECE74u);
    ctx->pc = 0x2ECE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE6Cu;
    // 0x2ece70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBA90u, 0x2ECE6Cu, 0x2ECE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE74u;
label_2ece74:
    // 0x2ece74: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2ece78:
    if (ctx->pc == 0x2ECE78u) {
        ctx->pc = 0x2ECE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE74u;
        // 0x2ece78: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE7Cu;
        goto label_2ece7c;
    }
    ctx->pc = 0x2ECE74u;
    {
        const bool branch_taken_0x2ece74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ece74) {
            ctx->pc = 0x2ECE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECE74u;
            // 0x2ece78: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECE7Cu;
label_2ece7c:
    // 0x2ece7c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ece7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ece80:
    // 0x2ece80: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2ece80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2ece84:
    // 0x2ece84: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2ece84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2ece88:
    // 0x2ece88: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2ece88u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2ece8c:
    // 0x2ece8c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2ece8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ece90:
    // 0x2ece90: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_2ece94:
    if (ctx->pc == 0x2ECE94u) {
        ctx->pc = 0x2ECE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE90u;
        // 0x2ece94: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE98u;
        goto label_2ece98;
    }
    ctx->pc = 0x2ECE90u;
    {
        const bool branch_taken_0x2ece90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE90u;
        // 0x2ece94: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece90) {
            ctx->pc = 0x2ECD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecd38;
        }
    }
    ctx->pc = 0x2ECE98u;
label_2ece98:
    // 0x2ece98: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ece9c:
    if (ctx->pc == 0x2ECE9Cu) {
        ctx->pc = 0x2ECE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE98u;
        // 0x2ece9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECEA0u;
        goto label_2ecea0;
    }
    ctx->pc = 0x2ECE98u;
    {
        const bool branch_taken_0x2ece98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE98u;
        // 0x2ece9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece98) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECEA0u;
label_2ecea0:
    // 0x2ecea0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ecea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ecea4:
    // 0x2ecea4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ecea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ecea8:
    // 0x2ecea8: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x2ecea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_2eceac:
    // 0x2eceac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eceacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eceb0:
    // 0x2eceb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eceb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2eceb4:
    // 0x2eceb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eceb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eceb8:
    // 0x2eceb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eceb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ecebc:
    // 0x2ecebc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ecebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ecec0:
    // 0x2ecec0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ecec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ecec4:
    // 0x2ecec4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ecec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ecec8:
    // 0x2ecec8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2ecec8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ececc:
    // 0x2ececc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ececcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2eced0:
    // 0x2eced0: 0x3e00008  jr          $ra
label_2eced4:
    if (ctx->pc == 0x2ECED4u) {
        ctx->pc = 0x2ECED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECED0u;
        // 0x2eced4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECED8u;
        goto label_fallthrough_0x2eced0;
    }
    ctx->pc = 0x2ECED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECED0u;
        // 0x2eced4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2eced0:
    ctx->pc = 0x2ECED8u;
}
