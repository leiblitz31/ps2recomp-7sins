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

// Function: sub_00246230
// Address: 0x246230 - 0x246440
void sub_00246230_0x246230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246230_0x246230");
#endif

    switch (ctx->pc) {
        case 0x246274u: goto label_246274;
        default: break;
    }

    ctx->pc = 0x246230u;

    // 0x246230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x246230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x246234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x246238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x246238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24623c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24623cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x246240: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x246240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x246244: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x246244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246248: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24624c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x24624cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246250: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x246250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x246254: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x246254u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x246258: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x246258u;
    {
        const bool branch_taken_0x246258 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x246258) {
            ctx->pc = 0x246268u;
            goto label_246268;
        }
    }
    ctx->pc = 0x246260u;
    // 0x246260: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x246260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x246264: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x246264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_246268:
    // 0x246268: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x246268u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x24626c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x24626Cu;
    {
        const bool branch_taken_0x24626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24626c) {
            ctx->pc = 0x246338u;
            goto label_246338;
        }
    }
    ctx->pc = 0x246274u;
label_246274:
    // 0x246274: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246278: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24627c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246280: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x246280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246284: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246284u;
    {
        const bool branch_taken_0x246284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246284) {
            ctx->pc = 0x246298u;
            goto label_246298;
        }
    }
    ctx->pc = 0x24628Cu;
    // 0x24628c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246290: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x246290u;
    {
        const bool branch_taken_0x246290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246290) {
            ctx->pc = 0x24642Cu;
            goto label_24642c;
        }
    }
    ctx->pc = 0x246298u;
label_246298:
    // 0x246298: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24629c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2462a0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2462a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2462a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2462a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2462a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2462a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2462ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2462acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2462b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2462b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2462b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2462B4u;
    {
        const bool branch_taken_0x2462b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2462b4) {
            ctx->pc = 0x2462C8u;
            goto label_2462c8;
        }
    }
    ctx->pc = 0x2462BCu;
    // 0x2462bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2462bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2462c0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2462C0u;
    {
        const bool branch_taken_0x2462c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2462c0) {
            ctx->pc = 0x24642Cu;
            goto label_24642c;
        }
    }
    ctx->pc = 0x2462C8u;
label_2462c8:
    // 0x2462c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2462c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2462cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2462ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2462d0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2462d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2462d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2462d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2462d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2462d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2462dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2462dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2462e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2462e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2462e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2462E4u;
    {
        const bool branch_taken_0x2462e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2462e4) {
            ctx->pc = 0x2462F8u;
            goto label_2462f8;
        }
    }
    ctx->pc = 0x2462ECu;
    // 0x2462ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2462ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2462f0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2462F0u;
    {
        const bool branch_taken_0x2462f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2462f0) {
            ctx->pc = 0x24642Cu;
            goto label_24642c;
        }
    }
    ctx->pc = 0x2462F8u;
label_2462f8:
    // 0x2462f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2462f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2462fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2462fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x246300: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x246300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x246304: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24630c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246310: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x246310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246314: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246314u;
    {
        const bool branch_taken_0x246314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246314) {
            ctx->pc = 0x246328u;
            goto label_246328;
        }
    }
    ctx->pc = 0x24631Cu;
    // 0x24631c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246320: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x246320u;
    {
        const bool branch_taken_0x246320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246320) {
            ctx->pc = 0x24642Cu;
            goto label_24642c;
        }
    }
    ctx->pc = 0x246328u;
label_246328:
    // 0x246328: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24632c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x246330: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x246330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x246334: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x246334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_246338:
    // 0x246338: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x246338u;
    {
        const bool branch_taken_0x246338 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x246338) {
            ctx->pc = 0x246274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246274;
        }
    }
    ctx->pc = 0x246340u;
    // 0x246340: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x246340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246344: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246348: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x246348u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24634c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x246350: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x246350u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x246354: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246354u;
    {
        const bool branch_taken_0x246354 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x246354) {
            ctx->pc = 0x246364u;
            goto label_246364;
        }
    }
    ctx->pc = 0x24635Cu;
    // 0x24635c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x24635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x246360: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x246360u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_246364:
    // 0x246364: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x246364u;
    {
        const bool branch_taken_0x246364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246364) {
            ctx->pc = 0x246428u;
            goto label_246428;
        }
    }
    ctx->pc = 0x24636Cu;
    // 0x24636c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246370: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x246370u;
    {
        const bool branch_taken_0x246370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246370) {
            ctx->pc = 0x2463F8u;
            goto label_2463f8;
        }
    }
    ctx->pc = 0x246378u;
    // 0x246378: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x246378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24637c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24637Cu;
    {
        const bool branch_taken_0x24637c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24637c) {
            ctx->pc = 0x2463C8u;
            goto label_2463c8;
        }
    }
    ctx->pc = 0x246384u;
    // 0x246384: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x246384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246388: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246388u;
    {
        const bool branch_taken_0x246388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246388) {
            ctx->pc = 0x246398u;
            goto label_246398;
        }
    }
    ctx->pc = 0x246390u;
    // 0x246390: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x246390u;
    {
        const bool branch_taken_0x246390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246390) {
            ctx->pc = 0x246428u;
            goto label_246428;
        }
    }
    ctx->pc = 0x246398u;
label_246398:
    // 0x246398: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24639c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2463a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2463a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2463a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2463a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2463a8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2463A8u;
    {
        const bool branch_taken_0x2463a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2463a8) {
            ctx->pc = 0x2463BCu;
            goto label_2463bc;
        }
    }
    ctx->pc = 0x2463B0u;
    // 0x2463b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2463b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2463b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2463B4u;
    {
        const bool branch_taken_0x2463b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463b4) {
            ctx->pc = 0x24642Cu;
            goto label_24642c;
        }
    }
    ctx->pc = 0x2463BCu;
label_2463bc:
    // 0x2463bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2463bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2463c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2463c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2463c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2463c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2463c8:
    // 0x2463c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2463cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2463d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2463d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2463d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2463d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2463d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2463D8u;
    {
        const bool branch_taken_0x2463d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2463d8) {
            ctx->pc = 0x2463ECu;
            goto label_2463ec;
        }
    }
    ctx->pc = 0x2463E0u;
    // 0x2463e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2463e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2463E4u;
    {
        const bool branch_taken_0x2463e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463e4) {
            ctx->pc = 0x24642Cu;
            goto label_24642c;
        }
    }
    ctx->pc = 0x2463ECu;
label_2463ec:
    // 0x2463ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2463ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2463f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2463f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2463f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2463f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2463f8:
    // 0x2463f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2463f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2463fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2463fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246400: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x246400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246404: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x246404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246408: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246408u;
    {
        const bool branch_taken_0x246408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246408) {
            ctx->pc = 0x24641Cu;
            goto label_24641c;
        }
    }
    ctx->pc = 0x246410u;
    // 0x246410: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246414: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246414u;
    {
        const bool branch_taken_0x246414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246414) {
            ctx->pc = 0x24642Cu;
            goto label_24642c;
        }
    }
    ctx->pc = 0x24641Cu;
label_24641c:
    // 0x24641c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246420: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x246420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x246424: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x246424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_246428:
    // 0x246428: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x246428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24642c:
    // 0x24642c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24642cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246430: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x246434: 0x3e00008  jr          $ra
    ctx->pc = 0x246434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24643Cu;
    // 0x24643c: 0x0  nop
    ctx->pc = 0x24643cu;
    // NOP
    ctx->pc = 0x246440u;
}
