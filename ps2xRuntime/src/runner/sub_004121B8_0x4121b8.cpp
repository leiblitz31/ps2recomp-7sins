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

// Function: sub_004121B8
// Address: 0x4121b8 - 0x4123b0
void sub_004121B8_0x4121b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004121B8_0x4121b8");
#endif

    switch (ctx->pc) {
        case 0x4121b8u: goto label_4121b8;
        case 0x4121bcu: goto label_4121bc;
        case 0x4121c0u: goto label_4121c0;
        case 0x4121c4u: goto label_4121c4;
        case 0x4121c8u: goto label_4121c8;
        case 0x4121ccu: goto label_4121cc;
        case 0x4121d0u: goto label_4121d0;
        case 0x4121d4u: goto label_4121d4;
        case 0x4121d8u: goto label_4121d8;
        case 0x4121dcu: goto label_4121dc;
        case 0x4121e0u: goto label_4121e0;
        case 0x4121e4u: goto label_4121e4;
        case 0x4121e8u: goto label_4121e8;
        case 0x4121ecu: goto label_4121ec;
        case 0x4121f0u: goto label_4121f0;
        case 0x4121f4u: goto label_4121f4;
        case 0x4121f8u: goto label_4121f8;
        case 0x4121fcu: goto label_4121fc;
        case 0x412200u: goto label_412200;
        case 0x412204u: goto label_412204;
        case 0x412208u: goto label_412208;
        case 0x41220cu: goto label_41220c;
        case 0x412210u: goto label_412210;
        case 0x412214u: goto label_412214;
        case 0x412218u: goto label_412218;
        case 0x41221cu: goto label_41221c;
        case 0x412220u: goto label_412220;
        case 0x412224u: goto label_412224;
        case 0x412228u: goto label_412228;
        case 0x41222cu: goto label_41222c;
        case 0x412230u: goto label_412230;
        case 0x412234u: goto label_412234;
        case 0x412238u: goto label_412238;
        case 0x41223cu: goto label_41223c;
        case 0x412240u: goto label_412240;
        case 0x412244u: goto label_412244;
        case 0x412248u: goto label_412248;
        case 0x41224cu: goto label_41224c;
        case 0x412250u: goto label_412250;
        case 0x412254u: goto label_412254;
        case 0x412258u: goto label_412258;
        case 0x41225cu: goto label_41225c;
        case 0x412260u: goto label_412260;
        case 0x412264u: goto label_412264;
        case 0x412268u: goto label_412268;
        case 0x41226cu: goto label_41226c;
        case 0x412270u: goto label_412270;
        case 0x412274u: goto label_412274;
        case 0x412278u: goto label_412278;
        case 0x41227cu: goto label_41227c;
        case 0x412280u: goto label_412280;
        case 0x412284u: goto label_412284;
        case 0x412288u: goto label_412288;
        case 0x41228cu: goto label_41228c;
        case 0x412290u: goto label_412290;
        case 0x412294u: goto label_412294;
        case 0x412298u: goto label_412298;
        case 0x41229cu: goto label_41229c;
        case 0x4122a0u: goto label_4122a0;
        case 0x4122a4u: goto label_4122a4;
        case 0x4122a8u: goto label_4122a8;
        case 0x4122acu: goto label_4122ac;
        case 0x4122b0u: goto label_4122b0;
        case 0x4122b4u: goto label_4122b4;
        case 0x4122b8u: goto label_4122b8;
        case 0x4122bcu: goto label_4122bc;
        case 0x4122c0u: goto label_4122c0;
        case 0x4122c4u: goto label_4122c4;
        case 0x4122c8u: goto label_4122c8;
        case 0x4122ccu: goto label_4122cc;
        case 0x4122d0u: goto label_4122d0;
        case 0x4122d4u: goto label_4122d4;
        case 0x4122d8u: goto label_4122d8;
        case 0x4122dcu: goto label_4122dc;
        case 0x4122e0u: goto label_4122e0;
        case 0x4122e4u: goto label_4122e4;
        case 0x4122e8u: goto label_4122e8;
        case 0x4122ecu: goto label_4122ec;
        case 0x4122f0u: goto label_4122f0;
        case 0x4122f4u: goto label_4122f4;
        case 0x4122f8u: goto label_4122f8;
        case 0x4122fcu: goto label_4122fc;
        case 0x412300u: goto label_412300;
        case 0x412304u: goto label_412304;
        case 0x412308u: goto label_412308;
        case 0x41230cu: goto label_41230c;
        case 0x412310u: goto label_412310;
        case 0x412314u: goto label_412314;
        case 0x412318u: goto label_412318;
        case 0x41231cu: goto label_41231c;
        case 0x412320u: goto label_412320;
        case 0x412324u: goto label_412324;
        case 0x412328u: goto label_412328;
        case 0x41232cu: goto label_41232c;
        case 0x412330u: goto label_412330;
        case 0x412334u: goto label_412334;
        case 0x412338u: goto label_412338;
        case 0x41233cu: goto label_41233c;
        case 0x412340u: goto label_412340;
        case 0x412344u: goto label_412344;
        case 0x412348u: goto label_412348;
        case 0x41234cu: goto label_41234c;
        case 0x412350u: goto label_412350;
        case 0x412354u: goto label_412354;
        case 0x412358u: goto label_412358;
        case 0x41235cu: goto label_41235c;
        case 0x412360u: goto label_412360;
        case 0x412364u: goto label_412364;
        case 0x412368u: goto label_412368;
        case 0x41236cu: goto label_41236c;
        case 0x412370u: goto label_412370;
        case 0x412374u: goto label_412374;
        case 0x412378u: goto label_412378;
        case 0x41237cu: goto label_41237c;
        case 0x412380u: goto label_412380;
        case 0x412384u: goto label_412384;
        case 0x412388u: goto label_412388;
        case 0x41238cu: goto label_41238c;
        case 0x412390u: goto label_412390;
        case 0x412394u: goto label_412394;
        case 0x412398u: goto label_412398;
        case 0x41239cu: goto label_41239c;
        case 0x4123a0u: goto label_4123a0;
        case 0x4123a4u: goto label_4123a4;
        case 0x4123a8u: goto label_4123a8;
        case 0x4123acu: goto label_4123ac;
        default: break;
    }

    ctx->pc = 0x4121b8u;

