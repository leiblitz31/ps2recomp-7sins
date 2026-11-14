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

// Function: sub_00442918
// Address: 0x442918 - 0x442a48
void sub_00442918_0x442918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442918_0x442918");
#endif

    switch (ctx->pc) {
        case 0x442918u: goto label_442918;
        case 0x44291cu: goto label_44291c;
        case 0x442920u: goto label_442920;
        case 0x442924u: goto label_442924;
        case 0x442928u: goto label_442928;
        case 0x44292cu: goto label_44292c;
        case 0x442930u: goto label_442930;
        case 0x442934u: goto label_442934;
        case 0x442938u: goto label_442938;
        case 0x44293cu: goto label_44293c;
        case 0x442940u: goto label_442940;
        case 0x442944u: goto label_442944;
        case 0x442948u: goto label_442948;
        case 0x44294cu: goto label_44294c;
        case 0x442950u: goto label_442950;
        case 0x442954u: goto label_442954;
        case 0x442958u: goto label_442958;
        case 0x44295cu: goto label_44295c;
        case 0x442960u: goto label_442960;
        case 0x442964u: goto label_442964;
        case 0x442968u: goto label_442968;
        case 0x44296cu: goto label_44296c;
        case 0x442970u: goto label_442970;
        case 0x442974u: goto label_442974;
        case 0x442978u: goto label_442978;
        case 0x44297cu: goto label_44297c;
        case 0x442980u: goto label_442980;
        case 0x442984u: goto label_442984;
        case 0x442988u: goto label_442988;
        case 0x44298cu: goto label_44298c;
        case 0x442990u: goto label_442990;
        case 0x442994u: goto label_442994;
        case 0x442998u: goto label_442998;
        case 0x44299cu: goto label_44299c;
        case 0x4429a0u: goto label_4429a0;
        case 0x4429a4u: goto label_4429a4;
        case 0x4429a8u: goto label_4429a8;
        case 0x4429acu: goto label_4429ac;
        case 0x4429b0u: goto label_4429b0;
        case 0x4429b4u: goto label_4429b4;
        case 0x4429b8u: goto label_4429b8;
        case 0x4429bcu: goto label_4429bc;
        case 0x4429c0u: goto label_4429c0;
        case 0x4429c4u: goto label_4429c4;
        case 0x4429c8u: goto label_4429c8;
        case 0x4429ccu: goto label_4429cc;
        case 0x4429d0u: goto label_4429d0;
        case 0x4429d4u: goto label_4429d4;
        case 0x4429d8u: goto label_4429d8;
        case 0x4429dcu: goto label_4429dc;
        case 0x4429e0u: goto label_4429e0;
        case 0x4429e4u: goto label_4429e4;
        case 0x4429e8u: goto label_4429e8;
        case 0x4429ecu: goto label_4429ec;
        case 0x4429f0u: goto label_4429f0;
        case 0x4429f4u: goto label_4429f4;
        case 0x4429f8u: goto label_4429f8;
        case 0x4429fcu: goto label_4429fc;
        case 0x442a00u: goto label_442a00;
        case 0x442a04u: goto label_442a04;
        case 0x442a08u: goto label_442a08;
        case 0x442a0cu: goto label_442a0c;
        case 0x442a10u: goto label_442a10;
        case 0x442a14u: goto label_442a14;
        case 0x442a18u: goto label_442a18;
        case 0x442a1cu: goto label_442a1c;
        case 0x442a20u: goto label_442a20;
        case 0x442a24u: goto label_442a24;
        case 0x442a28u: goto label_442a28;
        case 0x442a2cu: goto label_442a2c;
        case 0x442a30u: goto label_442a30;
        case 0x442a34u: goto label_442a34;
        case 0x442a38u: goto label_442a38;
        case 0x442a3cu: goto label_442a3c;
        case 0x442a40u: goto label_442a40;
        case 0x442a44u: goto label_442a44;
        default: break;
    }

    ctx->pc = 0x442918u;

label_442918:
    // 0x442918: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x442918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_44291c:
    // 0x44291c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44291cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_442920:
    // 0x442920: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x442920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_442924:
    // 0x442924: 0x2445d7c0  addiu       $a1, $v0, -0x2840
    ctx->pc = 0x442924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
