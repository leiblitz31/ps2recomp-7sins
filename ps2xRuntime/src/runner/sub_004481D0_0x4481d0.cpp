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

// Function: sub_004481D0
// Address: 0x4481d0 - 0x448360
void sub_004481D0_0x4481d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004481D0_0x4481d0");
#endif

    switch (ctx->pc) {
        case 0x4481d0u: goto label_4481d0;
        case 0x4481d4u: goto label_4481d4;
        case 0x4481d8u: goto label_4481d8;
        case 0x4481dcu: goto label_4481dc;
        case 0x4481e0u: goto label_4481e0;
        case 0x4481e4u: goto label_4481e4;
        case 0x4481e8u: goto label_4481e8;
        case 0x4481ecu: goto label_4481ec;
        case 0x4481f0u: goto label_4481f0;
        case 0x4481f4u: goto label_4481f4;
        case 0x4481f8u: goto label_4481f8;
        case 0x4481fcu: goto label_4481fc;
        case 0x448200u: goto label_448200;
        case 0x448204u: goto label_448204;
        case 0x448208u: goto label_448208;
        case 0x44820cu: goto label_44820c;
        case 0x448210u: goto label_448210;
        case 0x448214u: goto label_448214;
        case 0x448218u: goto label_448218;
        case 0x44821cu: goto label_44821c;
        case 0x448220u: goto label_448220;
        case 0x448224u: goto label_448224;
        case 0x448228u: goto label_448228;
        case 0x44822cu: goto label_44822c;
        case 0x448230u: goto label_448230;
        case 0x448234u: goto label_448234;
        case 0x448238u: goto label_448238;
        case 0x44823cu: goto label_44823c;
        case 0x448240u: goto label_448240;
        case 0x448244u: goto label_448244;
        case 0x448248u: goto label_448248;
        case 0x44824cu: goto label_44824c;
        case 0x448250u: goto label_448250;
        case 0x448254u: goto label_448254;
        case 0x448258u: goto label_448258;
        case 0x44825cu: goto label_44825c;
        case 0x448260u: goto label_448260;
        case 0x448264u: goto label_448264;
        case 0x448268u: goto label_448268;
        case 0x44826cu: goto label_44826c;
        case 0x448270u: goto label_448270;
        case 0x448274u: goto label_448274;
        case 0x448278u: goto label_448278;
        case 0x44827cu: goto label_44827c;
        case 0x448280u: goto label_448280;
        case 0x448284u: goto label_448284;
        case 0x448288u: goto label_448288;
        case 0x44828cu: goto label_44828c;
        case 0x448290u: goto label_448290;
        case 0x448294u: goto label_448294;
        case 0x448298u: goto label_448298;
        case 0x44829cu: goto label_44829c;
        case 0x4482a0u: goto label_4482a0;
        case 0x4482a4u: goto label_4482a4;
        case 0x4482a8u: goto label_4482a8;
        case 0x4482acu: goto label_4482ac;
        case 0x4482b0u: goto label_4482b0;
        case 0x4482b4u: goto label_4482b4;
        case 0x4482b8u: goto label_4482b8;
        case 0x4482bcu: goto label_4482bc;
        case 0x4482c0u: goto label_4482c0;
        case 0x4482c4u: goto label_4482c4;
        case 0x4482c8u: goto label_4482c8;
        case 0x4482ccu: goto label_4482cc;
        case 0x4482d0u: goto label_4482d0;
        case 0x4482d4u: goto label_4482d4;
        case 0x4482d8u: goto label_4482d8;
        case 0x4482dcu: goto label_4482dc;
        case 0x4482e0u: goto label_4482e0;
        case 0x4482e4u: goto label_4482e4;
        case 0x4482e8u: goto label_4482e8;
        case 0x4482ecu: goto label_4482ec;
        case 0x4482f0u: goto label_4482f0;
        case 0x4482f4u: goto label_4482f4;
        case 0x4482f8u: goto label_4482f8;
        case 0x4482fcu: goto label_4482fc;
        case 0x448300u: goto label_448300;
        case 0x448304u: goto label_448304;
        case 0x448308u: goto label_448308;
        case 0x44830cu: goto label_44830c;
        case 0x448310u: goto label_448310;
        case 0x448314u: goto label_448314;
        case 0x448318u: goto label_448318;
        case 0x44831cu: goto label_44831c;
        case 0x448320u: goto label_448320;
        case 0x448324u: goto label_448324;
        case 0x448328u: goto label_448328;
        case 0x44832cu: goto label_44832c;
        case 0x448330u: goto label_448330;
        case 0x448334u: goto label_448334;
        case 0x448338u: goto label_448338;
        case 0x44833cu: goto label_44833c;
        case 0x448340u: goto label_448340;
        case 0x448344u: goto label_448344;
        case 0x448348u: goto label_448348;
        case 0x44834cu: goto label_44834c;
        case 0x448350u: goto label_448350;
        case 0x448354u: goto label_448354;
        case 0x448358u: goto label_448358;
        case 0x44835cu: goto label_44835c;
        default: break;
    }

    ctx->pc = 0x4481d0u;

