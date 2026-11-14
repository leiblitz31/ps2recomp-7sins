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

// Function: sub_00354300
// Address: 0x354300 - 0x354568
void sub_00354300_0x354300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354300_0x354300");
#endif

    switch (ctx->pc) {
        case 0x354340u: goto label_354340;
        default: break;
    }

    ctx->pc = 0x354300u;

    // 0x354300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354304: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x354304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35430c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x35430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x354310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x354310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354314: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x354314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x354318: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x354318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x35431c: 0x8cc3004c  lw          $v1, 0x4C($a2)
    ctx->pc = 0x35431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x354320: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x354320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x354324: 0x600013  mtlo        $v1
    ctx->pc = 0x354324u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x354328: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x354328u;
    {
        const bool branch_taken_0x354328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354328u;
        // 0x35432c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354328) {
            ctx->pc = 0x354348u;
            goto label_354348;
        }
    }
    ctx->pc = 0x354330u;
    // 0x354330: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x354330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354334: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x354334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x354338: 0xc0d4298  jal         func_350A60
    ctx->pc = 0x354338u;
    SET_GPR_U32(ctx, 31, 0x354340u);
    ctx->pc = 0x35433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354338u;
    // 0x35433c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A60u, 0x354338u, 0x354340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354340u;
label_354340:
    // 0x354340: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x354340u;
    {
        const bool branch_taken_0x354340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354340u;
        // 0x354344: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354340) {
            ctx->pc = 0x35455Cu;
            goto label_35455c;
        }
    }
    ctx->pc = 0x354348u;
label_354348:
    // 0x354348: 0x2012  mflo        $a0
    ctx->pc = 0x354348u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x35434c: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x35434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x354350: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x354350u;
    {
        const bool branch_taken_0x354350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354350u;
        // 0x354354: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354350) {
            ctx->pc = 0x354488u;
            goto label_354488;
        }
    }
    ctx->pc = 0x354358u;
    // 0x354358: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x354358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x35435c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x35435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x354360: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x354360u;
    {
        const bool branch_taken_0x354360 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x354360) {
            ctx->pc = 0x354364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354360u;
            // 0x354364: 0x8c8300e8  lw          $v1, 0xE8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354368u;
            goto label_354368;
        }
    }
    ctx->pc = 0x354368u;
label_354368:
    // 0x354368: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x354368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35436c: 0x10a20032  beq         $a1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x35436Cu;
    {
        const bool branch_taken_0x35436c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x354370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35436Cu;
        // 0x354370: 0x2ca20011  sltiu       $v0, $a1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35436c) {
            ctx->pc = 0x354438u;
            goto label_354438;
        }
    }
    ctx->pc = 0x354374u;
    // 0x354374: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x354374u;
    {
        const bool branch_taken_0x354374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354374u;
        // 0x354378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354374) {
            ctx->pc = 0x3543B8u;
            goto label_3543b8;
        }
    }
    ctx->pc = 0x35437Cu;
    // 0x35437c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x35437Cu;
    {
        const bool branch_taken_0x35437c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x354380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35437Cu;
        // 0x354380: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35437c) {
            ctx->pc = 0x354408u;
            goto label_354408;
        }
    }
    ctx->pc = 0x354384u;
    // 0x354384: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x354384u;
    {
        const bool branch_taken_0x354384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354384u;
        // 0x354388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354384) {
            ctx->pc = 0x35439Cu;
            goto label_35439c;
        }
    }
    ctx->pc = 0x35438Cu;
    // 0x35438c: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35438Cu;
    {
        const bool branch_taken_0x35438c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x354390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35438Cu;
        // 0x354390: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35438c) {
            ctx->pc = 0x3543F8u;
            goto label_3543f8;
        }
    }
    ctx->pc = 0x354394u;
    // 0x354394: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x354394u;
    {
        const bool branch_taken_0x354394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354394u;
        // 0x354398: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354394) {
            ctx->pc = 0x354560u;
            goto label_354560;
        }
    }
    ctx->pc = 0x35439Cu;
