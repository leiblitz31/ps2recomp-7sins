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

// Function: sub_002E8320
// Address: 0x2e8320 - 0x2e83d0
void sub_002E8320_0x2e8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8320_0x2e8320");
#endif

    switch (ctx->pc) {
        case 0x2e8320u: goto label_2e8320;
        case 0x2e8324u: goto label_2e8324;
        case 0x2e8328u: goto label_2e8328;
        case 0x2e832cu: goto label_2e832c;
        case 0x2e8330u: goto label_2e8330;
        case 0x2e8334u: goto label_2e8334;
        case 0x2e8338u: goto label_2e8338;
        case 0x2e833cu: goto label_2e833c;
        case 0x2e8340u: goto label_2e8340;
        case 0x2e8344u: goto label_2e8344;
        case 0x2e8348u: goto label_2e8348;
        case 0x2e834cu: goto label_2e834c;
        case 0x2e8350u: goto label_2e8350;
        case 0x2e8354u: goto label_2e8354;
        case 0x2e8358u: goto label_2e8358;
        case 0x2e835cu: goto label_2e835c;
        case 0x2e8360u: goto label_2e8360;
        case 0x2e8364u: goto label_2e8364;
        case 0x2e8368u: goto label_2e8368;
        case 0x2e836cu: goto label_2e836c;
        case 0x2e8370u: goto label_2e8370;
        case 0x2e8374u: goto label_2e8374;
        case 0x2e8378u: goto label_2e8378;
        case 0x2e837cu: goto label_2e837c;
        case 0x2e8380u: goto label_2e8380;
        case 0x2e8384u: goto label_2e8384;
        case 0x2e8388u: goto label_2e8388;
        case 0x2e838cu: goto label_2e838c;
        case 0x2e8390u: goto label_2e8390;
        case 0x2e8394u: goto label_2e8394;
        case 0x2e8398u: goto label_2e8398;
        case 0x2e839cu: goto label_2e839c;
        case 0x2e83a0u: goto label_2e83a0;
        case 0x2e83a4u: goto label_2e83a4;
        case 0x2e83a8u: goto label_2e83a8;
        case 0x2e83acu: goto label_2e83ac;
        case 0x2e83b0u: goto label_2e83b0;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83b8u: goto label_2e83b8;
        case 0x2e83bcu: goto label_2e83bc;
        case 0x2e83c0u: goto label_2e83c0;
        case 0x2e83c4u: goto label_2e83c4;
        case 0x2e83c8u: goto label_2e83c8;
        case 0x2e83ccu: goto label_2e83cc;
        default: break;
    }

    ctx->pc = 0x2e8320u;

label_2e8320:
    // 0x2e8320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e8324:
    // 0x2e8324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e8328:
    // 0x2e8328: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2e8328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2e832c:
    // 0x2e832c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e8330:
    // 0x2e8330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8334:
    // 0x2e8334: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_2e8338:
    if (ctx->pc == 0x2E8338u) {
        ctx->pc = 0x2E8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8334u;
        // 0x2e8338: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E833Cu;
        goto label_2e833c;
    }
    ctx->pc = 0x2E8334u;
    {
        const bool branch_taken_0x2e8334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8334u;
        // 0x2e8338: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8334) {
            ctx->pc = 0x2E8360u;
            goto label_2e8360;
        }
    }
    ctx->pc = 0x2E833Cu;
label_2e833c:
    // 0x2e833c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e8340:
    if (ctx->pc == 0x2E8340u) {
        ctx->pc = 0x2E8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E833Cu;
        // 0x2e8340: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8344u;
        goto label_2e8344;
    }
    ctx->pc = 0x2E833Cu;
    {
        const bool branch_taken_0x2e833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E833Cu;
        // 0x2e8340: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e833c) {
            ctx->pc = 0x2E8360u;
            goto label_2e8360;
        }
    }
    ctx->pc = 0x2E8344u;
label_2e8344:
    // 0x2e8344: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2e8344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2e8348:
    // 0x2e8348: 0x8c42e780  lw          $v0, -0x1880($v0)
    ctx->pc = 0x2e8348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961024)));
label_2e834c:
    // 0x2e834c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2e8350:
    if (ctx->pc == 0x2E8350u) {
        ctx->pc = 0x2E8354u;
        goto label_2e8354;
    }
    ctx->pc = 0x2E834Cu;
    {
        const bool branch_taken_0x2e834c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e834c) {
            ctx->pc = 0x2E8378u;
            goto label_2e8378;
        }
    }
    ctx->pc = 0x2E8354u;
label_2e8354:
    // 0x2e8354: 0x40f809  jalr        $v0
label_2e8358:
    if (ctx->pc == 0x2E8358u) {
        ctx->pc = 0x2E835Cu;
        goto label_2e835c;
    }
    ctx->pc = 0x2E8354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E835Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8354u, 0x2E835Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E835Cu;
label_2e835c:
    // 0x2e835c: 0x0  nop
    ctx->pc = 0x2e835cu;
    // NOP
