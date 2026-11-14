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

// Function: sub_003AD508
// Address: 0x3ad508 - 0x3ad6c0
void sub_003AD508_0x3ad508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD508_0x3ad508");
#endif

    switch (ctx->pc) {
        case 0x3ad558u: goto label_3ad558;
        case 0x3ad58cu: goto label_3ad58c;
        case 0x3ad598u: goto label_3ad598;
        case 0x3ad5a4u: goto label_3ad5a4;
        case 0x3ad5b4u: goto label_3ad5b4;
        case 0x3ad5e0u: goto label_3ad5e0;
        case 0x3ad650u: goto label_3ad650;
        case 0x3ad664u: goto label_3ad664;
        case 0x3ad688u: goto label_3ad688;
        default: break;
    }

    ctx->pc = 0x3ad508u;

    // 0x3ad508: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ad508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3ad50c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ad50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3ad510: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ad510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3ad514: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ad514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad518: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3ad518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3ad51c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ad51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad520: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3ad520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3ad524: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ad524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad528: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ad528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3ad52c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x3ad52cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad530: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3ad530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3ad534: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3ad534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3ad538: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ad538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3ad53c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3ad53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3ad540: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3ad540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3ad544: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3ad544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3ad548: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x3AD548u;
    {
        const bool branch_taken_0x3ad548 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD548u;
        // 0x3ad54c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad548) {
            ctx->pc = 0x3AD688u;
            goto label_3ad688;
        }
    }
    ctx->pc = 0x3AD550u;
    // 0x3ad550: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AD550u;
    SET_GPR_U32(ctx, 31, 0x3AD558u);
    ctx->pc = 0x3AD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD550u;
    // 0x3ad554: 0x8e240134  lw          $a0, 0x134($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AD550u, 0x3AD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD558u;
label_3ad558:
    // 0x3ad558: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3ad558u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad55c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3ad55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3ad560: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3ad560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3ad564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD564u;
    {
        const bool branch_taken_0x3ad564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD564u;
        // 0x3ad568: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad564) {
            ctx->pc = 0x3AD578u;
            goto label_3ad578;
        }
    }
    ctx->pc = 0x3AD56Cu;
    // 0x3ad56c: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x3ad56cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ad570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD570u;
    {
        const bool branch_taken_0x3ad570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD570u;
        // 0x3ad574: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad570) {
            ctx->pc = 0x3AD584u;
            goto label_3ad584;
        }
    }
    ctx->pc = 0x3AD578u;
label_3ad578:
    // 0x3ad578: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3ad578u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad57c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3ad57cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad580: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ad580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad584:
    // 0x3ad584: 0xc0eb7e6  jal         func_3ADF98
    ctx->pc = 0x3AD584u;
    SET_GPR_U32(ctx, 31, 0x3AD58Cu);
    ctx->pc = 0x3ADF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADF98u, 0x3AD584u, 0x3AD58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD58Cu;
label_3ad58c:
    // 0x3ad58c: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x3ad58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3ad590: 0xc0eb910  jal         func_3AE440
    ctx->pc = 0x3AD590u;
    SET_GPR_U32(ctx, 31, 0x3AD598u);
    ctx->pc = 0x3AD594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD590u;
    // 0x3ad594: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE440u, 0x3AD590u, 0x3AD598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD598u;
label_3ad598:
    // 0x3ad598: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ad598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3ad59c: 0xc0eb8f8  jal         func_3AE3E0
    ctx->pc = 0x3AD59Cu;
    SET_GPR_U32(ctx, 31, 0x3AD5A4u);
    ctx->pc = 0x3AD5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD59Cu;
    // 0x3ad5a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3E0u, 0x3AD59Cu, 0x3AD5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD5A4u;
label_3ad5a4:
    // 0x3ad5a4: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x3ad5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3ad5a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3ad5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ad5ac: 0xc0eb910  jal         func_3AE440
    ctx->pc = 0x3AD5ACu;
    SET_GPR_U32(ctx, 31, 0x3AD5B4u);
    ctx->pc = 0x3AD5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD5ACu;
    // 0x3ad5b0: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE440u, 0x3AD5ACu, 0x3AD5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD5B4u;
