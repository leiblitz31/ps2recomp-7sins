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

// Function: sub_004B0878
// Address: 0x4b0878 - 0x4b09f8
void sub_004B0878_0x4b0878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0878_0x4b0878");
#endif

    switch (ctx->pc) {
        case 0x4b08a4u: goto label_4b08a4;
        case 0x4b08c0u: goto label_4b08c0;
        case 0x4b08d8u: goto label_4b08d8;
        case 0x4b08e8u: goto label_4b08e8;
        case 0x4b0900u: goto label_4b0900;
        case 0x4b091cu: goto label_4b091c;
        case 0x4b0934u: goto label_4b0934;
        case 0x4b0960u: goto label_4b0960;
        case 0x4b0978u: goto label_4b0978;
        case 0x4b09d8u: goto label_4b09d8;
        default: break;
    }

    ctx->pc = 0x4b0878u;

    // 0x4b0878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b0878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b087c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4b087cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4b0880: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b0880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b0884: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x4b0884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    // 0x4b0888: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b0888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b088c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b0890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b0890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b0894: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b0894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b0898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b089c: 0xc12681a  jal         func_49A068
    ctx->pc = 0x4B089Cu;
    SET_GPR_U32(ctx, 31, 0x4B08A4u);
    ctx->pc = 0x4B08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B089Cu;
    // 0x4b08a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A068u, 0x4B089Cu, 0x4B08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B08A4u;
label_4b08a4:
    // 0x4b08a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b08a8: 0xa6230046  sh          $v1, 0x46($s1)
    ctx->pc = 0x4b08a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b08ac: 0x24121400  addiu       $s2, $zero, 0x1400
    ctx->pc = 0x4b08acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x4b08b0: 0xae320040  sw          $s2, 0x40($s1)
    ctx->pc = 0x4b08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    // 0x4b08b4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4b08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4b08b8: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B08B8u;
    SET_GPR_U32(ctx, 31, 0x4B08C0u);
    ctx->pc = 0x4B08BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B08B8u;
    // 0x4b08bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B08B8u, 0x4B08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B08C0u;
label_4b08c0:
    // 0x4b08c0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b08c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b08c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b08c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B08C8u;
    {
        const bool branch_taken_0x4b08c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B08C8u;
        // 0x4b08cc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b08c8) {
            ctx->pc = 0x4B08E0u;
            goto label_4b08e0;
        }
    }
    ctx->pc = 0x4B08D0u;
    // 0x4b08d0: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B08D0u;
    SET_GPR_U32(ctx, 31, 0x4B08D8u);
    ctx->pc = 0x4B08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B08D0u;
    // 0x4b08d4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B08D0u, 0x4B08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B08D8u;
label_4b08d8:
    // 0x4b08d8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4b08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4b08dc: 0x0  nop
    ctx->pc = 0x4b08dcu;
    // NOP
label_4b08e0:
    // 0x4b08e0: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B08E0u;
    SET_GPR_U32(ctx, 31, 0x4B08E8u);
    ctx->pc = 0x4B08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B08E0u;
    // 0x4b08e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B08E0u, 0x4B08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B08E8u;
label_4b08e8:
    // 0x4b08e8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b08ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b08ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b08f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B08F0u;
    {
        const bool branch_taken_0x4b08f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B08F0u;
        // 0x4b08f4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b08f0) {
            ctx->pc = 0x4B0950u;
            goto label_4b0950;
        }
    }
    ctx->pc = 0x4B08F8u;
    // 0x4b08f8: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B08F8u;
    SET_GPR_U32(ctx, 31, 0x4B0900u);
    ctx->pc = 0x4B08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B08F8u;
    // 0x4b08fc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B08F8u, 0x4B0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0900u;
label_4b0900:
    // 0x4b0900: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b0900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b0904: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4b0904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4b0908: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B0908u;
    {
        const bool branch_taken_0x4b0908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0908u;
        // 0x4b090c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0908) {
            ctx->pc = 0x4B0950u;
            goto label_4b0950;
        }
    }
    ctx->pc = 0x4B0910u;
    // 0x4b0910: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4b0910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4b0914: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B0914u;
    SET_GPR_U32(ctx, 31, 0x4B091Cu);
    ctx->pc = 0x4B0918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0914u;
    // 0x4b0918: 0x2453c8c8  addiu       $s3, $v0, -0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B0914u, 0x4B091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B091Cu;
