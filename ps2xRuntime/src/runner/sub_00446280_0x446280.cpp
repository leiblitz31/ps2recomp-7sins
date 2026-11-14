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

// Function: sub_00446280
// Address: 0x446280 - 0x446520
void sub_00446280_0x446280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446280_0x446280");
#endif

    switch (ctx->pc) {
        case 0x446280u: goto label_446280;
        case 0x446284u: goto label_446284;
        case 0x446288u: goto label_446288;
        case 0x44628cu: goto label_44628c;
        case 0x446290u: goto label_446290;
        case 0x446294u: goto label_446294;
        case 0x446298u: goto label_446298;
        case 0x44629cu: goto label_44629c;
        case 0x4462a0u: goto label_4462a0;
        case 0x4462a4u: goto label_4462a4;
        case 0x4462a8u: goto label_4462a8;
        case 0x4462acu: goto label_4462ac;
        case 0x4462b0u: goto label_4462b0;
        case 0x4462b4u: goto label_4462b4;
        case 0x4462b8u: goto label_4462b8;
        case 0x4462bcu: goto label_4462bc;
        case 0x4462c0u: goto label_4462c0;
        case 0x4462c4u: goto label_4462c4;
        case 0x4462c8u: goto label_4462c8;
        case 0x4462ccu: goto label_4462cc;
        case 0x4462d0u: goto label_4462d0;
        case 0x4462d4u: goto label_4462d4;
        case 0x4462d8u: goto label_4462d8;
        case 0x4462dcu: goto label_4462dc;
        case 0x4462e0u: goto label_4462e0;
        case 0x4462e4u: goto label_4462e4;
        case 0x4462e8u: goto label_4462e8;
        case 0x4462ecu: goto label_4462ec;
        case 0x4462f0u: goto label_4462f0;
        case 0x4462f4u: goto label_4462f4;
        case 0x4462f8u: goto label_4462f8;
        case 0x4462fcu: goto label_4462fc;
        case 0x446300u: goto label_446300;
        case 0x446304u: goto label_446304;
        case 0x446308u: goto label_446308;
        case 0x44630cu: goto label_44630c;
        case 0x446310u: goto label_446310;
        case 0x446314u: goto label_446314;
        case 0x446318u: goto label_446318;
        case 0x44631cu: goto label_44631c;
        case 0x446320u: goto label_446320;
        case 0x446324u: goto label_446324;
        case 0x446328u: goto label_446328;
        case 0x44632cu: goto label_44632c;
        case 0x446330u: goto label_446330;
        case 0x446334u: goto label_446334;
        case 0x446338u: goto label_446338;
        case 0x44633cu: goto label_44633c;
        case 0x446340u: goto label_446340;
        case 0x446344u: goto label_446344;
        case 0x446348u: goto label_446348;
        case 0x44634cu: goto label_44634c;
        case 0x446350u: goto label_446350;
        case 0x446354u: goto label_446354;
        case 0x446358u: goto label_446358;
        case 0x44635cu: goto label_44635c;
        case 0x446360u: goto label_446360;
        case 0x446364u: goto label_446364;
        case 0x446368u: goto label_446368;
        case 0x44636cu: goto label_44636c;
        case 0x446370u: goto label_446370;
        case 0x446374u: goto label_446374;
        case 0x446378u: goto label_446378;
        case 0x44637cu: goto label_44637c;
        case 0x446380u: goto label_446380;
        case 0x446384u: goto label_446384;
        case 0x446388u: goto label_446388;
        case 0x44638cu: goto label_44638c;
        case 0x446390u: goto label_446390;
        case 0x446394u: goto label_446394;
        case 0x446398u: goto label_446398;
        case 0x44639cu: goto label_44639c;
        case 0x4463a0u: goto label_4463a0;
        case 0x4463a4u: goto label_4463a4;
        case 0x4463a8u: goto label_4463a8;
        case 0x4463acu: goto label_4463ac;
        case 0x4463b0u: goto label_4463b0;
        case 0x4463b4u: goto label_4463b4;
        case 0x4463b8u: goto label_4463b8;
        case 0x4463bcu: goto label_4463bc;
        case 0x4463c0u: goto label_4463c0;
        case 0x4463c4u: goto label_4463c4;
        case 0x4463c8u: goto label_4463c8;
        case 0x4463ccu: goto label_4463cc;
        case 0x4463d0u: goto label_4463d0;
        case 0x4463d4u: goto label_4463d4;
        case 0x4463d8u: goto label_4463d8;
        case 0x4463dcu: goto label_4463dc;
        case 0x4463e0u: goto label_4463e0;
        case 0x4463e4u: goto label_4463e4;
        case 0x4463e8u: goto label_4463e8;
        case 0x4463ecu: goto label_4463ec;
        case 0x4463f0u: goto label_4463f0;
        case 0x4463f4u: goto label_4463f4;
        case 0x4463f8u: goto label_4463f8;
        case 0x4463fcu: goto label_4463fc;
        case 0x446400u: goto label_446400;
        case 0x446404u: goto label_446404;
        case 0x446408u: goto label_446408;
        case 0x44640cu: goto label_44640c;
        case 0x446410u: goto label_446410;
        case 0x446414u: goto label_446414;
        case 0x446418u: goto label_446418;
        case 0x44641cu: goto label_44641c;
        case 0x446420u: goto label_446420;
        case 0x446424u: goto label_446424;
        case 0x446428u: goto label_446428;
        case 0x44642cu: goto label_44642c;
        case 0x446430u: goto label_446430;
        case 0x446434u: goto label_446434;
        case 0x446438u: goto label_446438;
        case 0x44643cu: goto label_44643c;
        case 0x446440u: goto label_446440;
        case 0x446444u: goto label_446444;
        case 0x446448u: goto label_446448;
        case 0x44644cu: goto label_44644c;
        case 0x446450u: goto label_446450;
        case 0x446454u: goto label_446454;
        case 0x446458u: goto label_446458;
        case 0x44645cu: goto label_44645c;
        case 0x446460u: goto label_446460;
        case 0x446464u: goto label_446464;
        case 0x446468u: goto label_446468;
        case 0x44646cu: goto label_44646c;
        case 0x446470u: goto label_446470;
        case 0x446474u: goto label_446474;
        case 0x446478u: goto label_446478;
        case 0x44647cu: goto label_44647c;
        case 0x446480u: goto label_446480;
        case 0x446484u: goto label_446484;
        case 0x446488u: goto label_446488;
        case 0x44648cu: goto label_44648c;
        case 0x446490u: goto label_446490;
        case 0x446494u: goto label_446494;
        case 0x446498u: goto label_446498;
        case 0x44649cu: goto label_44649c;
        case 0x4464a0u: goto label_4464a0;
        case 0x4464a4u: goto label_4464a4;
        case 0x4464a8u: goto label_4464a8;
        case 0x4464acu: goto label_4464ac;
        case 0x4464b0u: goto label_4464b0;
        case 0x4464b4u: goto label_4464b4;
        case 0x4464b8u: goto label_4464b8;
        case 0x4464bcu: goto label_4464bc;
        case 0x4464c0u: goto label_4464c0;
        case 0x4464c4u: goto label_4464c4;
        case 0x4464c8u: goto label_4464c8;
        case 0x4464ccu: goto label_4464cc;
        case 0x4464d0u: goto label_4464d0;
        case 0x4464d4u: goto label_4464d4;
        case 0x4464d8u: goto label_4464d8;
        case 0x4464dcu: goto label_4464dc;
        case 0x4464e0u: goto label_4464e0;
        case 0x4464e4u: goto label_4464e4;
        case 0x4464e8u: goto label_4464e8;
        case 0x4464ecu: goto label_4464ec;
        case 0x4464f0u: goto label_4464f0;
        case 0x4464f4u: goto label_4464f4;
        case 0x4464f8u: goto label_4464f8;
        case 0x4464fcu: goto label_4464fc;
        case 0x446500u: goto label_446500;
        case 0x446504u: goto label_446504;
        case 0x446508u: goto label_446508;
        case 0x44650cu: goto label_44650c;
        case 0x446510u: goto label_446510;
        case 0x446514u: goto label_446514;
        case 0x446518u: goto label_446518;
        case 0x44651cu: goto label_44651c;
        default: break;
    }

    ctx->pc = 0x446280u;