label_4121b8:
    // 0x4121b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4121b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4121bc:
    // 0x4121bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4121bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4121c0:
    // 0x4121c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4121c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4121c4:
    // 0x4121c4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4121c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4121c8:
    // 0x4121c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4121c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4121cc:
    // 0x4121cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4121ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4121d0:
    // 0x4121d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4121d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4121d4:
    // 0x4121d4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4121d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4121d8:
    // 0x4121d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4121d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4121dc:
    // 0x4121dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4121dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4121e0:
    // 0x4121e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4121e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4121e4:
    // 0x4121e4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_4121e8:
    if (ctx->pc == 0x4121E8u) {
        ctx->pc = 0x4121E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121E4u;
        // 0x4121e8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4121ECu;
        goto label_4121ec;
    }
    ctx->pc = 0x4121E4u;
    {
        const bool branch_taken_0x4121e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4121E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121E4u;
        // 0x4121e8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4121e4) {
            ctx->pc = 0x412248u;
            goto label_412248;
        }
    }
    ctx->pc = 0x4121ECu;
label_4121ec:
    // 0x4121ec: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x4121ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4121f0:
    // 0x4121f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4121f4:
    if (ctx->pc == 0x4121F4u) {
        ctx->pc = 0x4121F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121F0u;
        // 0x4121f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4121F8u;
        goto label_4121f8;
    }
    ctx->pc = 0x4121F0u;
    {
        const bool branch_taken_0x4121f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4121F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121F0u;
        // 0x4121f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4121f0) {
            ctx->pc = 0x412208u;
            goto label_412208;
        }
    }
    ctx->pc = 0x4121F8u;
