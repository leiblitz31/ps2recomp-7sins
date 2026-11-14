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

// Function: sub_003AB320
// Address: 0x3ab320 - 0x3ab430
void sub_003AB320_0x3ab320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB320_0x3ab320");
#endif

    switch (ctx->pc) {
        case 0x3ab370u: goto label_3ab370;
        case 0x3ab380u: goto label_3ab380;
        case 0x3ab394u: goto label_3ab394;
        default: break;
    }

    ctx->pc = 0x3ab320u;

    // 0x3ab320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ab320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ab324: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ab324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ab328: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ab328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ab32c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ab32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab330: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ab330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ab334: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ab334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ab338: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ab338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3ab33c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB33Cu;
    {
        const bool branch_taken_0x3ab33c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB33Cu;
        // 0x3ab340: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab33c) {
            ctx->pc = 0x3AB34Cu;
            goto label_3ab34c;
        }
    }
    ctx->pc = 0x3AB344u;
    // 0x3ab344: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3AB344u;
    {
        const bool branch_taken_0x3ab344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB344u;
        // 0x3ab348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab344) {
            ctx->pc = 0x3AB40Cu;
            goto label_3ab40c;
        }
    }
    ctx->pc = 0x3AB34Cu;
label_3ab34c:
    // 0x3ab34c: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x3ab34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x3ab350: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab354: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3ab354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3ab358: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AB358u;
    {
        const bool branch_taken_0x3ab358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB358u;
        // 0x3ab35c: 0x24540124  addiu       $s4, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab358) {
            ctx->pc = 0x3AB3C0u;
            goto label_3ab3c0;
        }
    }
    ctx->pc = 0x3AB360u;
    // 0x3ab360: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x3ab360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x3ab364: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ab364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab368: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AB368u;
    SET_GPR_U32(ctx, 31, 0x3AB370u);
    ctx->pc = 0x3AB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB368u;
    // 0x3ab36c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AB368u, 0x3AB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB370u;
label_3ab370:
    // 0x3ab370: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ab370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab374: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x3ab374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x3ab378: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3AB378u;
    {
        const bool branch_taken_0x3ab378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB378u;
        // 0x3ab37c: 0x24720018  addiu       $s2, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab378) {
            ctx->pc = 0x3AB3B8u;
            goto label_3ab3b8;
        }
    }
    ctx->pc = 0x3AB380u;
label_3ab380:
    // 0x3ab380: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ab380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ab384: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB384u;
    {
        const bool branch_taken_0x3ab384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB384u;
        // 0x3ab388: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab384) {
            ctx->pc = 0x3AB3A0u;
            goto label_3ab3a0;
        }
    }
    ctx->pc = 0x3AB38Cu;
    // 0x3ab38c: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3AB38Cu;
    SET_GPR_U32(ctx, 31, 0x3AB394u);
    ctx->pc = 0x3AB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB38Cu;
    // 0x3ab390: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3AB38Cu, 0x3AB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB394u;
label_3ab394:
    // 0x3ab394: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x3ab394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3ab398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AB398u;
    {
        const bool branch_taken_0x3ab398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB398u;
        // 0x3ab39c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab398) {
            ctx->pc = 0x3AB3A4u;
            goto label_3ab3a4;
        }
    }
    ctx->pc = 0x3AB3A0u;
label_3ab3a0:
    // 0x3ab3a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3ab3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3ab3a4:
    // 0x3ab3a4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x3ab3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x3ab3a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ab3a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ab3ac: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3ab3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ab3b0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3AB3B0u;
    {
        const bool branch_taken_0x3ab3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3B0u;
        // 0x3ab3b4: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3b0) {
            ctx->pc = 0x3AB380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab380;
        }
    }
    ctx->pc = 0x3AB3B8u;
label_3ab3b8:
    // 0x3ab3b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AB3B8u;
    {
        const bool branch_taken_0x3ab3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3B8u;
        // 0x3ab3bc: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3b8) {
            ctx->pc = 0x3AB408u;
            goto label_3ab408;
        }
    }
    ctx->pc = 0x3AB3C0u;
label_3ab3c0:
    // 0x3ab3c0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3ab3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3ab3c4: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x3ab3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3ab3c8: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x3ab3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ab3cc: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x3ab3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ab3d0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3ab3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3ab3d4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3ab3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3ab3d8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x3ab3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3ab3dc: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x3ab3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3ab3e0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3ab3e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x3ab3e4: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x3ab3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3ab3e8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x3ab3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3ab3ec: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x3ab3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3ab3f0: 0x65200b  movn        $a0, $v1, $a1
    ctx->pc = 0x3ab3f0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3ab3f4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x3ab3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3ab3f8: 0x46200b  movn        $a0, $v0, $a2
    ctx->pc = 0x3ab3f8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x3ab3fc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x3ab3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3ab400: 0x67200b  movn        $a0, $v1, $a3
    ctx->pc = 0x3ab400u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3ab404: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x3ab404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_3ab408:
    // 0x3ab408: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3ab408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ab40c:
    // 0x3ab40c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ab40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab410: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ab410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab414: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ab414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ab418: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ab418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab41c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ab41cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab424: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB424u;
        // 0x3ab428: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB42Cu;
    // 0x3ab42c: 0x0  nop
    ctx->pc = 0x3ab42cu;
    // NOP
    ctx->pc = 0x3ab430u;
}