label_446280:
    // 0x446280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x446280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_446284:
    // 0x446284: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x446284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_446288:
    // 0x446288: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x446288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_44628c:
    // 0x44628c: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x44628cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_446290:
    // 0x446290: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x446290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_446294:
    // 0x446294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x446294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446298:
    // 0x446298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x446298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44629c:
    // 0x44629c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x44629cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4462a0:
    // 0x4462a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4462a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4462a4:
    // 0x4462a4: 0x8e120020  lw          $s2, 0x20($s0)
    ctx->pc = 0x4462a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4462a8:
    // 0x4462a8: 0x34c60409  ori         $a2, $a2, 0x409
    ctx->pc = 0x4462a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
label_4462ac:
    // 0x4462ac: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x4462acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_4462b0:
    // 0x4462b0: 0x40f809  jalr        $v0
label_4462b4:
    if (ctx->pc == 0x4462B4u) {
        ctx->pc = 0x4462B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462B0u;
        // 0x4462b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462B8u;
        goto label_4462b8;
    }
    ctx->pc = 0x4462B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4462B8u);
        ctx->pc = 0x4462B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462B0u;
        // 0x4462b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4462B0u, 0x4462B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4462B8u;
label_4462b8:
    // 0x4462b8: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_4462bc:
    if (ctx->pc == 0x4462BCu) {
        ctx->pc = 0x4462BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462B8u;
        // 0x4462bc: 0x522023  subu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462C0u;
        goto label_4462c0;
    }
    ctx->pc = 0x4462B8u;
    {
        const bool branch_taken_0x4462b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4462BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462B8u;
        // 0x4462bc: 0x522023  subu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462b8) {
            ctx->pc = 0x4464D0u;
            goto label_4464d0;
        }
    }
    ctx->pc = 0x4462C0u;