label_442928:
    // 0x442928: 0x8c43d7c0  lw          $v1, -0x2840($v0)
    ctx->pc = 0x442928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956992)));
label_44292c:
    // 0x44292c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44292cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442930:
    // 0x442930: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_442934:
    if (ctx->pc == 0x442934u) {
        ctx->pc = 0x442934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442930u;
        // 0x442934: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442938u;
        goto label_442938;
    }
    ctx->pc = 0x442930u;
    {
        const bool branch_taken_0x442930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x442934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442930u;
        // 0x442934: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442930) {
            ctx->pc = 0x4429FCu;
            goto label_4429fc;
        }
    }
    ctx->pc = 0x442938u;
label_442938:
    // 0x442938: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x442938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44293c:
    // 0x44293c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x44293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_442940:
    // 0x442940: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
label_442944:
    if (ctx->pc == 0x442944u) {
        ctx->pc = 0x442944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442940u;
        // 0x442944: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442948u;
        goto label_442948;
    }
    ctx->pc = 0x442940u;
    {
        const bool branch_taken_0x442940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x442944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442940u;
        // 0x442944: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442940) {
            ctx->pc = 0x442990u;
            goto label_442990;
        }
    }
    ctx->pc = 0x442948u;
label_442948:
    // 0x442948: 0x8f87beb8  lw          $a3, -0x4148($gp)
    ctx->pc = 0x442948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
label_44294c:
    // 0x44294c: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x44294cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_442950:
    // 0x442950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x442950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_442954:
    // 0x442954: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x442954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_442958:
    // 0x442958: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x442958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_44295c:
    // 0x44295c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_442960:
    // 0x442960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x442960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_442964:
    // 0x442964: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_442968:
    if (ctx->pc == 0x442968u) {
        ctx->pc = 0x442968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442964u;
        // 0x442968: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44296Cu;
        goto label_44296c;
    }
    ctx->pc = 0x442964u;
    {
        const bool branch_taken_0x442964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442964u;
        // 0x442968: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442964) {
            ctx->pc = 0x442970u;
            goto label_442970;
        }
    }
    ctx->pc = 0x44296Cu;
label_44296c:
    // 0x44296c: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x44296cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_442970:
    // 0x442970: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x442970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_442974:
    // 0x442974: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x442974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_442978:
    // 0x442978: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x442978u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_44297c:
    // 0x44297c: 0x50680001  beql        $v1, $t0, . + 4 + (0x1 << 2)
label_442980:
    if (ctx->pc == 0x442980u) {
        ctx->pc = 0x442980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44297Cu;
        // 0x442980: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x442984u;
        goto label_442984;
    }
    ctx->pc = 0x44297Cu;
    {
        const bool branch_taken_0x44297c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x44297c) {
            ctx->pc = 0x442980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44297Cu;
            // 0x442980: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x442984u;
            goto label_442984;
        }
    }
    ctx->pc = 0x442984u;
label_442984:
    // 0x442984: 0x2010  mfhi        $a0
    ctx->pc = 0x442984u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_442988:
    // 0x442988: 0x1486fff3  bne         $a0, $a2, . + 4 + (-0xD << 2)
label_44298c:
    if (ctx->pc == 0x44298Cu) {
        ctx->pc = 0x44298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442988u;
        // 0x44298c: 0x891018  mult        $v0, $a0, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x442990u;
        goto label_442990;
    }
    ctx->pc = 0x442988u;
    {
        const bool branch_taken_0x442988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x44298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442988u;
        // 0x44298c: 0x891018  mult        $v0, $a0, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x442988) {
            ctx->pc = 0x442958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442958;
        }
    }
    ctx->pc = 0x442990u;
label_442990:
    // 0x442990: 0x2603d7c0  addiu       $v1, $s0, -0x2840
    ctx->pc = 0x442990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956992));
label_442994:
    // 0x442994: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x442994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_442998:
    // 0x442998: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x442998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_44299c:
    // 0x44299c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x44299cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4429a0:
    // 0x4429a0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4429a4:
    if (ctx->pc == 0x4429A4u) {
        ctx->pc = 0x4429A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4429A0u;
        // 0x4429a4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4429A8u;
        goto label_4429a8;
    }
    ctx->pc = 0x4429A0u;
    {
        const bool branch_taken_0x4429a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4429A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4429A0u;
        // 0x4429a4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4429a0) {
            ctx->pc = 0x4429E4u;
            goto label_4429e4;
        }
    }
    ctx->pc = 0x4429A8u;
