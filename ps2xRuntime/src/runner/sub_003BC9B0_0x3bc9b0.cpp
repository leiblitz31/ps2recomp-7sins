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

// Function: sub_003BC9B0
// Address: 0x3bc9b0 - 0x3bcb70
void sub_003BC9B0_0x3bc9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC9B0_0x3bc9b0");
#endif

    switch (ctx->pc) {
        case 0x3bc9b0u: goto label_3bc9b0;
        case 0x3bc9b4u: goto label_3bc9b4;
        case 0x3bc9b8u: goto label_3bc9b8;
        case 0x3bc9bcu: goto label_3bc9bc;
        case 0x3bc9c0u: goto label_3bc9c0;
        case 0x3bc9c4u: goto label_3bc9c4;
        case 0x3bc9c8u: goto label_3bc9c8;
        case 0x3bc9ccu: goto label_3bc9cc;
        case 0x3bc9d0u: goto label_3bc9d0;
        case 0x3bc9d4u: goto label_3bc9d4;
        case 0x3bc9d8u: goto label_3bc9d8;
        case 0x3bc9dcu: goto label_3bc9dc;
        case 0x3bc9e0u: goto label_3bc9e0;
        case 0x3bc9e4u: goto label_3bc9e4;
        case 0x3bc9e8u: goto label_3bc9e8;
        case 0x3bc9ecu: goto label_3bc9ec;
        case 0x3bc9f0u: goto label_3bc9f0;
        case 0x3bc9f4u: goto label_3bc9f4;
        case 0x3bc9f8u: goto label_3bc9f8;
        case 0x3bc9fcu: goto label_3bc9fc;
        case 0x3bca00u: goto label_3bca00;
        case 0x3bca04u: goto label_3bca04;
        case 0x3bca08u: goto label_3bca08;
        case 0x3bca0cu: goto label_3bca0c;
        case 0x3bca10u: goto label_3bca10;
        case 0x3bca14u: goto label_3bca14;
        case 0x3bca18u: goto label_3bca18;
        case 0x3bca1cu: goto label_3bca1c;
        case 0x3bca20u: goto label_3bca20;
        case 0x3bca24u: goto label_3bca24;
        case 0x3bca28u: goto label_3bca28;
        case 0x3bca2cu: goto label_3bca2c;
        case 0x3bca30u: goto label_3bca30;
        case 0x3bca34u: goto label_3bca34;
        case 0x3bca38u: goto label_3bca38;
        case 0x3bca3cu: goto label_3bca3c;
        case 0x3bca40u: goto label_3bca40;
        case 0x3bca44u: goto label_3bca44;
        case 0x3bca48u: goto label_3bca48;
        case 0x3bca4cu: goto label_3bca4c;
        case 0x3bca50u: goto label_3bca50;
        case 0x3bca54u: goto label_3bca54;
        case 0x3bca58u: goto label_3bca58;
        case 0x3bca5cu: goto label_3bca5c;
        case 0x3bca60u: goto label_3bca60;
        case 0x3bca64u: goto label_3bca64;
        case 0x3bca68u: goto label_3bca68;
        case 0x3bca6cu: goto label_3bca6c;
        case 0x3bca70u: goto label_3bca70;
        case 0x3bca74u: goto label_3bca74;
        case 0x3bca78u: goto label_3bca78;
        case 0x3bca7cu: goto label_3bca7c;
        case 0x3bca80u: goto label_3bca80;
        case 0x3bca84u: goto label_3bca84;
        case 0x3bca88u: goto label_3bca88;
        case 0x3bca8cu: goto label_3bca8c;
        case 0x3bca90u: goto label_3bca90;
        case 0x3bca94u: goto label_3bca94;
        case 0x3bca98u: goto label_3bca98;
        case 0x3bca9cu: goto label_3bca9c;
        case 0x3bcaa0u: goto label_3bcaa0;
        case 0x3bcaa4u: goto label_3bcaa4;
        case 0x3bcaa8u: goto label_3bcaa8;
        case 0x3bcaacu: goto label_3bcaac;
        case 0x3bcab0u: goto label_3bcab0;
        case 0x3bcab4u: goto label_3bcab4;
        case 0x3bcab8u: goto label_3bcab8;
        case 0x3bcabcu: goto label_3bcabc;
        case 0x3bcac0u: goto label_3bcac0;
        case 0x3bcac4u: goto label_3bcac4;
        case 0x3bcac8u: goto label_3bcac8;
        case 0x3bcaccu: goto label_3bcacc;
        case 0x3bcad0u: goto label_3bcad0;
        case 0x3bcad4u: goto label_3bcad4;
        case 0x3bcad8u: goto label_3bcad8;
        case 0x3bcadcu: goto label_3bcadc;
        case 0x3bcae0u: goto label_3bcae0;
        case 0x3bcae4u: goto label_3bcae4;
        case 0x3bcae8u: goto label_3bcae8;
        case 0x3bcaecu: goto label_3bcaec;
        case 0x3bcaf0u: goto label_3bcaf0;
        case 0x3bcaf4u: goto label_3bcaf4;
        case 0x3bcaf8u: goto label_3bcaf8;
        case 0x3bcafcu: goto label_3bcafc;
        case 0x3bcb00u: goto label_3bcb00;
        case 0x3bcb04u: goto label_3bcb04;
        case 0x3bcb08u: goto label_3bcb08;
        case 0x3bcb0cu: goto label_3bcb0c;
        case 0x3bcb10u: goto label_3bcb10;
        case 0x3bcb14u: goto label_3bcb14;
        case 0x3bcb18u: goto label_3bcb18;
        case 0x3bcb1cu: goto label_3bcb1c;
        case 0x3bcb20u: goto label_3bcb20;
        case 0x3bcb24u: goto label_3bcb24;
        case 0x3bcb28u: goto label_3bcb28;
        case 0x3bcb2cu: goto label_3bcb2c;
        case 0x3bcb30u: goto label_3bcb30;
        case 0x3bcb34u: goto label_3bcb34;
        case 0x3bcb38u: goto label_3bcb38;
        case 0x3bcb3cu: goto label_3bcb3c;
        case 0x3bcb40u: goto label_3bcb40;
        case 0x3bcb44u: goto label_3bcb44;
        case 0x3bcb48u: goto label_3bcb48;
        case 0x3bcb4cu: goto label_3bcb4c;
        case 0x3bcb50u: goto label_3bcb50;
        case 0x3bcb54u: goto label_3bcb54;
        case 0x3bcb58u: goto label_3bcb58;
        case 0x3bcb5cu: goto label_3bcb5c;
        case 0x3bcb60u: goto label_3bcb60;
        case 0x3bcb64u: goto label_3bcb64;
        case 0x3bcb68u: goto label_3bcb68;
        case 0x3bcb6cu: goto label_3bcb6c;
        default: break;
    }

    ctx->pc = 0x3bc9b0u;