label_4462c0:
    // 0x4462c0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4462c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4462c4:
    // 0x4462c4: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x4462c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_4462c8:
    // 0x4462c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4462c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4462cc:
    // 0x4462cc: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x4462ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4462d0:
    // 0x4462d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4462d4:
    if (ctx->pc == 0x4462D4u) {
        ctx->pc = 0x4462D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462D0u;
        // 0x4462d4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462D8u;
        goto label_4462d8;
    }
    ctx->pc = 0x4462D0u;
    {
        const bool branch_taken_0x4462d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4462D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462D0u;
        // 0x4462d4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462d0) {
            ctx->pc = 0x4462E0u;
            goto label_4462e0;
        }
    }
    ctx->pc = 0x4462D8u;
label_4462d8:
    // 0x4462d8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x4462d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4462dc:
    // 0x4462dc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4462dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_4462e0:
    // 0x4462e0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4462e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4462e4:
    // 0x4462e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4462e8:
    if (ctx->pc == 0x4462E8u) {
        ctx->pc = 0x4462E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462E4u;
        // 0x4462e8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462ECu;
        goto label_4462ec;
    }
    ctx->pc = 0x4462E4u;
    {
        const bool branch_taken_0x4462e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4462E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462E4u;
        // 0x4462e8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462e4) {
            ctx->pc = 0x4462F0u;
            goto label_4462f0;
        }
    }
    ctx->pc = 0x4462ECu;
label_4462ec:
    // 0x4462ec: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4462ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_4462f0:
    // 0x4462f0: 0x11200083  beqz        $t1, . + 4 + (0x83 << 2)
label_4462f4:
    if (ctx->pc == 0x4462F4u) {
        ctx->pc = 0x4462F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462F0u;
        // 0x4462f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462F8u;
        goto label_4462f8;
    }
    ctx->pc = 0x4462F0u;
    {
        const bool branch_taken_0x4462f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4462F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462F0u;
        // 0x4462f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462f0) {
            ctx->pc = 0x446500u;
            goto label_446500;
        }
    }
    ctx->pc = 0x4462F8u;
label_4462f8:
    // 0x4462f8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4462f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4462fc:
    // 0x4462fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4462fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446300:
    // 0x446300: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x446300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_446304:
    // 0x446304: 0x19200003  blez        $t1, . + 4 + (0x3 << 2)
label_446308:
    if (ctx->pc == 0x446308u) {
        ctx->pc = 0x446308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446304u;
        // 0x446308: 0x24a30008  addiu       $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44630Cu;
        goto label_44630c;
    }
    ctx->pc = 0x446304u;
    {
        const bool branch_taken_0x446304 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x446308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446304u;
        // 0x446308: 0x24a30008  addiu       $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446304) {
            ctx->pc = 0x446314u;
            goto label_446314;
        }
    }
    ctx->pc = 0x44630Cu;