label_4429a8:
    // 0x4429a8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4429a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4429ac:
    // 0x4429ac: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x4429acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4429b0:
    // 0x4429b0: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x4429b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_4429b4:
    // 0x4429b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4429b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4429b8:
    // 0x4429b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4429b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4429bc:
    // 0x4429bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4429c0:
    if (ctx->pc == 0x4429C0u) {
        ctx->pc = 0x4429C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4429BCu;
        // 0x4429c0: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4429C4u;
        goto label_4429c4;
    }
    ctx->pc = 0x4429BCu;
    {
        const bool branch_taken_0x4429bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4429C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4429BCu;
        // 0x4429c0: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4429bc) {
            ctx->pc = 0x4429D0u;
            goto label_4429d0;
        }
    }
    ctx->pc = 0x4429C4u;
label_4429c4:
    // 0x4429c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4429c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4429c8:
    // 0x4429c8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x4429c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_4429cc:
    // 0x4429cc: 0xa0400017  sb          $zero, 0x17($v0)
    ctx->pc = 0x4429ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23), (uint8_t)GPR_U32(ctx, 0));
label_4429d0:
    // 0x4429d0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4429d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4429d4:
    // 0x4429d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4429d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4429d8:
    // 0x4429d8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4429d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4429dc:
    // 0x4429dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4429e0:
    if (ctx->pc == 0x4429E0u) {
        ctx->pc = 0x4429E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4429DCu;
        // 0x4429e0: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4429E4u;
        goto label_4429e4;
    }
    ctx->pc = 0x4429DCu;
    {
        const bool branch_taken_0x4429dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4429E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4429DCu;
        // 0x4429e0: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4429dc) {
            ctx->pc = 0x4429B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4429b0;
        }
    }
    ctx->pc = 0x4429E4u;
label_4429e4:
    // 0x4429e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4429e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4429e8:
    // 0x4429e8: 0x2603d7c0  addiu       $v1, $s0, -0x2840
    ctx->pc = 0x4429e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956992));
label_4429ec:
    // 0x4429ec: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4429ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4429f0:
    // 0x4429f0: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x4429f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_4429f4:
    // 0x4429f4: 0xa0f809  jalr        $a1
label_4429f8:
    if (ctx->pc == 0x4429F8u) {
        ctx->pc = 0x4429F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4429F4u;
        // 0x4429f8: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4429FCu;
        goto label_4429fc;
    }
    ctx->pc = 0x4429F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4429FCu);
        ctx->pc = 0x4429F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4429F4u;
        // 0x4429f8: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4429F4u, 0x4429FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4429FCu;
label_4429fc:
    // 0x4429fc: 0x2603d7c0  addiu       $v1, $s0, -0x2840
    ctx->pc = 0x4429fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956992));
label_442a00:
    // 0x442a00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x442a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_442a04:
    // 0x442a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x442a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442a08:
    // 0x442a08: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x442a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_442a0c:
    // 0x442a0c: 0xae02d7c0  sw          $v0, -0x2840($s0)
    ctx->pc = 0x442a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956992), GPR_U32(ctx, 2));
label_442a10:
    // 0x442a10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x442a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_442a14:
    // 0x442a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x442a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_442a18:
    // 0x442a18: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x442a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_442a1c:
    // 0x442a1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x442a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_442a20:
    // 0x442a20: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x442a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_442a24:
    // 0x442a24: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x442a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_442a28:
    // 0x442a28: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x442a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_442a2c:
    // 0x442a2c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x442a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_442a30:
    // 0x442a30: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x442a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_442a34:
    // 0x442a34: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x442a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
label_442a38:
    // 0x442a38: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x442a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_442a3c:
    // 0x442a3c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x442a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_442a40:
    // 0x442a40: 0x3e00008  jr          $ra
label_442a44:
    if (ctx->pc == 0x442A44u) {
        ctx->pc = 0x442A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442A40u;
        // 0x442a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442A48u;
        goto label_fallthrough_0x442a40;
    }
    ctx->pc = 0x442A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442A40u;
        // 0x442a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x442a40:
    ctx->pc = 0x442A48u;
}