label_3bc9b0:
    // 0x3bc9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bc9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3bc9b4:
    // 0x3bc9b4: 0x8f82ab6c  lw          $v0, -0x5494($gp)
    ctx->pc = 0x3bc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945644)));
label_3bc9b8:
    // 0x3bc9b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3bc9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3bc9bc:
    // 0x3bc9bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bc9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc9c0:
    // 0x3bc9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bc9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3bc9c4:
    // 0x3bc9c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bc9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bc9c8:
    // 0x3bc9c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3bc9c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3bc9cc:
    // 0x3bc9cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bc9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bc9d0:
    // 0x3bc9d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3bc9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3bc9d4:
    // 0x3bc9d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3bc9d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3bc9d8:
    // 0x3bc9d8: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
label_3bc9dc:
    if (ctx->pc == 0x3BC9DCu) {
        ctx->pc = 0x3BC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9D8u;
        // 0x3bc9dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC9E0u;
        goto label_3bc9e0;
    }
    ctx->pc = 0x3BC9D8u;
    {
        const bool branch_taken_0x3bc9d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9D8u;
        // 0x3bc9dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc9d8) {
            ctx->pc = 0x3BCAB4u;
            goto label_3bcab4;
        }
    }
    ctx->pc = 0x3BC9E0u;