label_4b091c:
    // 0x4b091c: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b091cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b0920: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b0920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b0924: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B0924u;
    {
        const bool branch_taken_0x4b0924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0924) {
            ctx->pc = 0x4B0928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0924u;
            // 0x4b0928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0940u;
            goto label_4b0940;
        }
    }
    ctx->pc = 0x4B092Cu;
    // 0x4b092c: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B092Cu;
    SET_GPR_U32(ctx, 31, 0x4B0934u);
    ctx->pc = 0x4B0930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B092Cu;
    // 0x4b0930: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B092Cu, 0x4B0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0934u;
label_4b0934:
    // 0x4b0934: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b0934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b0938: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b0938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b093c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4b093cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_4b0940:
    // 0x4b0940: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4b0940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4b0944: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4b0944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0948: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4B0948u;
    {
        const bool branch_taken_0x4b0948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0948u;
        // 0x4b094c: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0948) {
            ctx->pc = 0x4B098Cu;
            goto label_4b098c;
        }
    }
    ctx->pc = 0x4B0950u;
label_4b0950:
    // 0x4b0950: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4b0950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4b0954: 0x2453c8c8  addiu       $s3, $v0, -0x3738
    ctx->pc = 0x4b0954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b0958: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B0958u;
    SET_GPR_U32(ctx, 31, 0x4B0960u);
    ctx->pc = 0x4B095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0958u;
    // 0x4b095c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B0958u, 0x4B0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0960u;
label_4b0960:
    // 0x4b0960: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b0960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b0964: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b0964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b0968: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B0968u;
    {
        const bool branch_taken_0x4b0968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0968) {
            ctx->pc = 0x4B096Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0968u;
            // 0x4b096c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0980u;
            goto label_4b0980;
        }
    }
    ctx->pc = 0x4B0970u;
    // 0x4b0970: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B0970u;
    SET_GPR_U32(ctx, 31, 0x4B0978u);
    ctx->pc = 0x4B0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0970u;
    // 0x4b0974: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B0970u, 0x4B0978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0978u;
label_4b0978:
    // 0x4b0978: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b0978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b097c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4b0980:
    // 0x4b0980: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4b0980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4b0984: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4b0984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0988: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4b098c:
    // 0x4b098c: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4b098cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4b0990: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x4b0990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x4b0994: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x4b0994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x4b0998: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4b0998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4b099c: 0x244209f8  addiu       $v0, $v0, 0x9F8
    ctx->pc = 0x4b099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2552));
    // 0x4b09a0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x4b09a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x4b09a4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4b09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4b09a8: 0x24631f68  addiu       $v1, $v1, 0x1F68
    ctx->pc = 0x4b09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8040));
    // 0x4b09ac: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x4b09acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x4b09b0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x4b09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x4b09b4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4b09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4b09b8: 0x24420cd8  addiu       $v0, $v0, 0xCD8
    ctx->pc = 0x4b09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3288));
    // 0x4b09bc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x4b09bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x4b09c0: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4b09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4b09c4: 0x24632070  addiu       $v1, $v1, 0x2070
    ctx->pc = 0x4b09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8304));
    // 0x4b09c8: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x4b09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x4b09cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4b09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4b09d0: 0xc12bb6a  jal         func_4AEDA8
    ctx->pc = 0x4B09D0u;
    SET_GPR_U32(ctx, 31, 0x4B09D8u);
    ctx->pc = 0x4B09D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B09D0u;
    // 0x4b09d4: 0xa6220044  sh          $v0, 0x44($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEDA8u, 0x4B09D0u, 0x4B09D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B09D8u;
label_4b09d8:
    // 0x4b09d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b09d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b09dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b09dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b09e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b09e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b09e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b09e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b09e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b09e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b09ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4B09ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B09ECu;
        // 0x4b09f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B09ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B09F4u;
    // 0x4b09f4: 0x0  nop
    ctx->pc = 0x4b09f4u;
    // NOP
    ctx->pc = 0x4b09f8u;
}