label_4121f8:
    // 0x4121f8: 0x50620055  beql        $v1, $v0, . + 4 + (0x55 << 2)
label_4121fc:
    if (ctx->pc == 0x4121FCu) {
        ctx->pc = 0x4121FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121F8u;
        // 0x4121fc: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412200u;
        goto label_412200;
    }
    ctx->pc = 0x4121F8u;
    {
        const bool branch_taken_0x4121f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4121f8) {
            ctx->pc = 0x4121FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4121F8u;
            // 0x4121fc: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412350u;
            goto label_412350;
        }
    }
    ctx->pc = 0x412200u;
label_412200:
    // 0x412200: 0x1000005b  b           . + 4 + (0x5B << 2)
label_412204:
    if (ctx->pc == 0x412204u) {
        ctx->pc = 0x412204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412200u;
        // 0x412204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412208u;
        goto label_412208;
    }
    ctx->pc = 0x412200u;
    {
        const bool branch_taken_0x412200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412200u;
        // 0x412204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412200) {
            ctx->pc = 0x412370u;
            goto label_412370;
        }
    }
    ctx->pc = 0x412208u;
label_412208:
    // 0x412208: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_41220c:
    if (ctx->pc == 0x41220Cu) {
        ctx->pc = 0x41220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412208u;
        // 0x41220c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412210u;
        goto label_412210;
    }
    ctx->pc = 0x412208u;
    {
        const bool branch_taken_0x412208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412208u;
        // 0x41220c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412208) {
            ctx->pc = 0x41236Cu;
            goto label_41236c;
        }
    }
    ctx->pc = 0x412210u;
label_412210:
    // 0x412210: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x412210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_412214:
    // 0x412214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x412214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412218:
    // 0x412218: 0xc0f0b1c  jal         func_3C2C70
label_41221c:
    if (ctx->pc == 0x41221Cu) {
        ctx->pc = 0x41221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412218u;
        // 0x41221c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412220u;
        goto label_412220;
    }
    ctx->pc = 0x412218u;
    SET_GPR_U32(ctx, 31, 0x412220u);
    ctx->pc = 0x41221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412218u;
    // 0x41221c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C70u, 0x412218u, 0x412220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412220u;
label_412220:
    // 0x412220: 0x10520050  beq         $v0, $s2, . + 4 + (0x50 << 2)
label_412224:
    if (ctx->pc == 0x412224u) {
        ctx->pc = 0x412224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412220u;
        // 0x412224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412228u;
        goto label_412228;
    }
    ctx->pc = 0x412220u;
    {
        const bool branch_taken_0x412220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x412224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412220u;
        // 0x412224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412220) {
            ctx->pc = 0x412364u;
            goto label_412364;
        }
    }
    ctx->pc = 0x412228u;
label_412228:
    // 0x412228: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x412228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41222c:
    // 0x41222c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41222cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_412230:
    // 0x412230: 0xc1035f6  jal         func_40D7D8
label_412234:
    if (ctx->pc == 0x412234u) {
        ctx->pc = 0x412234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412230u;
        // 0x412234: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412238u;
        goto label_412238;
    }
    ctx->pc = 0x412230u;
    SET_GPR_U32(ctx, 31, 0x412238u);
    ctx->pc = 0x412234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412230u;
    // 0x412234: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412230u, 0x412238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412238u;
label_412238:
    // 0x412238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x412238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41223c:
    // 0x41223c: 0x10000051  b           . + 4 + (0x51 << 2)
label_412240:
    if (ctx->pc == 0x412240u) {
        ctx->pc = 0x412240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41223Cu;
        // 0x412240: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412244u;
        goto label_412244;
    }
    ctx->pc = 0x41223Cu;
    {
        const bool branch_taken_0x41223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41223Cu;
        // 0x412240: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41223c) {
            ctx->pc = 0x412384u;
            goto label_412384;
        }
    }
    ctx->pc = 0x412244u;