label_4481d0:
    // 0x4481d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4481d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4481d4:
    // 0x4481d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4481d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4481d8:
    // 0x4481d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4481d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4481dc:
    // 0x4481dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4481dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4481e0:
    // 0x4481e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4481e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4481e4:
    // 0x4481e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4481e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4481e8:
    // 0x4481e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4481e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4481ec:
    // 0x4481ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4481ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4481f0:
    // 0x4481f0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_4481f4:
    if (ctx->pc == 0x4481F4u) {
        ctx->pc = 0x4481F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4481F0u;
        // 0x4481f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4481F8u;
        goto label_4481f8;
    }
    ctx->pc = 0x4481F0u;
    {
        const bool branch_taken_0x4481f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4481F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4481F0u;
        // 0x4481f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4481f0) {
            ctx->pc = 0x448340u;
            goto label_448340;
        }
    }
    ctx->pc = 0x4481F8u;
label_4481f8:
    // 0x4481f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4481f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4481fc:
    // 0x4481fc: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x4481fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_448200:
    // 0x448200: 0x2446e880  addiu       $a2, $v0, -0x1780
    ctx->pc = 0x448200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_448204:
    // 0x448204: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x448204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_448208:
    // 0x448208: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x448208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_44820c:
    // 0x44820c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x44820cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_448210:
    // 0x448210: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x448210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_448214:
    // 0x448214: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_448218:
    if (ctx->pc == 0x448218u) {
        ctx->pc = 0x448218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448214u;
        // 0x448218: 0x458818  mult        $s1, $v0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x44821Cu;
        goto label_44821c;
    }
    ctx->pc = 0x448214u;
    {
        const bool branch_taken_0x448214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x448218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448214u;
        // 0x448218: 0x458818  mult        $s1, $v0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x448214) {
            ctx->pc = 0x448258u;
            goto label_448258;
        }
    }
    ctx->pc = 0x44821Cu;
label_44821c:
    // 0x44821c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x44821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_448220:
    // 0x448220: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x448220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_448224:
    // 0x448224: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_448228:
    if (ctx->pc == 0x448228u) {
        ctx->pc = 0x448228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448224u;
        // 0x448228: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44822Cu;
        goto label_44822c;
    }
    ctx->pc = 0x448224u;
    {
        const bool branch_taken_0x448224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448224u;
        // 0x448228: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448224) {
            ctx->pc = 0x44823Cu;
            goto label_44823c;
        }
    }
    ctx->pc = 0x44822Cu;
label_44822c:
    // 0x44822c: 0xc1118a0  jal         func_446280
label_448230:
    if (ctx->pc == 0x448230u) {
        ctx->pc = 0x448230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44822Cu;
        // 0x448230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448234u;
        goto label_448234;
    }
    ctx->pc = 0x44822Cu;
    SET_GPR_U32(ctx, 31, 0x448234u);
    ctx->pc = 0x448230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44822Cu;
    // 0x448230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446280u, 0x44822Cu, 0x448234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448234u;
label_448234:
    // 0x448234: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_448238:
    if (ctx->pc == 0x448238u) {
        ctx->pc = 0x448238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448234u;
        // 0x448238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44823Cu;
        goto label_44823c;
    }
    ctx->pc = 0x448234u;
    {
        const bool branch_taken_0x448234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448234u;
        // 0x448238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448234) {
            ctx->pc = 0x448340u;
            goto label_448340;
        }
    }
    ctx->pc = 0x44823Cu;
label_44823c:
    // 0x44823c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_448240:
    // 0x448240: 0xc111948  jal         func_446520
label_448244:
    if (ctx->pc == 0x448244u) {
        ctx->pc = 0x448244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448240u;
        // 0x448244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448248u;
        goto label_448248;
    }
    ctx->pc = 0x448240u;
    SET_GPR_U32(ctx, 31, 0x448248u);
    ctx->pc = 0x448244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448240u;
    // 0x448244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446520u, 0x448240u, 0x448248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448248u;