label_3bc9e0:
    // 0x3bc9e0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3bc9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3bc9e4:
    // 0x3bc9e4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bc9e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bc9e8:
    // 0x3bc9e8: 0x24a6dcd8  addiu       $a2, $a1, -0x2328
    ctx->pc = 0x3bc9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958296));
label_3bc9ec:
    // 0x3bc9ec: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x3bc9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_3bc9f0:
    // 0x3bc9f0: 0x19200015  blez        $t1, . + 4 + (0x15 << 2)
label_3bc9f4:
    if (ctx->pc == 0x3BC9F4u) {
        ctx->pc = 0x3BC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9F0u;
        // 0x3bc9f4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC9F8u;
        goto label_3bc9f8;
    }
    ctx->pc = 0x3BC9F0u;
    {
        const bool branch_taken_0x3bc9f0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3BC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9F0u;
        // 0x3bc9f4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc9f0) {
            ctx->pc = 0x3BCA48u;
            goto label_3bca48;
        }
    }
    ctx->pc = 0x3BC9F8u;
label_3bc9f8:
    // 0x3bc9f8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3bc9fc:
    if (ctx->pc == 0x3BC9FCu) {
        ctx->pc = 0x3BC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9F8u;
        // 0x3bc9fc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA00u;
        goto label_3bca00;
    }
    ctx->pc = 0x3BC9F8u;
    {
        const bool branch_taken_0x3bc9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9F8u;
        // 0x3bc9fc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc9f8) {
            ctx->pc = 0x3BCA68u;
            goto label_3bca68;
        }
    }
    ctx->pc = 0x3BCA00u;
label_3bca00:
    // 0x3bca00: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3bca04:
    if (ctx->pc == 0x3BCA04u) {
        ctx->pc = 0x3BCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA00u;
        // 0x3bca04: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA08u;
        goto label_3bca08;
    }
    ctx->pc = 0x3BCA00u;
    {
        const bool branch_taken_0x3bca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bca00) {
            ctx->pc = 0x3BCA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BCA00u;
            // 0x3bca04: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BCA4Cu;
            goto label_3bca4c;
        }
    }
    ctx->pc = 0x3BCA08u;
label_3bca08:
    // 0x3bca08: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bca08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3bca0c:
    // 0x3bca0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3bca10:
    if (ctx->pc == 0x3BCA10u) {
        ctx->pc = 0x3BCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA0Cu;
        // 0x3bca10: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA14u;
        goto label_3bca14;
    }
    ctx->pc = 0x3BCA0Cu;
    {
        const bool branch_taken_0x3bca0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bca0c) {
            ctx->pc = 0x3BCA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BCA0Cu;
            // 0x3bca10: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BCA34u;
            goto label_3bca34;
        }
    }
    ctx->pc = 0x3BCA14u;
label_3bca14:
    // 0x3bca14: 0x8ca2dcd8  lw          $v0, -0x2328($a1)
    ctx->pc = 0x3bca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294958296)));
label_3bca18:
    // 0x3bca18: 0x10440033  beq         $v0, $a0, . + 4 + (0x33 << 2)
label_3bca1c:
    if (ctx->pc == 0x3BCA1Cu) {
        ctx->pc = 0x3BCA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA18u;
        // 0x3bca1c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA20u;
        goto label_3bca20;
    }
    ctx->pc = 0x3BCA18u;
    {
        const bool branch_taken_0x3bca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BCA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA18u;
        // 0x3bca1c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca18) {
            ctx->pc = 0x3BCAE8u;
            goto label_3bcae8;
        }
    }
    ctx->pc = 0x3BCA20u;
label_3bca20:
    // 0x3bca20: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x3bca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_3bca24:
    // 0x3bca24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3bca24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bca28:
    // 0x3bca28: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3bca28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bca2c:
    // 0x3bca2c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3bca2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3bca30:
    // 0x3bca30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bca34:
    // 0x3bca34: 0x1044002c  beq         $v0, $a0, . + 4 + (0x2C << 2)
label_3bca38:
    if (ctx->pc == 0x3BCA38u) {
        ctx->pc = 0x3BCA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA34u;
        // 0x3bca38: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA3Cu;
        goto label_3bca3c;
    }
    ctx->pc = 0x3BCA34u;
    {
        const bool branch_taken_0x3bca34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BCA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA34u;
        // 0x3bca38: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca34) {
            ctx->pc = 0x3BCAE8u;
            goto label_3bcae8;
        }
    }
    ctx->pc = 0x3BCA3Cu;