label_412244:
    // 0x412244: 0x0  nop
    ctx->pc = 0x412244u;
    // NOP
label_412248:
    // 0x412248: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x412248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_41224c:
    // 0x41224c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_412250:
    // 0x412250: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_412254:
    if (ctx->pc == 0x412254u) {
        ctx->pc = 0x412254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412250u;
        // 0x412254: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412258u;
        goto label_412258;
    }
    ctx->pc = 0x412250u;
    {
        const bool branch_taken_0x412250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x412250) {
            ctx->pc = 0x412254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412250u;
            // 0x412254: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4122ACu;
            goto label_4122ac;
        }
    }
    ctx->pc = 0x412258u;
label_412258:
    // 0x412258: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x412258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41225c:
    // 0x41225c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41225cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_412260:
    // 0x412260: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x412260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_412264:
    // 0x412264: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x412264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_412268:
    // 0x412268: 0x40f809  jalr        $v0
label_41226c:
    if (ctx->pc == 0x41226Cu) {
        ctx->pc = 0x41226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412268u;
        // 0x41226c: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412270u;
        goto label_412270;
    }
    ctx->pc = 0x412268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412270u);
        ctx->pc = 0x41226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412268u;
        // 0x41226c: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412268u, 0x412270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412270u;
label_412270:
    // 0x412270: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_412274:
    if (ctx->pc == 0x412274u) {
        ctx->pc = 0x412274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412270u;
        // 0x412274: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412278u;
        goto label_412278;
    }
    ctx->pc = 0x412270u;
    {
        const bool branch_taken_0x412270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412270u;
        // 0x412274: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412270) {
            ctx->pc = 0x4122A0u;
            goto label_4122a0;
        }
    }
    ctx->pc = 0x412278u;
label_412278:
    // 0x412278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x412278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41227c:
    // 0x41227c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41227cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_412280:
    // 0x412280: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x412280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_412284:
    // 0x412284: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x412284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_412288:
    // 0x412288: 0xc1035f6  jal         func_40D7D8
label_41228c:
    if (ctx->pc == 0x41228Cu) {
        ctx->pc = 0x41228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412288u;
        // 0x41228c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412290u;
        goto label_412290;
    }
    ctx->pc = 0x412288u;
    SET_GPR_U32(ctx, 31, 0x412290u);
    ctx->pc = 0x41228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412288u;
    // 0x41228c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412288u, 0x412290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412290u;
label_412290:
    // 0x412290: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x412290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_412294:
    // 0x412294: 0x1000003b  b           . + 4 + (0x3B << 2)
label_412298:
    if (ctx->pc == 0x412298u) {
        ctx->pc = 0x412298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412294u;
        // 0x412298: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41229Cu;
        goto label_41229c;
    }
    ctx->pc = 0x412294u;
    {
        const bool branch_taken_0x412294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412294u;
        // 0x412298: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412294) {
            ctx->pc = 0x412384u;
            goto label_412384;
        }
    }
    ctx->pc = 0x41229Cu;
label_41229c:
    // 0x41229c: 0x0  nop
    ctx->pc = 0x41229cu;
    // NOP
label_4122a0:
    // 0x4122a0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x4122a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4122a4:
    // 0x4122a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4122a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4122a8:
    // 0x4122a8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4122a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4122ac:
    // 0x4122ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4122acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4122b0:
    // 0x4122b0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x4122b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4122b4:
    // 0x4122b4: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x4122b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4122b8:
    // 0x4122b8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4122bc:
    if (ctx->pc == 0x4122BCu) {
        ctx->pc = 0x4122BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4122B8u;
        // 0x4122bc: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4122C0u;
        goto label_4122c0;
    }
    ctx->pc = 0x4122B8u;
    {
        const bool branch_taken_0x4122b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4122BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4122B8u;
        // 0x4122bc: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4122b8) {
            ctx->pc = 0x412324u;
            goto label_412324;
        }
    }
    ctx->pc = 0x4122C0u;