label_35439c:
    // 0x35439c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3543a0: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3543A0u;
    {
        const bool branch_taken_0x3543a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3543A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543A0u;
        // 0x3543a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543a0) {
            ctx->pc = 0x354418u;
            goto label_354418;
        }
    }
    ctx->pc = 0x3543A8u;
    // 0x3543a8: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3543A8u;
    {
        const bool branch_taken_0x3543a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3543ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543A8u;
        // 0x3543ac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543a8) {
            ctx->pc = 0x354428u;
            goto label_354428;
        }
    }
    ctx->pc = 0x3543B0u;
    // 0x3543b0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3543B0u;
    {
        const bool branch_taken_0x3543b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543B0u;
        // 0x3543b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543b0) {
            ctx->pc = 0x354560u;
            goto label_354560;
        }
    }
    ctx->pc = 0x3543B8u;
label_3543b8:
    // 0x3543b8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3543b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3543bc: 0x10a20026  beq         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3543BCu;
    {
        const bool branch_taken_0x3543bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3543C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543BCu;
        // 0x3543c0: 0x2ca20041  sltiu       $v0, $a1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543bc) {
            ctx->pc = 0x354458u;
            goto label_354458;
        }
    }
    ctx->pc = 0x3543C4u;
    // 0x3543c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3543C4u;
    {
        const bool branch_taken_0x3543c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543C4u;
        // 0x3543c8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543c4) {
            ctx->pc = 0x3543DCu;
            goto label_3543dc;
        }
    }
    ctx->pc = 0x3543CCu;
    // 0x3543cc: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3543CCu;
    {
        const bool branch_taken_0x3543cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3543D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543CCu;
        // 0x3543d0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543cc) {
            ctx->pc = 0x354448u;
            goto label_354448;
        }
    }
    ctx->pc = 0x3543D4u;
    // 0x3543d4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x3543D4u;
    {
        const bool branch_taken_0x3543d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543D4u;
        // 0x3543d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543d4) {
            ctx->pc = 0x354560u;
            goto label_354560;
        }
    }
    ctx->pc = 0x3543DCu;
label_3543dc:
    // 0x3543dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3543dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3543e0: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3543E0u;
    {
        const bool branch_taken_0x3543e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3543E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543E0u;
        // 0x3543e4: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543e0) {
            ctx->pc = 0x354468u;
            goto label_354468;
        }
    }
    ctx->pc = 0x3543E8u;
    // 0x3543e8: 0x10a20023  beq         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3543E8u;
    {
        const bool branch_taken_0x3543e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3543ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543E8u;
        // 0x3543ec: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543e8) {
            ctx->pc = 0x354478u;
            goto label_354478;
        }
    }
    ctx->pc = 0x3543F0u;
    // 0x3543f0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3543F0u;
    {
        const bool branch_taken_0x3543f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543F0u;
        // 0x3543f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543f0) {
            ctx->pc = 0x354560u;
            goto label_354560;
        }
    }
    ctx->pc = 0x3543F8u;