label_44630c:
    // 0x44630c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_446310:
    if (ctx->pc == 0x446310u) {
        ctx->pc = 0x446310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44630Cu;
        // 0x446310: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446314u;
        goto label_446314;
    }
    ctx->pc = 0x44630Cu;
    {
        const bool branch_taken_0x44630c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44630Cu;
        // 0x446310: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44630c) {
            ctx->pc = 0x4463A0u;
            goto label_4463a0;
        }
    }
    ctx->pc = 0x446314u;
label_446314:
    // 0x446314: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x446314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_446318:
    // 0x446318: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_44631c:
    if (ctx->pc == 0x44631Cu) {
        ctx->pc = 0x44631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446318u;
        // 0x44631c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446320u;
        goto label_446320;
    }
    ctx->pc = 0x446318u;
    {
        const bool branch_taken_0x446318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446318u;
        // 0x44631c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446318) {
            ctx->pc = 0x446324u;
            goto label_446324;
        }
    }
    ctx->pc = 0x446320u;
label_446320:
    // 0x446320: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x446320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_446324:
    // 0x446324: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x446324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446328:
    // 0x446328: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x446328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_44632c:
    // 0x44632c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_446330:
    if (ctx->pc == 0x446330u) {
        ctx->pc = 0x446330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44632Cu;
        // 0x446330: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446334u;
        goto label_446334;
    }
    ctx->pc = 0x44632Cu;
    {
        const bool branch_taken_0x44632c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44632Cu;
        // 0x446330: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44632c) {
            ctx->pc = 0x44633Cu;
            goto label_44633c;
        }
    }
    ctx->pc = 0x446334u;
label_446334:
    // 0x446334: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x446334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_446338:
    // 0x446338: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x446338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_44633c:
    // 0x44633c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x44633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_446340:
    // 0x446340: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_446344:
    if (ctx->pc == 0x446344u) {
        ctx->pc = 0x446344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446340u;
        // 0x446344: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446348u;
        goto label_446348;
    }
    ctx->pc = 0x446340u;
    {
        const bool branch_taken_0x446340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446340u;
        // 0x446344: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446340) {
            ctx->pc = 0x44634Cu;
            goto label_44634c;
        }
    }
    ctx->pc = 0x446348u;
label_446348:
    // 0x446348: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x446348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_44634c:
    // 0x44634c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x44634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446350:
    // 0x446350: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x446350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_446354:
    // 0x446354: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_446358:
    if (ctx->pc == 0x446358u) {
        ctx->pc = 0x446358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446354u;
        // 0x446358: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44635Cu;
        goto label_44635c;
    }
    ctx->pc = 0x446354u;
    {
        const bool branch_taken_0x446354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446354u;
        // 0x446358: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446354) {
            ctx->pc = 0x446364u;
            goto label_446364;
        }
    }
    ctx->pc = 0x44635Cu;
label_44635c:
    // 0x44635c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x44635cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_446360:
    // 0x446360: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x446360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446364:
    // 0x446364: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x446364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_446368:
    // 0x446368: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_44636c:
    if (ctx->pc == 0x44636Cu) {
        ctx->pc = 0x44636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446368u;
        // 0x44636c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446370u;
        goto label_446370;
    }
    ctx->pc = 0x446368u;
    {
        const bool branch_taken_0x446368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446368u;
        // 0x44636c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446368) {
            ctx->pc = 0x446374u;
            goto label_446374;
        }
    }
    ctx->pc = 0x446370u;
label_446370:
    // 0x446370: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x446370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_446374:
    // 0x446374: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x446374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446378:
    // 0x446378: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x446378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_44637c:
    // 0x44637c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_446380:
    if (ctx->pc == 0x446380u) {
        ctx->pc = 0x446380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44637Cu;
        // 0x446380: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446384u;
        goto label_446384;
    }
    ctx->pc = 0x44637Cu;
    {
        const bool branch_taken_0x44637c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44637Cu;
        // 0x446380: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44637c) {
            ctx->pc = 0x446388u;
            goto label_446388;
        }
    }
    ctx->pc = 0x446384u;