label_3ad5b4:
    // 0x3ad5b4: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x3ad5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x3ad5b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3ad5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ad5bc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ad5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ad5c0: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x3ad5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x3ad5c4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ad5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ad5c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ad5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad5cc: 0x1860002c  blez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3AD5CCu;
    {
        const bool branch_taken_0x3ad5cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3AD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5CCu;
        // 0x3ad5d0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5cc) {
            ctx->pc = 0x3AD680u;
            goto label_3ad680;
        }
    }
    ctx->pc = 0x3AD5D4u;
    // 0x3ad5d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ad5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad5d8: 0x26340024  addiu       $s4, $s1, 0x24
    ctx->pc = 0x3ad5d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x3ad5dc: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x3ad5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_3ad5e0:
    // 0x3ad5e0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AD5E0u;
    {
        const bool branch_taken_0x3ad5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5E0u;
        // 0x3ad5e4: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5e0) {
            ctx->pc = 0x3AD61Cu;
            goto label_3ad61c;
        }
    }
    ctx->pc = 0x3AD5E8u;
    // 0x3ad5e8: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x3ad5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x3ad5ec: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x3ad5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad5f0: 0x482000c  bltzl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3AD5F0u;
    {
        const bool branch_taken_0x3ad5f0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3ad5f0) {
            ctx->pc = 0x3AD5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD5F0u;
            // 0x3ad5f4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD624u;
            goto label_3ad624;
        }
    }
    ctx->pc = 0x3AD5F8u;
    // 0x3ad5f8: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x3ad5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x3ad5fc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3ad5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ad600: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD600u;
    {
        const bool branch_taken_0x3ad600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD600u;
        // 0x3ad604: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad600) {
            ctx->pc = 0x3AD614u;
            goto label_3ad614;
        }
    }
    ctx->pc = 0x3AD608u;
    // 0x3ad608: 0x8e23012c  lw          $v1, 0x12C($s1)
    ctx->pc = 0x3ad608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x3ad60c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD60Cu;
    {
        const bool branch_taken_0x3ad60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD60Cu;
        // 0x3ad610: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad60c) {
            ctx->pc = 0x3AD620u;
            goto label_3ad620;
        }
    }
    ctx->pc = 0x3AD614u;
label_3ad614:
    // 0x3ad614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD614u;
    {
        const bool branch_taken_0x3ad614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD614u;
        // 0x3ad618: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad614) {
            ctx->pc = 0x3AD624u;
            goto label_3ad624;
        }
    }
    ctx->pc = 0x3AD61Cu;
label_3ad61c:
    // 0x3ad61c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3ad61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3ad620:
    // 0x3ad620: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3ad620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3ad624:
    // 0x3ad624: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x3ad624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x3ad628: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AD628u;
    {
        const bool branch_taken_0x3ad628 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD628u;
        // 0x3ad62c: 0x2759821  addu        $s3, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad628) {
            ctx->pc = 0x3AD664u;
            goto label_3ad664;
        }
    }
    ctx->pc = 0x3AD630u;
    // 0x3ad630: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3ad630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3ad634: 0x2e28021  addu        $s0, $s7, $v0
    ctx->pc = 0x3ad634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x3ad638: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ad638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ad63c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3AD63Cu;
    {
        const bool branch_taken_0x3ad63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad63c) {
            ctx->pc = 0x3AD640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD63Cu;
            // 0x3ad640: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD668u;
            goto label_3ad668;
        }
    }
    ctx->pc = 0x3AD644u;
    // 0x3ad644: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3ad644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3ad648: 0xc0ecd28  jal         func_3B34A0
    ctx->pc = 0x3AD648u;
    SET_GPR_U32(ctx, 31, 0x3AD650u);
    ctx->pc = 0x3AD64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD648u;
    // 0x3ad64c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B34A0u, 0x3AD648u, 0x3AD650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD650u;
label_3ad650:
    // 0x3ad650: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3ad650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ad654: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x3ad654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ad658: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3ad658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3ad65c: 0xc0eb910  jal         func_3AE440
    ctx->pc = 0x3AD65Cu;
    SET_GPR_U32(ctx, 31, 0x3AD664u);
    ctx->pc = 0x3AD660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD65Cu;
    // 0x3ad660: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE440u, 0x3AD65Cu, 0x3AD664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD664u;
label_3ad664:
    // 0x3ad664: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3ad664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3ad668:
    // 0x3ad668: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x3ad668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ad66c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x3ad66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x3ad670: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ad670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ad674: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ad674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad678: 0x1c60ffd9  bgtz        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x3AD678u;
    {
        const bool branch_taken_0x3ad678 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3AD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD678u;
        // 0x3ad67c: 0x28620080  slti        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad678) {
            ctx->pc = 0x3AD5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad5e0;
        }
    }
    ctx->pc = 0x3AD680u;
label_3ad680:
    // 0x3ad680: 0xc0eb8ec  jal         func_3AE3B0
    ctx->pc = 0x3AD680u;
    SET_GPR_U32(ctx, 31, 0x3AD688u);
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3AD680u, 0x3AD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD688u;
label_3ad688:
    // 0x3ad688: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ad688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad68c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3ad68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ad690: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3ad690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ad694: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3ad694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ad698: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3ad698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ad69c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ad69cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ad6a0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3ad6a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ad6a4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3ad6a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ad6a8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3ad6a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad6ac: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3ad6acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad6b4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ad6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ad6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6B8u;
        // 0x3ad6bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD6C0u;
}