label_3543f8:
    // 0x3543f8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x3543f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3543fc: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x3543fcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354400: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x354400u;
    {
        const bool branch_taken_0x354400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354400u;
        // 0x354404: 0x8c470140  lw          $a3, 0x140($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354400) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354408u;
label_354408:
    // 0x354408: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x35440c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x35440cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354410: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x354410u;
    {
        const bool branch_taken_0x354410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354410u;
        // 0x354414: 0x8c470150  lw          $a3, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354410) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354418u;
label_354418:
    // 0x354418: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x35441c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x35441cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354420: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x354420u;
    {
        const bool branch_taken_0x354420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354420u;
        // 0x354424: 0x8c47014c  lw          $a3, 0x14C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354420) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354428u;
label_354428:
    // 0x354428: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x35442c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x35442cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354430: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x354430u;
    {
        const bool branch_taken_0x354430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354430u;
        // 0x354434: 0x8c470144  lw          $a3, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354430) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354438u;
label_354438:
    // 0x354438: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x35443c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x35443cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354440: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x354440u;
    {
        const bool branch_taken_0x354440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354440u;
        // 0x354444: 0x8c470148  lw          $a3, 0x148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354440) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354448u;
label_354448:
    // 0x354448: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x35444c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x35444cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354450: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x354450u;
    {
        const bool branch_taken_0x354450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354450u;
        // 0x354454: 0x8c470158  lw          $a3, 0x158($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354450) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354458u;
label_354458:
    // 0x354458: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x35445c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x35445cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354460: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x354460u;
    {
        const bool branch_taken_0x354460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354460u;
        // 0x354464: 0x8c470154  lw          $a3, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354460) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354468u;
label_354468:
    // 0x354468: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x35446c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x35446cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354470: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x354470u;
    {
        const bool branch_taken_0x354470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354470u;
        // 0x354474: 0x8c47015c  lw          $a3, 0x15C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354470) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354478u;
label_354478:
    // 0x354478: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x35447c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x35447cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354480: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x354480u;
    {
        const bool branch_taken_0x354480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354480u;
        // 0x354484: 0x8c470160  lw          $a3, 0x160($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354480) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354488u;
label_354488:
    // 0x354488: 0x10a2002a  beq         $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x354488u;
    {
        const bool branch_taken_0x354488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354488u;
        // 0x35448c: 0x2ca20011  sltiu       $v0, $a1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x354488) {
            ctx->pc = 0x354534u;
            goto label_354534;
        }
    }
    ctx->pc = 0x354490u;
    // 0x354490: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x354490u;
    {
        const bool branch_taken_0x354490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354490u;
        // 0x354494: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354490) {
            ctx->pc = 0x3544D4u;
            goto label_3544d4;
        }
    }
    ctx->pc = 0x354498u;
    // 0x354498: 0x10a20020  beq         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x354498u;
    {
        const bool branch_taken_0x354498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354498u;
        // 0x35449c: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x354498) {
            ctx->pc = 0x35451Cu;
            goto label_35451c;
        }
    }
    ctx->pc = 0x3544A0u;
    // 0x3544a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3544A0u;
    {
        const bool branch_taken_0x3544a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544A0u;
        // 0x3544a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544a0) {
            ctx->pc = 0x3544B8u;
            goto label_3544b8;
        }
    }
    ctx->pc = 0x3544A8u;
    // 0x3544a8: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3544A8u;
    {
        const bool branch_taken_0x3544a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3544ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544A8u;
        // 0x3544ac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544a8) {
            ctx->pc = 0x354514u;
            goto label_354514;
        }
    }
    ctx->pc = 0x3544B0u;
    // 0x3544b0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3544B0u;
    {
        const bool branch_taken_0x3544b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544B0u;
        // 0x3544b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544b0) {
            ctx->pc = 0x354560u;
            goto label_354560;
        }
    }
    ctx->pc = 0x3544B8u;
label_3544b8:
    // 0x3544b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3544b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3544bc: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3544BCu;
    {
        const bool branch_taken_0x3544bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3544C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544BCu;
        // 0x3544c0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544bc) {
            ctx->pc = 0x354524u;
            goto label_354524;
        }
    }
    ctx->pc = 0x3544C4u;
    // 0x3544c4: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3544C4u;
    {
        const bool branch_taken_0x3544c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3544C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544C4u;
        // 0x3544c8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544c4) {
            ctx->pc = 0x35452Cu;
            goto label_35452c;
        }
    }
    ctx->pc = 0x3544CCu;
    // 0x3544cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3544CCu;
    {
        const bool branch_taken_0x3544cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544CCu;
        // 0x3544d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544cc) {
            ctx->pc = 0x354560u;
            goto label_354560;
        }
    }
    ctx->pc = 0x3544D4u;