label_3bca3c:
    // 0x3bca3c: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x3bca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_3bca40:
    // 0x3bca40: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x3bca40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_3bca44:
    // 0x3bca44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3bca44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3bca48:
    // 0x3bca48: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bca4c:
    // 0x3bca4c: 0x10440026  beq         $v0, $a0, . + 4 + (0x26 << 2)
label_3bca50:
    if (ctx->pc == 0x3BCA50u) {
        ctx->pc = 0x3BCA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA4Cu;
        // 0x3bca50: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA54u;
        goto label_3bca54;
    }
    ctx->pc = 0x3BCA4Cu;
    {
        const bool branch_taken_0x3bca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BCA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA4Cu;
        // 0x3bca50: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca4c) {
            ctx->pc = 0x3BCAE8u;
            goto label_3bcae8;
        }
    }
    ctx->pc = 0x3BCA54u;
label_3bca54:
    // 0x3bca54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3bca54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3bca58:
    // 0x3bca58: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x3bca58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_3bca5c:
    // 0x3bca5c: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x3bca5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3bca60:
    // 0x3bca60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3bca64:
    if (ctx->pc == 0x3BCA64u) {
        ctx->pc = 0x3BCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA60u;
        // 0x3bca64: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA68u;
        goto label_3bca68;
    }
    ctx->pc = 0x3BCA60u;
    {
        const bool branch_taken_0x3bca60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA60u;
        // 0x3bca64: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca60) {
            ctx->pc = 0x3BCAB4u;
            goto label_3bcab4;
        }
    }
    ctx->pc = 0x3BCA68u;
label_3bca68:
    // 0x3bca68: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3bca68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3bca6c:
    // 0x3bca6c: 0x0  nop
    ctx->pc = 0x3bca6cu;
    // NOP
label_3bca70:
    // 0x3bca70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bca74:
    // 0x3bca74: 0x1044001c  beq         $v0, $a0, . + 4 + (0x1C << 2)
label_3bca78:
    if (ctx->pc == 0x3BCA78u) {
        ctx->pc = 0x3BCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA74u;
        // 0x3bca78: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA7Cu;
        goto label_3bca7c;
    }
    ctx->pc = 0x3BCA74u;
    {
        const bool branch_taken_0x3bca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA74u;
        // 0x3bca78: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca74) {
            ctx->pc = 0x3BCAE8u;
            goto label_3bcae8;
        }
    }
    ctx->pc = 0x3BCA7Cu;
label_3bca7c:
    // 0x3bca7c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3bca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3bca80:
    // 0x3bca80: 0x10440019  beq         $v0, $a0, . + 4 + (0x19 << 2)
label_3bca84:
    if (ctx->pc == 0x3BCA84u) {
        ctx->pc = 0x3BCA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA80u;
        // 0x3bca84: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA88u;
        goto label_3bca88;
    }
    ctx->pc = 0x3BCA80u;
    {
        const bool branch_taken_0x3bca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BCA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA80u;
        // 0x3bca84: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca80) {
            ctx->pc = 0x3BCAE8u;
            goto label_3bcae8;
        }
    }
    ctx->pc = 0x3BCA88u;
label_3bca88:
    // 0x3bca88: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x3bca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3bca8c:
    // 0x3bca8c: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
label_3bca90:
    if (ctx->pc == 0x3BCA90u) {
        ctx->pc = 0x3BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA8Cu;
        // 0x3bca90: 0x24c50060  addiu       $a1, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCA94u;
        goto label_3bca94;
    }
    ctx->pc = 0x3BCA8Cu;
    {
        const bool branch_taken_0x3bca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA8Cu;
        // 0x3bca90: 0x24c50060  addiu       $a1, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca8c) {
            ctx->pc = 0x3BCAE8u;
            goto label_3bcae8;
        }
    }
    ctx->pc = 0x3BCA94u;
label_3bca94:
    // 0x3bca94: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x3bca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_3bca98:
    // 0x3bca98: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