label_446384:
    // 0x446384: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x446384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_446388:
    // 0x446388: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x446388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44638c:
    // 0x44638c: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x44638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_446390:
    // 0x446390: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x446390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_446394:
    // 0x446394: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_446398:
    if (ctx->pc == 0x446398u) {
        ctx->pc = 0x446398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446394u;
        // 0x446398: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44639Cu;
        goto label_44639c;
    }
    ctx->pc = 0x446394u;
    {
        const bool branch_taken_0x446394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446394u;
        // 0x446398: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446394) {
            ctx->pc = 0x446500u;
            goto label_446500;
        }
    }
    ctx->pc = 0x44639Cu;
label_44639c:
    // 0x44639c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x44639cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4463a0:
    // 0x4463a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4463a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4463a4:
    // 0x4463a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4463a8:
    if (ctx->pc == 0x4463A8u) {
        ctx->pc = 0x4463A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463A4u;
        // 0x4463a8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4463ACu;
        goto label_4463ac;
    }
    ctx->pc = 0x4463A4u;
    {
        const bool branch_taken_0x4463a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4463A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463A4u;
        // 0x4463a8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4463a4) {
            ctx->pc = 0x4463B0u;
            goto label_4463b0;
        }
    }
    ctx->pc = 0x4463ACu;
label_4463ac:
    // 0x4463ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4463acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4463b0:
    // 0x4463b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4463b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4463b4:
    // 0x4463b4: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x4463b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4463b8:
    // 0x4463b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4463b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4463bc:
    // 0x4463bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4463c0:
    if (ctx->pc == 0x4463C0u) {
        ctx->pc = 0x4463C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463BCu;
        // 0x4463c0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4463C4u;
        goto label_4463c4;
    }
    ctx->pc = 0x4463BCu;
    {
        const bool branch_taken_0x4463bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4463C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463BCu;
        // 0x4463c0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4463bc) {
            ctx->pc = 0x4463C8u;
            goto label_4463c8;
        }
    }
    ctx->pc = 0x4463C4u;
label_4463c4:
    // 0x4463c4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x4463c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_4463c8:
    // 0x4463c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4463cc:
    // 0x4463cc: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x4463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4463d0:
    // 0x4463d0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4463d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4463d4:
    // 0x4463d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4463d8:
    if (ctx->pc == 0x4463D8u) {
        ctx->pc = 0x4463D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463D4u;
        // 0x4463d8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4463DCu;
        goto label_4463dc;
    }
    ctx->pc = 0x4463D4u;
    {
        const bool branch_taken_0x4463d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4463D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463D4u;
        // 0x4463d8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4463d4) {
            ctx->pc = 0x4463E0u;
            goto label_4463e0;
        }
    }
    ctx->pc = 0x4463DCu;
label_4463dc:
    // 0x4463dc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x4463dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_4463e0:
    // 0x4463e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4463e4:
    // 0x4463e4: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x4463e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4463e8:
    // 0x4463e8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4463e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4463ec:
    // 0x4463ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4463f0:
    if (ctx->pc == 0x4463F0u) {
        ctx->pc = 0x4463F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463ECu;
        // 0x4463f0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4463F4u;
        goto label_4463f4;
    }
    ctx->pc = 0x4463ECu;
    {
        const bool branch_taken_0x4463ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4463F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463ECu;
        // 0x4463f0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4463ec) {
            ctx->pc = 0x4463F8u;
            goto label_4463f8;
        }
    }
    ctx->pc = 0x4463F4u;
label_4463f4:
    // 0x4463f4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x4463f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_4463f8:
    // 0x4463f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4463f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4463fc:
    // 0x4463fc: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x4463fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_446400:
    // 0x446400: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x446400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_446404:
    // 0x446404: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_446408:
    if (ctx->pc == 0x446408u) {
        ctx->pc = 0x446408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446404u;
        // 0x446408: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44640Cu;
        goto label_44640c;
    }
    ctx->pc = 0x446404u;
    {
        const bool branch_taken_0x446404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446404u;
        // 0x446408: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446404) {
            ctx->pc = 0x446410u;
            goto label_446410;
        }
    }
    ctx->pc = 0x44640Cu;