label_448248:
    // 0x448248: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_44824c:
    if (ctx->pc == 0x44824Cu) {
        ctx->pc = 0x44824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448248u;
        // 0x44824c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448250u;
        goto label_448250;
    }
    ctx->pc = 0x448248u;
    {
        const bool branch_taken_0x448248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448248u;
        // 0x44824c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448248) {
            ctx->pc = 0x4482ACu;
            goto label_4482ac;
        }
    }
    ctx->pc = 0x448250u;
label_448250:
    // 0x448250: 0x1000003b  b           . + 4 + (0x3B << 2)
label_448254:
    if (ctx->pc == 0x448254u) {
        ctx->pc = 0x448254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448250u;
        // 0x448254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448258u;
        goto label_448258;
    }
    ctx->pc = 0x448250u;
    {
        const bool branch_taken_0x448250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448250u;
        // 0x448254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448250) {
            ctx->pc = 0x448340u;
            goto label_448340;
        }
    }
    ctx->pc = 0x448258u;
label_448258:
    // 0x448258: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x448258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_44825c:
    // 0x44825c: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x44825cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_448260:
    // 0x448260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_448264:
    // 0x448264: 0x40f809  jalr        $v0
label_448268:
    if (ctx->pc == 0x448268u) {
        ctx->pc = 0x448268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448264u;
        // 0x448268: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44826Cu;
        goto label_44826c;
    }
    ctx->pc = 0x448264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44826Cu);
        ctx->pc = 0x448268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448264u;
        // 0x448268: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448264u, 0x44826Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44826Cu;
label_44826c:
    // 0x44826c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_448270:
    if (ctx->pc == 0x448270u) {
        ctx->pc = 0x448270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44826Cu;
        // 0x448270: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448274u;
        goto label_448274;
    }
    ctx->pc = 0x44826Cu;
    {
        const bool branch_taken_0x44826c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44826Cu;
        // 0x448270: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44826c) {
            ctx->pc = 0x4482A0u;
            goto label_4482a0;
        }
    }
    ctx->pc = 0x448274u;
label_448274:
    // 0x448274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x448274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448278:
    // 0x448278: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x448278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44827c:
    // 0x44827c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44827cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_448280:
    // 0x448280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x448280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_448284:
    // 0x448284: 0xc1035f6  jal         func_40D7D8
label_448288:
    if (ctx->pc == 0x448288u) {
        ctx->pc = 0x448288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448284u;
        // 0x448288: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44828Cu;
        goto label_44828c;
    }
    ctx->pc = 0x448284u;
    SET_GPR_U32(ctx, 31, 0x44828Cu);
    ctx->pc = 0x448288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448284u;
    // 0x448288: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x448284u, 0x44828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44828Cu;
label_44828c:
    // 0x44828c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_448290:
    // 0x448290: 0xc103628  jal         func_40D8A0
label_448294:
    if (ctx->pc == 0x448294u) {
        ctx->pc = 0x448294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448290u;
        // 0x448294: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448298u;
        goto label_448298;
    }
    ctx->pc = 0x448290u;
    SET_GPR_U32(ctx, 31, 0x448298u);
    ctx->pc = 0x448294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448290u;
    // 0x448294: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x448290u, 0x448298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448298u;
label_448298:
    // 0x448298: 0x10000029  b           . + 4 + (0x29 << 2)
label_44829c:
    if (ctx->pc == 0x44829Cu) {
        ctx->pc = 0x44829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448298u;
        // 0x44829c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4482A0u;
        goto label_4482a0;
    }
    ctx->pc = 0x448298u;
    {
        const bool branch_taken_0x448298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448298u;
        // 0x44829c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448298) {
            ctx->pc = 0x448340u;
            goto label_448340;
        }
    }
    ctx->pc = 0x4482A0u;
label_4482a0:
    // 0x4482a0: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x4482a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_4482a4:
    // 0x4482a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4482a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4482a8:
    // 0x4482a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4482a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4482ac:
    // 0x4482ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4482acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4482b0:
    // 0x4482b0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_4482b4:
    if (ctx->pc == 0x4482B4u) {
        ctx->pc = 0x4482B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4482B0u;
        // 0x4482b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4482B8u;
        goto label_4482b8;
    }
    ctx->pc = 0x4482B0u;
    {
        const bool branch_taken_0x4482b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4482B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4482B0u;
        // 0x4482b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4482b0) {
            ctx->pc = 0x44833Cu;
            goto label_44833c;
        }
    }
    ctx->pc = 0x4482B8u;