label_3bca9c:
    if (ctx->pc == 0x3BCA9Cu) {
        ctx->pc = 0x3BCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA98u;
        // 0x3bca9c: 0x24c50090  addiu       $a1, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCAA0u;
        goto label_3bcaa0;
    }
    ctx->pc = 0x3BCA98u;
    {
        const bool branch_taken_0x3bca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA98u;
        // 0x3bca9c: 0x24c50090  addiu       $a1, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca98) {
            ctx->pc = 0x3BCAE8u;
            goto label_3bcae8;
        }
    }
    ctx->pc = 0x3BCAA0u;
label_3bcaa0:
    // 0x3bcaa0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3bcaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3bcaa4:
    // 0x3bcaa4: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x3bcaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_3bcaa8:
    // 0x3bcaa8: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x3bcaa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3bcaac:
    // 0x3bcaac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3bcab0:
    if (ctx->pc == 0x3BCAB0u) {
        ctx->pc = 0x3BCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAACu;
        // 0x3bcab0: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCAB4u;
        goto label_3bcab4;
    }
    ctx->pc = 0x3BCAACu;
    {
        const bool branch_taken_0x3bcaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAACu;
        // 0x3bcab0: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcaac) {
            ctx->pc = 0x3BCA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bca70;
        }
    }
    ctx->pc = 0x3BCAB4u;
label_3bcab4:
    // 0x3bcab4: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x3bcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_3bcab8:
    // 0x3bcab8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3bcab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bcabc:
    // 0x3bcabc: 0xc1035f6  jal         func_40D7D8
label_3bcac0:
    if (ctx->pc == 0x3BCAC0u) {
        ctx->pc = 0x3BCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCABCu;
        // 0x3bcac0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCAC4u;
        goto label_3bcac4;
    }
    ctx->pc = 0x3BCABCu;
    SET_GPR_U32(ctx, 31, 0x3BCAC4u);
    ctx->pc = 0x3BCAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCABCu;
    // 0x3bcac0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BCABCu, 0x3BCAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCAC4u;
label_3bcac4:
    // 0x3bcac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bcac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bcac8:
    // 0x3bcac8: 0xc103628  jal         func_40D8A0
label_3bcacc:
    if (ctx->pc == 0x3BCACCu) {
        ctx->pc = 0x3BCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAC8u;
        // 0x3bcacc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCAD0u;
        goto label_3bcad0;
    }
    ctx->pc = 0x3BCAC8u;
    SET_GPR_U32(ctx, 31, 0x3BCAD0u);
    ctx->pc = 0x3BCACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCAC8u;
    // 0x3bcacc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BCAC8u, 0x3BCAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCAD0u;
label_3bcad0:
    // 0x3bcad0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bcad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcad4:
    // 0x3bcad4: 0x0  nop
    ctx->pc = 0x3bcad4u;
    // NOP
label_3bcad8:
    // 0x3bcad8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_3bcadc:
    if (ctx->pc == 0x3BCADCu) {
        ctx->pc = 0x3BCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAD8u;
        // 0x3bcadc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCAE0u;
        goto label_3bcae0;
    }
    ctx->pc = 0x3BCAD8u;
    {
        const bool branch_taken_0x3bcad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bcad8) {
            ctx->pc = 0x3BCADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BCAD8u;
            // 0x3bcadc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BCAF0u;
            goto label_3bcaf0;
        }
    }
    ctx->pc = 0x3BCAE0u;
label_3bcae0:
    // 0x3bcae0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3bcae4:
    if (ctx->pc == 0x3BCAE4u) {
        ctx->pc = 0x3BCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAE0u;
        // 0x3bcae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCAE8u;
        goto label_3bcae8;
    }
    ctx->pc = 0x3BCAE0u;
    {
        const bool branch_taken_0x3bcae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAE0u;
        // 0x3bcae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcae0) {
            ctx->pc = 0x3BCB54u;
            goto label_3bcb54;
        }
    }
    ctx->pc = 0x3BCAE8u;