label_4122c0:
    // 0x4122c0: 0x24a40200  addiu       $a0, $a1, 0x200
    ctx->pc = 0x4122c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_4122c4:
    // 0x4122c4: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x4122c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4122c8:
    // 0x4122c8: 0x2458821  addu        $s1, $s2, $a1
    ctx->pc = 0x4122c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4122cc:
    // 0x4122cc: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x4122ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_4122d0:
    // 0x4122d0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4122d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4122d4:
    // 0x4122d4: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x4122d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_4122d8:
    // 0x4122d8: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x4122d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_4122dc:
    // 0x4122dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4122dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4122e0:
    // 0x4122e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4122e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4122e4:
    // 0x4122e4: 0x40f809  jalr        $v0
label_4122e8:
    if (ctx->pc == 0x4122E8u) {
        ctx->pc = 0x4122E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4122E4u;
        // 0x4122e8: 0x34c60404  ori         $a2, $a2, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4122ECu;
        goto label_4122ec;
    }
    ctx->pc = 0x4122E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4122ECu);
        ctx->pc = 0x4122E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4122E4u;
        // 0x4122e8: 0x34c60404  ori         $a2, $a2, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4122E4u, 0x4122ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4122ECu;
label_4122ec:
    // 0x4122ec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4122f0:
    if (ctx->pc == 0x4122F0u) {
        ctx->pc = 0x4122F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4122ECu;
        // 0x4122f0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4122F4u;
        goto label_4122f4;
    }
    ctx->pc = 0x4122ECu;
    {
        const bool branch_taken_0x4122ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4122ec) {
            ctx->pc = 0x4122F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4122ECu;
            // 0x4122f0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412320u;
            goto label_412320;
        }
    }
    ctx->pc = 0x4122F4u;
label_4122f4:
    // 0x4122f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4122f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4122f8:
    // 0x4122f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4122f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4122fc:
    // 0x4122fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4122fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_412300:
    // 0x412300: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x412300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_412304:
    // 0x412304: 0x2252823  subu        $a1, $s1, $a1
    ctx->pc = 0x412304u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_412308:
    // 0x412308: 0xc1035f6  jal         func_40D7D8
label_41230c:
    if (ctx->pc == 0x41230Cu) {
        ctx->pc = 0x41230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412308u;
        // 0x41230c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412310u;
        goto label_412310;
    }
    ctx->pc = 0x412308u;
    SET_GPR_U32(ctx, 31, 0x412310u);
    ctx->pc = 0x41230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412308u;
    // 0x41230c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412308u, 0x412310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412310u;
label_412310:
    // 0x412310: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x412310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_412314:
    // 0x412314: 0x1000001b  b           . + 4 + (0x1B << 2)
label_412318:
    if (ctx->pc == 0x412318u) {
        ctx->pc = 0x412318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412314u;
        // 0x412318: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41231Cu;
        goto label_41231c;
    }
    ctx->pc = 0x412314u;
    {
        const bool branch_taken_0x412314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412314u;
        // 0x412318: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412314) {
            ctx->pc = 0x412384u;
            goto label_412384;
        }
    }
    ctx->pc = 0x41231Cu;
label_41231c:
    // 0x41231c: 0x0  nop
    ctx->pc = 0x41231cu;
    // NOP
label_412320:
    // 0x412320: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x412320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_412324:
    // 0x412324: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x412324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_412328:
    // 0x412328: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x412328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41232c:
    // 0x41232c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412330:
    // 0x412330: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x412330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412334:
    // 0x412334: 0xc0bb778  jal         func_2EDDE0
