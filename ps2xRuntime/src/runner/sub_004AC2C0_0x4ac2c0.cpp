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

// Function: sub_004AC2C0
// Address: 0x4ac2c0 - 0x4ac430
void sub_004AC2C0_0x4ac2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC2C0_0x4ac2c0");
#endif

    switch (ctx->pc) {
        case 0x4ac2ecu: goto label_4ac2ec;
        case 0x4ac300u: goto label_4ac300;
        case 0x4ac318u: goto label_4ac318;
        case 0x4ac328u: goto label_4ac328;
        case 0x4ac340u: goto label_4ac340;
        case 0x4ac35cu: goto label_4ac35c;
        case 0x4ac374u: goto label_4ac374;
        case 0x4ac3a0u: goto label_4ac3a0;
        case 0x4ac3b8u: goto label_4ac3b8;
        default: break;
    }

    ctx->pc = 0x4ac2c0u;

    // 0x4ac2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ac2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ac2c4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4ac2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4ac2c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4ac2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4ac2cc: 0x24a52c10  addiu       $a1, $a1, 0x2C10
    ctx->pc = 0x4ac2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11280));
    // 0x4ac2d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ac2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac2d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4ac2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4ac2d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ac2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4ac2dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4ac2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4ac2e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac2e4: 0xc12681a  jal         func_49A068
    ctx->pc = 0x4AC2E4u;
    SET_GPR_U32(ctx, 31, 0x4AC2ECu);
    ctx->pc = 0x4AC2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC2E4u;
    // 0x4ac2e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A068u, 0x4AC2E4u, 0x4AC2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC2ECu;
label_4ac2ec:
    // 0x4ac2ec: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x4ac2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4ac2f0: 0xae320040  sw          $s2, 0x40($s1)
    ctx->pc = 0x4ac2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    // 0x4ac2f4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ac2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ac2f8: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AC2F8u;
    SET_GPR_U32(ctx, 31, 0x4AC300u);
    ctx->pc = 0x4AC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC2F8u;
    // 0x4ac2fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AC2F8u, 0x4AC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC300u;
label_4ac300:
    // 0x4ac300: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ac300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ac304: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ac308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC308u;
    {
        const bool branch_taken_0x4ac308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC308u;
        // 0x4ac30c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac308) {
            ctx->pc = 0x4AC320u;
            goto label_4ac320;
        }
    }
    ctx->pc = 0x4AC310u;
    // 0x4ac310: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AC310u;
    SET_GPR_U32(ctx, 31, 0x4AC318u);
    ctx->pc = 0x4AC314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC310u;
    // 0x4ac314: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AC310u, 0x4AC318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC318u;
label_4ac318:
    // 0x4ac318: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ac318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ac31c: 0x0  nop
    ctx->pc = 0x4ac31cu;
    // NOP
label_4ac320:
    // 0x4ac320: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AC320u;
    SET_GPR_U32(ctx, 31, 0x4AC328u);
    ctx->pc = 0x4AC324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC320u;
    // 0x4ac324: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AC320u, 0x4AC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC328u;
label_4ac328:
    // 0x4ac328: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ac328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ac32c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ac330: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4AC330u;
    {
        const bool branch_taken_0x4ac330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC330u;
        // 0x4ac334: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac330) {
            ctx->pc = 0x4AC390u;
            goto label_4ac390;
        }
    }
    ctx->pc = 0x4AC338u;
    // 0x4ac338: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AC338u;
    SET_GPR_U32(ctx, 31, 0x4AC340u);
    ctx->pc = 0x4AC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC338u;
    // 0x4ac33c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AC338u, 0x4AC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC340u;
label_4ac340:
    // 0x4ac340: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ac340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ac344: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4ac344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4ac348: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AC348u;
    {
        const bool branch_taken_0x4ac348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC348u;
        // 0x4ac34c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac348) {
            ctx->pc = 0x4AC390u;
            goto label_4ac390;
        }
    }
    ctx->pc = 0x4AC350u;
    // 0x4ac350: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ac350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ac354: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AC354u;
    SET_GPR_U32(ctx, 31, 0x4AC35Cu);
    ctx->pc = 0x4AC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC354u;
    // 0x4ac358: 0x2453c8c8  addiu       $s3, $v0, -0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AC354u, 0x4AC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC35Cu;