label_3544d4:
    // 0x3544d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3544d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3544d8: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3544D8u;
    {
        const bool branch_taken_0x3544d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3544DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544D8u;
        // 0x3544dc: 0x2ca20041  sltiu       $v0, $a1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544d8) {
            ctx->pc = 0x354544u;
            goto label_354544;
        }
    }
    ctx->pc = 0x3544E0u;
    // 0x3544e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3544E0u;
    {
        const bool branch_taken_0x3544e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544E0u;
        // 0x3544e4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544e0) {
            ctx->pc = 0x3544F8u;
            goto label_3544f8;
        }
    }
    ctx->pc = 0x3544E8u;
    // 0x3544e8: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3544E8u;
    {
        const bool branch_taken_0x3544e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3544ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544E8u;
        // 0x3544ec: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544e8) {
            ctx->pc = 0x35453Cu;
            goto label_35453c;
        }
    }
    ctx->pc = 0x3544F0u;
    // 0x3544f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3544F0u;
    {
        const bool branch_taken_0x3544f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544F0u;
        // 0x3544f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544f0) {
            ctx->pc = 0x354560u;
            goto label_354560;
        }
    }
    ctx->pc = 0x3544F8u;
label_3544f8:
    // 0x3544f8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3544f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3544fc: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3544FCu;
    {
        const bool branch_taken_0x3544fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x354500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544FCu;
        // 0x354500: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544fc) {
            ctx->pc = 0x35454Cu;
            goto label_35454c;
        }
    }
    ctx->pc = 0x354504u;
    // 0x354504: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x354504u;
    {
        const bool branch_taken_0x354504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x354508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354504u;
        // 0x354508: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354504) {
            ctx->pc = 0x354554u;
            goto label_354554;
        }
    }
    ctx->pc = 0x35450Cu;
    // 0x35450c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x35450Cu;
    {
        const bool branch_taken_0x35450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35450Cu;
        // 0x354510: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35450c) {
            ctx->pc = 0x354560u;
            goto label_354560;
        }
    }
    ctx->pc = 0x354514u;
label_354514:
    // 0x354514: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x354514u;
    {
        const bool branch_taken_0x354514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354514u;
        // 0x354518: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354514) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x35451Cu;
label_35451c:
    // 0x35451c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35451Cu;
    {
        const bool branch_taken_0x35451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35451Cu;
        // 0x354520: 0x8cc70024  lw          $a3, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35451c) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354524u;
label_354524:
    // 0x354524: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x354524u;
    {
        const bool branch_taken_0x354524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354524u;
        // 0x354528: 0x8cc7001c  lw          $a3, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354524) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x35452Cu;
label_35452c:
    // 0x35452c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35452Cu;
    {
        const bool branch_taken_0x35452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35452Cu;
        // 0x354530: 0x8cc7000c  lw          $a3, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35452c) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354534u;
label_354534:
    // 0x354534: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x354534u;
    {
        const bool branch_taken_0x354534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354534u;
        // 0x354538: 0x8cc70014  lw          $a3, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354534) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x35453Cu;
label_35453c:
    // 0x35453c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35453Cu;
    {
        const bool branch_taken_0x35453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35453Cu;
        // 0x354540: 0x8cc70034  lw          $a3, 0x34($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35453c) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354544u;
label_354544:
    // 0x354544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354544u;
    {
        const bool branch_taken_0x354544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354544u;
        // 0x354548: 0x8cc7002c  lw          $a3, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354544) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x35454Cu;
label_35454c:
    // 0x35454c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35454Cu;
    {
        const bool branch_taken_0x35454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35454Cu;
        // 0x354550: 0x8cc7003c  lw          $a3, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35454c) {
            ctx->pc = 0x354558u;
            goto label_354558;
        }
    }
    ctx->pc = 0x354554u;
label_354554:
    // 0x354554: 0x8cc70044  lw          $a3, 0x44($a2)
    ctx->pc = 0x354554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_354558:
    // 0x354558: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x354558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_35455c:
    // 0x35455c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35455cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_354560:
    // 0x354560: 0x3e00008  jr          $ra
    ctx->pc = 0x354560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354560u;
        // 0x354564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354568u;
}