label_412338:
    if (ctx->pc == 0x412338u) {
        ctx->pc = 0x412338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412334u;
        // 0x412338: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41233Cu;
        goto label_41233c;
    }
    ctx->pc = 0x412334u;
    SET_GPR_U32(ctx, 31, 0x41233Cu);
    ctx->pc = 0x412338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412334u;
    // 0x412338: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x412334u, 0x41233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41233Cu;
label_41233c:
    // 0x41233c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412340:
    // 0x412340: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x412340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412344:
    // 0x412344: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x412344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_412348:
    // 0x412348: 0x10000011  b           . + 4 + (0x11 << 2)
label_41234c:
    if (ctx->pc == 0x41234Cu) {
        ctx->pc = 0x41234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412348u;
        // 0x41234c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412350u;
        goto label_412350;
    }
    ctx->pc = 0x412348u;
    {
        const bool branch_taken_0x412348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412348u;
        // 0x41234c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412348) {
            ctx->pc = 0x412390u;
            goto label_412390;
        }
    }
    ctx->pc = 0x412350u;
label_412350:
    // 0x412350: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x412350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_412354:
    // 0x412354: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x412354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_412358:
    // 0x412358: 0x40f809  jalr        $v0
label_41235c:
    if (ctx->pc == 0x41235Cu) {
        ctx->pc = 0x41235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412358u;
        // 0x41235c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412360u;
        goto label_412360;
    }
    ctx->pc = 0x412358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412360u);
        ctx->pc = 0x41235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412358u;
        // 0x41235c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412358u, 0x412360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412360u;
label_412360:
    // 0x412360: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x412360u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_412364:
    // 0x412364: 0x1000000a  b           . + 4 + (0xA << 2)
label_412368:
    if (ctx->pc == 0x412368u) {
        ctx->pc = 0x412368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412364u;
        // 0x412368: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41236Cu;
        goto label_41236c;
    }
    ctx->pc = 0x412364u;
    {
        const bool branch_taken_0x412364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412364u;
        // 0x412368: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412364) {
            ctx->pc = 0x412390u;
            goto label_412390;
        }
    }
    ctx->pc = 0x41236Cu;
label_41236c:
    // 0x41236c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412370:
    // 0x412370: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x412370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_412374:
    // 0x412374: 0xc1035f6  jal         func_40D7D8
label_412378:
    if (ctx->pc == 0x412378u) {
        ctx->pc = 0x412378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412374u;
        // 0x412378: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41237Cu;
        goto label_41237c;
    }
    ctx->pc = 0x412374u;
    SET_GPR_U32(ctx, 31, 0x41237Cu);
    ctx->pc = 0x412378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412374u;
    // 0x412378: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412374u, 0x41237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41237Cu;
label_41237c:
    // 0x41237c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x41237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_412380:
    // 0x412380: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x412380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_412384:
    // 0x412384: 0xc103628  jal         func_40D8A0
label_412388:
    if (ctx->pc == 0x412388u) {
        ctx->pc = 0x41238Cu;
        goto label_41238c;
    }
    ctx->pc = 0x412384u;
    SET_GPR_U32(ctx, 31, 0x41238Cu);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x412384u, 0x41238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41238Cu;
label_41238c:
    // 0x41238c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41238cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412390:
    // 0x412390: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x412390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_412394:
    // 0x412394: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x412394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_412398:
    // 0x412398: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x412398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41239c:
    // 0x41239c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x41239cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4123a0:
    // 0x4123a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4123a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4123a4:
    // 0x4123a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4123a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4123a8:
    // 0x4123a8: 0x3e00008  jr          $ra
label_4123ac:
    if (ctx->pc == 0x4123ACu) {
        ctx->pc = 0x4123ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123A8u;
        // 0x4123ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4123B0u;
        goto label_fallthrough_0x4123a8;
    }
    ctx->pc = 0x4123A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4123ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123A8u;
        // 0x4123ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4123A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4123a8:
    ctx->pc = 0x4123B0u;
}