label_44640c:
    // 0x44640c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x44640cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_446410:
    // 0x446410: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x446410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446414:
    // 0x446414: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x446414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_446418:
    // 0x446418: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x446418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_44641c:
    // 0x44641c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_446420:
    if (ctx->pc == 0x446420u) {
        ctx->pc = 0x446420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44641Cu;
        // 0x446420: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446424u;
        goto label_446424;
    }
    ctx->pc = 0x44641Cu;
    {
        const bool branch_taken_0x44641c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44641Cu;
        // 0x446420: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44641c) {
            ctx->pc = 0x446428u;
            goto label_446428;
        }
    }
    ctx->pc = 0x446424u;
label_446424:
    // 0x446424: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x446424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_446428:
    // 0x446428: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x446428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_44642c:
    // 0x44642c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_446430:
    if (ctx->pc == 0x446430u) {
        ctx->pc = 0x446430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44642Cu;
        // 0x446430: 0x24e50028  addiu       $a1, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446434u;
        goto label_446434;
    }
    ctx->pc = 0x44642Cu;
    {
        const bool branch_taken_0x44642c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44642Cu;
        // 0x446430: 0x24e50028  addiu       $a1, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44642c) {
            ctx->pc = 0x44643Cu;
            goto label_44643c;
        }
    }
    ctx->pc = 0x446434u;
label_446434:
    // 0x446434: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x446434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_446438:
    // 0x446438: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x446438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
label_44643c:
    // 0x44643c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x44643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446440:
    // 0x446440: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x446440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_446444:
    // 0x446444: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x446444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_446448:
    // 0x446448: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_44644c:
    if (ctx->pc == 0x44644Cu) {
        ctx->pc = 0x44644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446448u;
        // 0x44644c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446450u;
        goto label_446450;
    }
    ctx->pc = 0x446448u;
    {
        const bool branch_taken_0x446448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446448u;
        // 0x44644c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446448) {
            ctx->pc = 0x446454u;
            goto label_446454;
        }
    }
    ctx->pc = 0x446450u;
label_446450:
    // 0x446450: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x446450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_446454:
    // 0x446454: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x446454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446458:
    // 0x446458: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x446458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_44645c:
    // 0x44645c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x44645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_446460:
    // 0x446460: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_446464:
    if (ctx->pc == 0x446464u) {
        ctx->pc = 0x446464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446460u;
        // 0x446464: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446468u;
        goto label_446468;
    }
    ctx->pc = 0x446460u;
    {
        const bool branch_taken_0x446460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446460u;
        // 0x446464: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446460) {
            ctx->pc = 0x44646Cu;
            goto label_44646c;
        }
    }
    ctx->pc = 0x446468u;
label_446468:
    // 0x446468: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x446468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_44646c:
    // 0x44646c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x44646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446470:
    // 0x446470: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x446470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_446474:
    // 0x446474: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x446474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_446478:
    // 0x446478: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_44647c:
    if (ctx->pc == 0x44647Cu) {
        ctx->pc = 0x44647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446478u;
        // 0x44647c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446480u;
        goto label_446480;
    }
    ctx->pc = 0x446478u;
    {
        const bool branch_taken_0x446478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446478u;
        // 0x44647c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446478) {
            ctx->pc = 0x446484u;
            goto label_446484;
        }
    }
    ctx->pc = 0x446480u;
label_446480:
    // 0x446480: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x446480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_446484:
    // 0x446484: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x446484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446488:
    // 0x446488: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x446488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_44648c:
    // 0x44648c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x44648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_446490:
    // 0x446490: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_446494:
    if (ctx->pc == 0x446494u) {
        ctx->pc = 0x446494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446490u;
        // 0x446494: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446498u;
        goto label_446498;
    }
    ctx->pc = 0x446490u;
    {
        const bool branch_taken_0x446490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446490u;
        // 0x446494: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446490) {
            ctx->pc = 0x44649Cu;
            goto label_44649c;
        }
    }
    ctx->pc = 0x446498u;
label_446498:
    // 0x446498: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x446498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_44649c:
    // 0x44649c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x44649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4464a0:
    // 0x4464a0: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x4464a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4464a4:
    // 0x4464a4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4464a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4464a8:
    // 0x4464a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4464ac:
    if (ctx->pc == 0x4464ACu) {
        ctx->pc = 0x4464ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464A8u;
        // 0x4464ac: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464B0u;
        goto label_4464b0;
    }
    ctx->pc = 0x4464A8u;
    {
        const bool branch_taken_0x4464a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4464ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464A8u;
        // 0x4464ac: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464a8) {
            ctx->pc = 0x4464B4u;
            goto label_4464b4;
        }
    }
    ctx->pc = 0x4464B0u;