label_4482b8:
    // 0x4482b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4482b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4482bc:
    // 0x4482bc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_4482c0:
    if (ctx->pc == 0x4482C0u) {
        ctx->pc = 0x4482C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4482BCu;
        // 0x4482c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4482C4u;
        goto label_4482c4;
    }
    ctx->pc = 0x4482BCu;
    {
        const bool branch_taken_0x4482bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4482C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4482BCu;
        // 0x4482c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4482bc) {
            ctx->pc = 0x44833Cu;
            goto label_44833c;
        }
    }
    ctx->pc = 0x4482C4u;
label_4482c4:
    // 0x4482c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4482c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4482c8:
    // 0x4482c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4482c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4482cc:
    // 0x4482cc: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x4482ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4482d0:
    // 0x4482d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4482d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4482d4:
    // 0x4482d4: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x4482d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4482d8:
    // 0x4482d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4482dc:
    // 0x4482dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4482e0:
    if (ctx->pc == 0x4482E0u) {
        ctx->pc = 0x4482E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4482DCu;
        // 0x4482e0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4482E4u;
        goto label_4482e4;
    }
    ctx->pc = 0x4482DCu;
    {
        const bool branch_taken_0x4482dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4482dc) {
            ctx->pc = 0x4482E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4482DCu;
            // 0x4482e0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4482F0u;
            goto label_4482f0;
        }
    }
    ctx->pc = 0x4482E4u;
label_4482e4:
    // 0x4482e4: 0x40f809  jalr        $v0
label_4482e8:
    if (ctx->pc == 0x4482E8u) {
        ctx->pc = 0x4482ECu;
        goto label_4482ec;
    }
    ctx->pc = 0x4482E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4482ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4482E4u, 0x4482ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4482ECu;
label_4482ec:
    // 0x4482ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4482ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4482f0:
    // 0x4482f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4482f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4482f4:
    // 0x4482f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4482f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4482f8:
    // 0x4482f8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x4482f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4482fc:
    // 0x4482fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4482fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_448300:
    // 0x448300: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_448304:
    if (ctx->pc == 0x448304u) {
        ctx->pc = 0x448304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448300u;
        // 0x448304: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448308u;
        goto label_448308;
    }
    ctx->pc = 0x448300u;
    {
        const bool branch_taken_0x448300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x448304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448300u;
        // 0x448304: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448300) {
            ctx->pc = 0x44831Cu;
            goto label_44831c;
        }
    }
    ctx->pc = 0x448308u;
label_448308:
    // 0x448308: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x448308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_44830c:
    // 0x44830c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_448310:
    if (ctx->pc == 0x448310u) {
        ctx->pc = 0x448310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44830Cu;
        // 0x448310: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448314u;
        goto label_448314;
    }
    ctx->pc = 0x44830Cu;
    {
        const bool branch_taken_0x44830c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44830c) {
            ctx->pc = 0x448310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44830Cu;
            // 0x448310: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448320u;
            goto label_448320;
        }
    }
    ctx->pc = 0x448314u;
label_448314:
    // 0x448314: 0x60f809  jalr        $v1
label_448318:
    if (ctx->pc == 0x448318u) {
        ctx->pc = 0x44831Cu;
        goto label_44831c;
    }
    ctx->pc = 0x448314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x44831Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448314u, 0x44831Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44831Cu;
label_44831c:
    // 0x44831c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x44831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_448320:
    // 0x448320: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x448320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_448324:
    // 0x448324: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x448324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_448328:
    // 0x448328: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x448328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_44832c:
    // 0x44832c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x44832cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_448330:
    // 0x448330: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x448330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_448334:
    // 0x448334: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_448338:
    if (ctx->pc == 0x448338u) {
        ctx->pc = 0x448338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448334u;
        // 0x448338: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44833Cu;
        goto label_44833c;
    }
    ctx->pc = 0x448334u;
    {
        const bool branch_taken_0x448334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x448338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448334u;
        // 0x448338: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448334) {
            ctx->pc = 0x4482C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4482c8;
        }
    }
    ctx->pc = 0x44833Cu;
label_44833c:
    // 0x44833c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44833cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_448340:
    // 0x448340: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x448340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_448344:
    // 0x448344: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x448344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_448348:
    // 0x448348: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x448348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44834c:
    // 0x44834c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x44834cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_448350:
    // 0x448350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x448350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_448354:
    // 0x448354: 0x3e00008  jr          $ra
label_448358:
    if (ctx->pc == 0x448358u) {
        ctx->pc = 0x448358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448354u;
        // 0x448358: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44835Cu;
        goto label_44835c;
    }
    ctx->pc = 0x448354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x448358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448354u;
        // 0x448358: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44835Cu;
label_44835c:
    // 0x44835c: 0x0  nop
    ctx->pc = 0x44835cu;
    // NOP
    ctx->pc = 0x448360u;
}