label_2e8360:
    // 0x2e8360: 0xc0bb484  jal         func_2ED210
label_2e8364:
    if (ctx->pc == 0x2E8364u) {
        ctx->pc = 0x2E8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8360u;
        // 0x2e8364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8368u;
        goto label_2e8368;
    }
    ctx->pc = 0x2E8360u;
    SET_GPR_U32(ctx, 31, 0x2E8368u);
    ctx->pc = 0x2E8364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8360u;
    // 0x2e8364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED210u, 0x2E8360u, 0x2E8368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8368u;
label_2e8368:
    // 0x2e8368: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_2e836c:
    if (ctx->pc == 0x2E836Cu) {
        ctx->pc = 0x2E8370u;
        goto label_2e8370;
    }
    ctx->pc = 0x2E8368u;
    {
        const bool branch_taken_0x2e8368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8368) {
            ctx->pc = 0x2E8344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8344;
        }
    }
    ctx->pc = 0x2E8370u;
label_2e8370:
    // 0x2e8370: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e8374:
    if (ctx->pc == 0x2E8374u) {
        ctx->pc = 0x2E8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8370u;
        // 0x2e8374: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8378u;
        goto label_2e8378;
    }
    ctx->pc = 0x2E8370u;
    {
        const bool branch_taken_0x2e8370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8370u;
        // 0x2e8374: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8370) {
            ctx->pc = 0x2E83B8u;
            goto label_2e83b8;
        }
    }
    ctx->pc = 0x2E8378u;
label_2e8378:
    // 0x2e8378: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2e8378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2e837c:
    // 0x2e837c: 0x8042e788  lb          $v0, -0x1878($v0)
    ctx->pc = 0x2e837cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961032)));
label_2e8380:
    // 0x2e8380: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e8384:
    if (ctx->pc == 0x2E8384u) {
        ctx->pc = 0x2E8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8380u;
        // 0x2e8384: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8388u;
        goto label_2e8388;
    }
    ctx->pc = 0x2E8380u;
    {
        const bool branch_taken_0x2e8380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8380u;
        // 0x2e8384: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8380) {
            ctx->pc = 0x2E83B0u;
            goto label_2e83b0;
        }
    }
    ctx->pc = 0x2E8388u;
label_2e8388:
    // 0x2e8388: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e8388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2e838c:
    // 0x2e838c: 0x24426a80  addiu       $v0, $v0, 0x6A80
    ctx->pc = 0x2e838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27264));
label_2e8390:
    // 0x2e8390: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2e8390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_2e8394:
    // 0x2e8394: 0x24848dc0  addiu       $a0, $a0, -0x7240
    ctx->pc = 0x2e8394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938048));
label_2e8398:
    // 0x2e8398: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x2e8398u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
label_2e839c:
    // 0x2e839c: 0x27c5003c  addiu       $a1, $fp, 0x3C
    ctx->pc = 0x2e839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
label_2e83a0:
    // 0x2e83a0: 0xc0ba7bc  jal         func_2E9EF0
label_2e83a4:
    if (ctx->pc == 0x2E83A4u) {
        ctx->pc = 0x2E83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83A0u;
        // 0x2e83a4: 0x24c682b0  addiu       $a2, $a2, -0x7D50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83A8u;
        goto label_2e83a8;
    }
    ctx->pc = 0x2E83A0u;
    SET_GPR_U32(ctx, 31, 0x2E83A8u);
    ctx->pc = 0x2E83A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83A0u;
    // 0x2e83a4: 0x24c682b0  addiu       $a2, $a2, -0x7D50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9EF0u, 0x2E83A0u, 0x2E83A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83A8u;
label_2e83a8:
    // 0x2e83a8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_2e83ac:
    if (ctx->pc == 0x2E83ACu) {
        ctx->pc = 0x2E83B0u;
        goto label_2e83b0;
    }
    ctx->pc = 0x2E83A8u;
    {
        const bool branch_taken_0x2e83a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e83a8) {
            ctx->pc = 0x2E8360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8360;
        }
    }
    ctx->pc = 0x2E83B0u;
label_2e83b0:
    // 0x2e83b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e83b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e83b4:
    // 0x2e83b4: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x2e83b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_2e83b8:
    // 0x2e83b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e83b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e83bc:
    // 0x2e83bc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2e83bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e83c0:
    // 0x2e83c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e83c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e83c4:
    // 0x2e83c4: 0x3e00008  jr          $ra
label_2e83c8:
    if (ctx->pc == 0x2E83C8u) {
        ctx->pc = 0x2E83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83C4u;
        // 0x2e83c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83CCu;
        goto label_2e83cc;
    }
    ctx->pc = 0x2E83C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83C4u;
        // 0x2e83c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E83C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E83CCu;
label_2e83cc:
    // 0x2e83cc: 0x0  nop
    ctx->pc = 0x2e83ccu;
    // NOP
    ctx->pc = 0x2e83d0u;
}