label_3bcae8:
    // 0x3bcae8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_3bcaec:
    if (ctx->pc == 0x3BCAECu) {
        ctx->pc = 0x3BCAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAE8u;
        // 0x3bcaec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCAF0u;
        goto label_3bcaf0;
    }
    ctx->pc = 0x3BCAE8u;
    {
        const bool branch_taken_0x3bcae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAE8u;
        // 0x3bcaec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcae8) {
            ctx->pc = 0x3BCAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bcad8;
        }
    }
    ctx->pc = 0x3BCAF0u;
label_3bcaf0:
    // 0x3bcaf0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3bcaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3bcaf4:
    // 0x3bcaf4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3bcaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3bcaf8:
    // 0x3bcaf8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bcaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bcafc:
    // 0x3bcafc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x3bcafcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bcb00:
    // 0x3bcb00: 0x8cc2e988  lw          $v0, -0x1678($a2)
    ctx->pc = 0x3bcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294961544)));
label_3bcb04:
    // 0x3bcb04: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3bcb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_3bcb08:
    // 0x3bcb08: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x3bcb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_3bcb0c:
    // 0x3bcb0c: 0x40f809  jalr        $v0
label_3bcb10:
    if (ctx->pc == 0x3BCB10u) {
        ctx->pc = 0x3BCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB0Cu;
        // 0x3bcb10: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCB14u;
        goto label_3bcb14;
    }
    ctx->pc = 0x3BCB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BCB14u);
        ctx->pc = 0x3BCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB0Cu;
        // 0x3bcb10: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCB0Cu, 0x3BCB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BCB14u;
label_3bcb14:
    // 0x3bcb14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bcb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bcb18:
    // 0x3bcb18: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x3bcb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
label_3bcb1c:
    // 0x3bcb1c: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x3bcb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_3bcb20:
    // 0x3bcb20: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x3bcb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
label_3bcb24:
    // 0x3bcb24: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x3bcb24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3bcb28:
    // 0x3bcb28: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3bcb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3bcb2c:
    // 0x3bcb2c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3bcb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_3bcb30:
    // 0x3bcb30: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_3bcb34:
    if (ctx->pc == 0x3BCB34u) {
        ctx->pc = 0x3BCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB30u;
        // 0x3bcb34: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCB38u;
        goto label_3bcb38;
    }
    ctx->pc = 0x3BCB30u;
    {
        const bool branch_taken_0x3bcb30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB30u;
        // 0x3bcb34: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcb30) {
            ctx->pc = 0x3BCB4Cu;
            goto label_3bcb4c;
        }
    }
    ctx->pc = 0x3BCB38u;
label_3bcb38:
    // 0x3bcb38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3bcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3bcb3c:
    // 0x3bcb3c: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x3bcb3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3bcb40:
    // 0x3bcb40: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x3bcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3bcb44:
    // 0x3bcb44: 0x10000002  b           . + 4 + (0x2 << 2)
label_3bcb48:
    if (ctx->pc == 0x3BCB48u) {
        ctx->pc = 0x3BCB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB44u;
        // 0x3bcb48: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCB4Cu;
        goto label_3bcb4c;
    }
    ctx->pc = 0x3BCB44u;
    {
        const bool branch_taken_0x3bcb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB44u;
        // 0x3bcb48: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcb44) {
            ctx->pc = 0x3BCB50u;
            goto label_3bcb50;
        }
    }
    ctx->pc = 0x3BCB4Cu;
label_3bcb4c:
    // 0x3bcb4c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3bcb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_3bcb50:
    // 0x3bcb50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3bcb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bcb54:
    // 0x3bcb54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3bcb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bcb58:
    // 0x3bcb58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3bcb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bcb5c:
    // 0x3bcb5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bcb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bcb60:
    // 0x3bcb60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bcb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3bcb64:
    // 0x3bcb64: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3bcb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bcb68:
    // 0x3bcb68: 0x3e00008  jr          $ra
label_3bcb6c:
    if (ctx->pc == 0x3BCB6Cu) {
        ctx->pc = 0x3BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB68u;
        // 0x3bcb6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCB70u;
        goto label_fallthrough_0x3bcb68;
    }
    ctx->pc = 0x3BCB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB68u;
        // 0x3bcb6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bcb68:
    ctx->pc = 0x3BCB70u;
}