label_4ac35c:
    // 0x4ac35c: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ac35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ac360: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ac364: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AC364u;
    {
        const bool branch_taken_0x4ac364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac364) {
            ctx->pc = 0x4AC368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC364u;
            // 0x4ac368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC380u;
            goto label_4ac380;
        }
    }
    ctx->pc = 0x4AC36Cu;
    // 0x4ac36c: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AC36Cu;
    SET_GPR_U32(ctx, 31, 0x4AC374u);
    ctx->pc = 0x4AC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC36Cu;
    // 0x4ac370: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AC36Cu, 0x4AC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC374u;
label_4ac374:
    // 0x4ac374: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ac374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ac378: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ac37c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4ac37cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_4ac380:
    // 0x4ac380: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4ac380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4ac384: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4ac384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ac388: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AC388u;
    {
        const bool branch_taken_0x4ac388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC388u;
        // 0x4ac38c: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac388) {
            ctx->pc = 0x4AC3CCu;
            goto label_4ac3cc;
        }
    }
    ctx->pc = 0x4AC390u;
label_4ac390:
    // 0x4ac390: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ac390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ac394: 0x2453c8c8  addiu       $s3, $v0, -0x3738
    ctx->pc = 0x4ac394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4ac398: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AC398u;
    SET_GPR_U32(ctx, 31, 0x4AC3A0u);
    ctx->pc = 0x4AC39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC398u;
    // 0x4ac39c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AC398u, 0x4AC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC3A0u;
label_4ac3a0:
    // 0x4ac3a0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ac3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ac3a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ac3a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC3A8u;
    {
        const bool branch_taken_0x4ac3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac3a8) {
            ctx->pc = 0x4AC3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC3A8u;
            // 0x4ac3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC3C0u;
            goto label_4ac3c0;
        }
    }
    ctx->pc = 0x4AC3B0u;
    // 0x4ac3b0: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AC3B0u;
    SET_GPR_U32(ctx, 31, 0x4AC3B8u);
    ctx->pc = 0x4AC3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC3B0u;
    // 0x4ac3b4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AC3B0u, 0x4AC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC3B8u;
label_4ac3b8:
    // 0x4ac3b8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ac3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ac3bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4ac3c0:
    // 0x4ac3c0: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4ac3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4ac3c4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4ac3c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ac3c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ac3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4ac3cc:
    // 0x4ac3cc: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4ac3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4ac3d0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x4ac3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x4ac3d4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x4ac3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x4ac3d8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4ac3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4ac3dc: 0x2442ca20  addiu       $v0, $v0, -0x35E0
    ctx->pc = 0x4ac3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953504));
    // 0x4ac3e0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x4ac3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x4ac3e4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4ac3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4ac3e8: 0x2463cad8  addiu       $v1, $v1, -0x3528
    ctx->pc = 0x4ac3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953688));
    // 0x4ac3ec: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x4ac3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x4ac3f0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4ac3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4ac3f4: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x4ac3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x4ac3f8: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x4ac3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x4ac3fc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4ac3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4ac400: 0x2463cba8  addiu       $v1, $v1, -0x3458
    ctx->pc = 0x4ac400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953896));
    // 0x4ac404: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x4ac404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x4ac408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4ac408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ac40c: 0xa6220044  sh          $v0, 0x44($s1)
    ctx->pc = 0x4ac40cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ac410: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4ac410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ac414: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4ac414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ac418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac41c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4ac41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac424: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC424u;
        // 0x4ac428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC42Cu;
    // 0x4ac42c: 0x0  nop
    ctx->pc = 0x4ac42cu;
    // NOP
    ctx->pc = 0x4ac430u;
}