label_4464b0:
    // 0x4464b0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x4464b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_4464b4:
    // 0x4464b4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4464b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_4464b8:
    // 0x4464b8: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x4464b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_4464bc:
    // 0x4464bc: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x4464bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_4464c0:
    // 0x4464c0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_4464c4:
    if (ctx->pc == 0x4464C4u) {
        ctx->pc = 0x4464C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464C0u;
        // 0x4464c4: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464C8u;
        goto label_4464c8;
    }
    ctx->pc = 0x4464C0u;
    {
        const bool branch_taken_0x4464c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4464C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464C0u;
        // 0x4464c4: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464c0) {
            ctx->pc = 0x4463A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4463a0;
        }
    }
    ctx->pc = 0x4464C8u;
label_4464c8:
    // 0x4464c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_4464cc:
    if (ctx->pc == 0x4464CCu) {
        ctx->pc = 0x4464CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464C8u;
        // 0x4464cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464D0u;
        goto label_4464d0;
    }
    ctx->pc = 0x4464C8u;
    {
        const bool branch_taken_0x4464c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4464CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464C8u;
        // 0x4464cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464c8) {
            ctx->pc = 0x446504u;
            goto label_446504;
        }
    }
    ctx->pc = 0x4464D0u;
label_4464d0:
    // 0x4464d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4464d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4464d4:
    // 0x4464d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4464d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4464d8:
    // 0x4464d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4464d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4464dc:
    // 0x4464dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4464dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4464e0:
    // 0x4464e0: 0xc1035f6  jal         func_40D7D8
label_4464e4:
    if (ctx->pc == 0x4464E4u) {
        ctx->pc = 0x4464E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464E0u;
        // 0x4464e4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464E8u;
        goto label_4464e8;
    }
    ctx->pc = 0x4464E0u;
    SET_GPR_U32(ctx, 31, 0x4464E8u);
    ctx->pc = 0x4464E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4464E0u;
    // 0x4464e4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4464E0u, 0x4464E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4464E8u;
label_4464e8:
    // 0x4464e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4464e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4464ec:
    // 0x4464ec: 0xc103628  jal         func_40D8A0
label_4464f0:
    if (ctx->pc == 0x4464F0u) {
        ctx->pc = 0x4464F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464ECu;
        // 0x4464f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464F4u;
        goto label_4464f4;
    }
    ctx->pc = 0x4464ECu;
    SET_GPR_U32(ctx, 31, 0x4464F4u);
    ctx->pc = 0x4464F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4464ECu;
    // 0x4464f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4464ECu, 0x4464F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4464F4u;
label_4464f4:
    // 0x4464f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4464f8:
    if (ctx->pc == 0x4464F8u) {
        ctx->pc = 0x4464F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464F4u;
        // 0x4464f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464FCu;
        goto label_4464fc;
    }
    ctx->pc = 0x4464F4u;
    {
        const bool branch_taken_0x4464f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4464F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464F4u;
        // 0x4464f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464f4) {
            ctx->pc = 0x446504u;
            goto label_446504;
        }
    }
    ctx->pc = 0x4464FCu;
label_4464fc:
    // 0x4464fc: 0x0  nop
    ctx->pc = 0x4464fcu;
    // NOP
label_446500:
    // 0x446500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446504:
    // 0x446504: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x446504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_446508:
    // 0x446508: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x446508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44650c:
    // 0x44650c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44650cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_446510:
    // 0x446510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x446510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_446514:
    // 0x446514: 0x3e00008  jr          $ra
label_446518:
    if (ctx->pc == 0x446518u) {
        ctx->pc = 0x446518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446514u;
        // 0x446518: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44651Cu;
        goto label_44651c;
    }
    ctx->pc = 0x446514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446514u;
        // 0x446518: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44651Cu;
label_44651c:
    // 0x44651c: 0x0  nop
    ctx->pc = 0x44651cu;
    // NOP
    ctx->pc = 0x446520u;
}
