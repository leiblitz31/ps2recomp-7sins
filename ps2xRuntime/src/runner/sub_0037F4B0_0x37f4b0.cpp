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

// Function: sub_0037F4B0
// Address: 0x37f4b0 - 0x37f9c0
void sub_0037F4B0_0x37f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F4B0_0x37f4b0");
#endif

    switch (ctx->pc) {
        case 0x37f4f8u: goto label_37f4f8;
        case 0x37f510u: goto label_37f510;
        case 0x37f578u: goto label_37f578;
        case 0x37f588u: goto label_37f588;
        case 0x37f5a8u: goto label_37f5a8;
        case 0x37f5b8u: goto label_37f5b8;
        case 0x37f5d8u: goto label_37f5d8;
        case 0x37f5ecu: goto label_37f5ec;
        case 0x37f5fcu: goto label_37f5fc;
        case 0x37f614u: goto label_37f614;
        case 0x37f624u: goto label_37f624;
        case 0x37f63cu: goto label_37f63c;
        case 0x37f64cu: goto label_37f64c;
        case 0x37f670u: goto label_37f670;
        case 0x37f680u: goto label_37f680;
        case 0x37f6a8u: goto label_37f6a8;
        case 0x37f6c8u: goto label_37f6c8;
        case 0x37f6d8u: goto label_37f6d8;
        case 0x37f72cu: goto label_37f72c;
        case 0x37f740u: goto label_37f740;
        case 0x37f758u: goto label_37f758;
        case 0x37f76cu: goto label_37f76c;
        case 0x37f784u: goto label_37f784;
        case 0x37f790u: goto label_37f790;
        case 0x37f7a0u: goto label_37f7a0;
        case 0x37f7b0u: goto label_37f7b0;
        case 0x37f7c8u: goto label_37f7c8;
        case 0x37f7d8u: goto label_37f7d8;
        case 0x37f7f0u: goto label_37f7f0;
        case 0x37f800u: goto label_37f800;
        case 0x37f81cu: goto label_37f81c;
        case 0x37f830u: goto label_37f830;
        case 0x37f89cu: goto label_37f89c;
        case 0x37f950u: goto label_37f950;
        default: break;
    }

    ctx->pc = 0x37f4b0u;

    // 0x37f4b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37f4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x37f4b4: 0x8f83a8f8  lw          $v1, -0x5708($gp)
    ctx->pc = 0x37f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
    // 0x37f4b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x37f4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x37f4bc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x37f4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x37f4c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x37f4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x37f4c4: 0xa3b021  addu        $s6, $a1, $v1
    ctx->pc = 0x37f4c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37f4c8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x37f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x37f4cc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x37f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x37f4d0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x37f4d4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37f4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x37f4d8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x37f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x37f4dc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x37f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x37f4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37f4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37f4e4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x37f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37f4e8: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x37F4E8u;
    {
        const bool branch_taken_0x37f4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4E8u;
        // 0x37f4ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f4e8) {
            ctx->pc = 0x37F850u;
            goto label_37f850;
        }
    }
    ctx->pc = 0x37F4F0u;
    // 0x37f4f0: 0xc0c97b0  jal         func_325EC0
    ctx->pc = 0x37F4F0u;
    SET_GPR_U32(ctx, 31, 0x37F4F8u);
    ctx->pc = 0x37F4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F4F0u;
    // 0x37f4f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325EC0u, 0x37F4F0u, 0x37F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F4F8u;
label_37f4f8:
    // 0x37f4f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37f4f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f4fc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x37f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37f500: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x37F500u;
    {
        const bool branch_taken_0x37f500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F500u;
        // 0x37f504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f500) {
            ctx->pc = 0x37F850u;
            goto label_37f850;
        }
    }
    ctx->pc = 0x37F508u;
    // 0x37f508: 0x387e0004  xori        $fp, $v1, 0x4
    ctx->pc = 0x37f508u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x37f50c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x37f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37f510:
    // 0x37f510: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x37f510u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x37f514: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x37f514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37f518: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x37f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37f51c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x37f51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f520: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x37f520u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37f524: 0x141042  srl         $v0, $s4, 1
    ctx->pc = 0x37f524u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x37f528: 0x5ea00a  movz        $s4, $v0, $fp
    ctx->pc = 0x37f528u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x37f52c: 0x12800057  beqz        $s4, . + 4 + (0x57 << 2)
    ctx->pc = 0x37F52Cu;
    {
        const bool branch_taken_0x37f52c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F52Cu;
        // 0x37f530: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f52c) {
            ctx->pc = 0x37F68Cu;
            goto label_37f68c;
        }
    }
    ctx->pc = 0x37F534u;
    // 0x37f534: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37f534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f538: 0x1a80001f  blez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x37F538u;
    {
        const bool branch_taken_0x37f538 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x37F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F538u;
        // 0x37f53c: 0x32830003  andi        $v1, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f538) {
            ctx->pc = 0x37F5B8u;
            goto label_37f5b8;
        }
    }
    ctx->pc = 0x37F540u;
    // 0x37f540: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x37F540u;
    {
        const bool branch_taken_0x37f540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f540) {
            ctx->pc = 0x37F544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F540u;
            // 0x37f544: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F5D8u;
            goto label_37f5d8;
        }
    }
    ctx->pc = 0x37F548u;
    // 0x37f548: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x37f548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37f54c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x37F54Cu;
    {
        const bool branch_taken_0x37f54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f54c) {
            ctx->pc = 0x37F550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F54Cu;
            // 0x37f550: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F5BCu;
            goto label_37f5bc;
        }
    }
    ctx->pc = 0x37F554u;
    // 0x37f554: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37f554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37f558: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37F558u;
    {
        const bool branch_taken_0x37f558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F558u;
        // 0x37f55c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f558) {
            ctx->pc = 0x37F58Cu;
            goto label_37f58c;
        }
    }
    ctx->pc = 0x37F560u;
    // 0x37f560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f564: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f568: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x37f568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37f56c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x37f56cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f570: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F570u;
    SET_GPR_U32(ctx, 31, 0x37F578u);
    ctx->pc = 0x37F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F570u;
    // 0x37f574: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F570u, 0x37F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F578u;
label_37f578:
    // 0x37f578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f57c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f580: 0xc0dfe70  jal         func_37F9C0
    ctx->pc = 0x37F580u;
    SET_GPR_U32(ctx, 31, 0x37F588u);
    ctx->pc = 0x37F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F580u;
    // 0x37f584: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F9C0u, 0x37F580u, 0x37F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F588u;
label_37f588:
    // 0x37f588: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37f58c:
    // 0x37f58c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f590: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f594: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37f594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37f598: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x37f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37f59c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x37f59cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f5a0: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F5A0u;
    SET_GPR_U32(ctx, 31, 0x37F5A8u);
    ctx->pc = 0x37F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F5A0u;
    // 0x37f5a4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F5A0u, 0x37F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F5A8u;
label_37f5a8:
    // 0x37f5a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f5ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f5b0: 0xc0dfe70  jal         func_37F9C0
    ctx->pc = 0x37F5B0u;
    SET_GPR_U32(ctx, 31, 0x37F5B8u);
    ctx->pc = 0x37F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F5B0u;
    // 0x37f5b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F9C0u, 0x37F5B0u, 0x37F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F5B8u;
label_37f5b8:
    // 0x37f5b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37f5bc:
    // 0x37f5bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f5c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f5c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37f5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37f5c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x37f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37f5cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x37f5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f5d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x37F5D0u;
    {
        const bool branch_taken_0x37f5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F5D0u;
        // 0x37f5d4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f5d0) {
            ctx->pc = 0x37F668u;
            goto label_37f668;
        }
    }
    ctx->pc = 0x37F5D8u;
label_37f5d8:
    // 0x37f5d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f5dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f5e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x37f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37f5e4: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F5E4u;
    SET_GPR_U32(ctx, 31, 0x37F5ECu);
    ctx->pc = 0x37F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F5E4u;
    // 0x37f5e8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F5E4u, 0x37F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F5ECu;
label_37f5ec:
    // 0x37f5ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f5f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f5f4: 0xc0dfe70  jal         func_37F9C0
    ctx->pc = 0x37F5F4u;
    SET_GPR_U32(ctx, 31, 0x37F5FCu);
    ctx->pc = 0x37F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F5F4u;
    // 0x37f5f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F9C0u, 0x37F5F4u, 0x37F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F5FCu;
label_37f5fc:
    // 0x37f5fc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37f600: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x37f600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37f604: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f608: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x37f608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x37f60c: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F60Cu;
    SET_GPR_U32(ctx, 31, 0x37F614u);
    ctx->pc = 0x37F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F60Cu;
    // 0x37f610: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F60Cu, 0x37F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F614u;
label_37f614:
    // 0x37f614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f618: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f61c: 0xc0dfe70  jal         func_37F9C0
    ctx->pc = 0x37F61Cu;
    SET_GPR_U32(ctx, 31, 0x37F624u);
    ctx->pc = 0x37F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F61Cu;
    // 0x37f620: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F9C0u, 0x37F61Cu, 0x37F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F624u;
label_37f624:
    // 0x37f624: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37f628: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x37f628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x37f62c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f630: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x37f630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x37f634: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F634u;
    SET_GPR_U32(ctx, 31, 0x37F63Cu);
    ctx->pc = 0x37F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F634u;
    // 0x37f638: 0x8c700008  lw          $s0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F634u, 0x37F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F63Cu;
label_37f63c:
    // 0x37f63c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f644: 0xc0dfe70  jal         func_37F9C0
    ctx->pc = 0x37F644u;
    SET_GPR_U32(ctx, 31, 0x37F64Cu);
    ctx->pc = 0x37F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F644u;
    // 0x37f648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F9C0u, 0x37F644u, 0x37F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F64Cu;
label_37f64c:
    // 0x37f64c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37f650: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x37f650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x37f654: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f658: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x37f658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x37f65c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x37f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x37f660: 0x8c70000c  lw          $s0, 0xC($v1)
    ctx->pc = 0x37f660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37f664: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x37f664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_37f668:
    // 0x37f668: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F668u;
    SET_GPR_U32(ctx, 31, 0x37F670u);
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F668u, 0x37F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F670u;
label_37f670:
    // 0x37f670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f674: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f678: 0xc0dfe70  jal         func_37F9C0
    ctx->pc = 0x37F678u;
    SET_GPR_U32(ctx, 31, 0x37F680u);
    ctx->pc = 0x37F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F678u;
    // 0x37f67c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F9C0u, 0x37F678u, 0x37F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F680u;
label_37f680:
    // 0x37f680: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x37f680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x37f684: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x37F684u;
    {
        const bool branch_taken_0x37f684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f684) {
            ctx->pc = 0x37F688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F684u;
            // 0x37f688: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f5d8;
        }
    }
    ctx->pc = 0x37F68Cu;
label_37f68c:
    // 0x37f68c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x37f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37f690: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x37f690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x37f694: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x37F694u;
    {
        const bool branch_taken_0x37f694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F694u;
        // 0x37f698: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f694) {
            ctx->pc = 0x37F6E8u;
            goto label_37f6e8;
        }
    }
    ctx->pc = 0x37F69Cu;
    // 0x37f69c: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x37f69cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x37f6a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37f6a4: 0x0  nop
    ctx->pc = 0x37f6a4u;
    // NOP
label_37f6a8:
    // 0x37f6a8: 0xb42823  subu        $a1, $a1, $s4
    ctx->pc = 0x37f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x37f6ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f6b0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x37f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x37f6b4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x37f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37f6b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37f6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37f6bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x37f6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f6c0: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F6C0u;
    SET_GPR_U32(ctx, 31, 0x37F6C8u);
    ctx->pc = 0x37F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F6C0u;
    // 0x37f6c4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F6C0u, 0x37F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F6C8u;
label_37f6c8:
    // 0x37f6c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6d0: 0xc0dfeee  jal         func_37FBB8
    ctx->pc = 0x37F6D0u;
    SET_GPR_U32(ctx, 31, 0x37F6D8u);
    ctx->pc = 0x37F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F6D0u;
    // 0x37f6d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FBB8u, 0x37F6D0u, 0x37F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F6D8u;
label_37f6d8:
    // 0x37f6d8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x37f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37f6dc: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x37f6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x37f6e0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x37F6E0u;
    {
        const bool branch_taken_0x37f6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f6e0) {
            ctx->pc = 0x37F6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F6E0u;
            // 0x37f6e4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f6a8;
        }
    }
    ctx->pc = 0x37F6E8u;
label_37f6e8:
    // 0x37f6e8: 0x12800054  beqz        $s4, . + 4 + (0x54 << 2)
    ctx->pc = 0x37F6E8u;
    {
        const bool branch_taken_0x37f6e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F6E8u;
        // 0x37f6ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f6e8) {
            ctx->pc = 0x37F83Cu;
            goto label_37f83c;
        }
    }
    ctx->pc = 0x37F6F0u;
    // 0x37f6f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37f6f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6f4: 0x1a80001d  blez        $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x37F6F4u;
    {
        const bool branch_taken_0x37f6f4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x37F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F6F4u;
        // 0x37f6f8: 0x32830003  andi        $v1, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f6f4) {
            ctx->pc = 0x37F76Cu;
            goto label_37f76c;
        }
    }
    ctx->pc = 0x37F6FCu;
    // 0x37f6fc: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x37F6FCu;
    {
        const bool branch_taken_0x37f6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f6fc) {
            ctx->pc = 0x37F700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F6FCu;
            // 0x37f700: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F790u;
            goto label_37f790;
        }
    }
    ctx->pc = 0x37F704u;
    // 0x37f704: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x37f704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37f708: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x37F708u;
    {
        const bool branch_taken_0x37f708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F708u;
        // 0x37f70c: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f708) {
            ctx->pc = 0x37F770u;
            goto label_37f770;
        }
    }
    ctx->pc = 0x37F710u;
    // 0x37f710: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37f710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37f714: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x37F714u;
    {
        const bool branch_taken_0x37f714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f714) {
            ctx->pc = 0x37F744u;
            goto label_37f744;
        }
    }
    ctx->pc = 0x37F71Cu;
    // 0x37f71c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f724: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F724u;
    SET_GPR_U32(ctx, 31, 0x37F72Cu);
    ctx->pc = 0x37F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F724u;
    // 0x37f728: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F724u, 0x37F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F72Cu;
label_37f72c:
    // 0x37f72c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x37f72cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f734: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f738: 0xc0dff74  jal         func_37FDD0
    ctx->pc = 0x37F738u;
    SET_GPR_U32(ctx, 31, 0x37F740u);
    ctx->pc = 0x37F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F738u;
    // 0x37f73c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FDD0u, 0x37F738u, 0x37F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F740u;
label_37f740:
    // 0x37f740: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x37f740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_37f744:
    // 0x37f744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f748: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f74c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37f74cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37f750: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F750u;
    SET_GPR_U32(ctx, 31, 0x37F758u);
    ctx->pc = 0x37F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F750u;
    // 0x37f754: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F750u, 0x37F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F758u;
label_37f758:
    // 0x37f758: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x37f758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x37f75c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f760: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f764: 0xc0dff74  jal         func_37FDD0
    ctx->pc = 0x37F764u;
    SET_GPR_U32(ctx, 31, 0x37F76Cu);
    ctx->pc = 0x37F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F764u;
    // 0x37f768: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FDD0u, 0x37F764u, 0x37F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F76Cu;
label_37f76c:
    // 0x37f76c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x37f76cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_37f770:
    // 0x37f770: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f774: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f778: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37f778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37f77c: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F77Cu;
    SET_GPR_U32(ctx, 31, 0x37F784u);
    ctx->pc = 0x37F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F77Cu;
    // 0x37f780: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F77Cu, 0x37F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F784u;
label_37f784:
    // 0x37f784: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x37F784u;
    {
        const bool branch_taken_0x37f784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F784u;
        // 0x37f788: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f784) {
            ctx->pc = 0x37F820u;
            goto label_37f820;
        }
    }
    ctx->pc = 0x37F78Cu;
    // 0x37f78c: 0x0  nop
    ctx->pc = 0x37f78cu;
    // NOP
label_37f790:
    // 0x37f790: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f794: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f798: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F798u;
    SET_GPR_U32(ctx, 31, 0x37F7A0u);
    ctx->pc = 0x37F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F798u;
    // 0x37f79c: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F798u, 0x37F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F7A0u;
label_37f7a0:
    // 0x37f7a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7a8: 0xc0dff74  jal         func_37FDD0
    ctx->pc = 0x37F7A8u;
    SET_GPR_U32(ctx, 31, 0x37F7B0u);
    ctx->pc = 0x37F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7A8u;
    // 0x37f7ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FDD0u, 0x37F7A8u, 0x37F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F7B0u;
label_37f7b0:
    // 0x37f7b0: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x37f7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37f7b4: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x37f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x37f7b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f7bc: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x37f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37f7c0: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F7C0u;
    SET_GPR_U32(ctx, 31, 0x37F7C8u);
    ctx->pc = 0x37F7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7C0u;
    // 0x37f7c4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F7C0u, 0x37F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F7C8u;
label_37f7c8:
    // 0x37f7c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7d0: 0xc0dff74  jal         func_37FDD0
    ctx->pc = 0x37F7D0u;
    SET_GPR_U32(ctx, 31, 0x37F7D8u);
    ctx->pc = 0x37F7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7D0u;
    // 0x37f7d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FDD0u, 0x37F7D0u, 0x37F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F7D8u;
label_37f7d8:
    // 0x37f7d8: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x37f7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37f7dc: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x37f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x37f7e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f7e4: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x37f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x37f7e8: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F7E8u;
    SET_GPR_U32(ctx, 31, 0x37F7F0u);
    ctx->pc = 0x37F7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7E8u;
    // 0x37f7ec: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F7E8u, 0x37F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F7F0u;
label_37f7f0:
    // 0x37f7f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7f8: 0xc0dff74  jal         func_37FDD0
    ctx->pc = 0x37F7F8u;
    SET_GPR_U32(ctx, 31, 0x37F800u);
    ctx->pc = 0x37F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7F8u;
    // 0x37f7fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FDD0u, 0x37F7F8u, 0x37F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F800u;
label_37f800:
    // 0x37f800: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x37f800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37f804: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x37f804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x37f808: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x37f808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f80c: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x37f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x37f810: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x37f810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37f814: 0xc0df7d2  jal         func_37DF48
    ctx->pc = 0x37F814u;
    SET_GPR_U32(ctx, 31, 0x37F81Cu);
    ctx->pc = 0x37F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F814u;
    // 0x37f818: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF48u, 0x37F814u, 0x37F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F81Cu;
label_37f81c:
    // 0x37f81c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x37f81cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_37f820:
    // 0x37f820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f824: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f828: 0xc0dff74  jal         func_37FDD0
    ctx->pc = 0x37F828u;
    SET_GPR_U32(ctx, 31, 0x37F830u);
    ctx->pc = 0x37F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F828u;
    // 0x37f82c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FDD0u, 0x37F828u, 0x37F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F830u;
label_37f830:
    // 0x37f830: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x37f830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x37f834: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x37F834u;
    {
        const bool branch_taken_0x37f834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f834) {
            ctx->pc = 0x37F838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F834u;
            // 0x37f838: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f790;
        }
    }
    ctx->pc = 0x37F83Cu;
label_37f83c:
    // 0x37f83c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x37f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37f840: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37f840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f844: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x37f844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37f848: 0x1440ff31  bnez        $v0, . + 4 + (-0xCF << 2)
    ctx->pc = 0x37F848u;
    {
        const bool branch_taken_0x37f848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F848u;
        // 0x37f84c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f848) {
            ctx->pc = 0x37F510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f510;
        }
    }
    ctx->pc = 0x37F850u;
label_37f850:
    // 0x37f850: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x37f850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f854: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x37f854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37f858: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x37f858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37f85c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x37f85cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37f860: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x37f860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37f864: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37f864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37f868: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x37f868u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37f86c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x37f86cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37f870: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x37f870u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f874: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x37f874u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37f878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f87c: 0x3e00008  jr          $ra
    ctx->pc = 0x37F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F87Cu;
        // 0x37f880: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F884u;
    // 0x37f884: 0x0  nop
    ctx->pc = 0x37f884u;
    // NOP
    // 0x37f888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37f888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37f88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37f890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37f890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37f894: 0xc0dfc42  jal         func_37F108
    ctx->pc = 0x37F894u;
    SET_GPR_U32(ctx, 31, 0x37F89Cu);
    ctx->pc = 0x37F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F894u;
    // 0x37f898: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F108u, 0x37F894u, 0x37F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F89Cu;
label_37f89c:
    // 0x37f89c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37F89Cu;
    {
        const bool branch_taken_0x37f89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f89c) {
            ctx->pc = 0x37F8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F89Cu;
            // 0x37f8a0: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F8A4u;
            goto label_37f8a4;
        }
    }
    ctx->pc = 0x37F8A4u;
label_37f8a4:
    // 0x37f8a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37f8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f8a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37f8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37f8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x37F8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8B0u;
        // 0x37f8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F8B8u;
    // 0x37f8b8: 0x8f82a8f8  lw          $v0, -0x5708($gp)
    ctx->pc = 0x37f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
    // 0x37f8bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x37f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37f8c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f8c4: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x37F8C4u;
    {
        const bool branch_taken_0x37f8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8C4u;
        // 0x37f8c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8c4) {
            ctx->pc = 0x37F9ACu;
            goto label_37f9ac;
        }
    }
    ctx->pc = 0x37F8CCu;
    // 0x37f8cc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x37F8CCu;
    {
        const bool branch_taken_0x37f8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8CCu;
        // 0x37f8d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8cc) {
            ctx->pc = 0x37F9A0u;
            goto label_37f9a0;
        }
    }
    ctx->pc = 0x37F8D4u;
    // 0x37f8d4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x37f8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x37f8d8: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x37f8d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8dc: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x37f8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x37f8e0: 0x19200013  blez        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F8E0u;
    {
        const bool branch_taken_0x37f8e0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x37F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8E0u;
        // 0x37f8e4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8e0) {
            ctx->pc = 0x37F930u;
            goto label_37f930;
        }
    }
    ctx->pc = 0x37F8E8u;
    // 0x37f8e8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x37F8E8u;
    {
        const bool branch_taken_0x37f8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8E8u;
        // 0x37f8ec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8e8) {
            ctx->pc = 0x37F94Cu;
            goto label_37f94c;
        }
    }
    ctx->pc = 0x37F8F0u;
    // 0x37f8f0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37F8F0u;
    {
        const bool branch_taken_0x37f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f8f0) {
            ctx->pc = 0x37F8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F8F0u;
            // 0x37f8f4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F934u;
            goto label_37f934;
        }
    }
    ctx->pc = 0x37F8F8u;
    // 0x37f8f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37f8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37f8fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x37F8FCu;
    {
        const bool branch_taken_0x37f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f8fc) {
            ctx->pc = 0x37F900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F8FCu;
            // 0x37f900: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F920u;
            goto label_37f920;
        }
    }
    ctx->pc = 0x37F904u;
    // 0x37f904: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37f908: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F908u;
    {
        const bool branch_taken_0x37f908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x37f908) {
            ctx->pc = 0x37F90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F908u;
            // 0x37f90c: 0x24e60014  addiu       $a2, $a3, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F918u;
            goto label_37f918;
        }
    }
    ctx->pc = 0x37F910u;
    // 0x37f910: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x37F910u;
    {
        const bool branch_taken_0x37f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F910u;
        // 0x37f914: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f910) {
            ctx->pc = 0x37F9A4u;
            goto label_37f9a4;
        }
    }
    ctx->pc = 0x37F918u;
label_37f918:
    // 0x37f918: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x37f918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f91c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37f920:
    // 0x37f920: 0x10450020  beq         $v0, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x37F920u;
    {
        const bool branch_taken_0x37f920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x37F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F920u;
        // 0x37f924: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f920) {
            ctx->pc = 0x37F9A4u;
            goto label_37f9a4;
        }
    }
    ctx->pc = 0x37F928u;
    // 0x37f928: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x37f928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x37f92c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x37f92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_37f930:
    // 0x37f930: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37f934:
    // 0x37f934: 0x1045001b  beq         $v0, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x37F934u;
    {
        const bool branch_taken_0x37f934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x37F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F934u;
        // 0x37f938: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f934) {
            ctx->pc = 0x37F9A4u;
            goto label_37f9a4;
        }
    }
    ctx->pc = 0x37F93Cu;
    // 0x37f93c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x37f93cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37f940: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x37f940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x37f944: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x37F944u;
    {
        const bool branch_taken_0x37f944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F944u;
        // 0x37f948: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f944) {
            ctx->pc = 0x37F9A0u;
            goto label_37f9a0;
        }
    }
    ctx->pc = 0x37F94Cu;
label_37f94c:
    // 0x37f94c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37f94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37f950:
    // 0x37f950: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37f954: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F954u;
    {
        const bool branch_taken_0x37f954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x37f954) {
            ctx->pc = 0x37F958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F954u;
            // 0x37f958: 0x8ce20014  lw          $v0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F964u;
            goto label_37f964;
        }
    }
    ctx->pc = 0x37F95Cu;
    // 0x37f95c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37F95Cu;
    {
        const bool branch_taken_0x37f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F95Cu;
        // 0x37f960: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f95c) {
            ctx->pc = 0x37F9A4u;
            goto label_37f9a4;
        }
    }
    ctx->pc = 0x37F964u;
label_37f964:
    // 0x37f964: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37F964u;
    {
        const bool branch_taken_0x37f964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x37F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F964u;
        // 0x37f968: 0x24c30014  addiu       $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f964) {
            ctx->pc = 0x37F984u;
            goto label_37f984;
        }
    }
    ctx->pc = 0x37F96Cu;
    // 0x37f96c: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x37f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x37f970: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F970u;
    {
        const bool branch_taken_0x37f970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x37F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F970u;
        // 0x37f974: 0x24c30028  addiu       $v1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f970) {
            ctx->pc = 0x37F984u;
            goto label_37f984;
        }
    }
    ctx->pc = 0x37F978u;
    // 0x37f978: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x37f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x37f97c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F97Cu;
    {
        const bool branch_taken_0x37f97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x37F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F97Cu;
        // 0x37f980: 0x24c3003c  addiu       $v1, $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f97c) {
            ctx->pc = 0x37F98Cu;
            goto label_37f98c;
        }
    }
    ctx->pc = 0x37F984u;
label_37f984:
    // 0x37f984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37F984u;
    {
        const bool branch_taken_0x37f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F984u;
        // 0x37f988: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f984) {
            ctx->pc = 0x37F9A4u;
            goto label_37f9a4;
        }
    }
    ctx->pc = 0x37F98Cu;
label_37f98c:
    // 0x37f98c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x37f98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x37f990: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x37f990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x37f994: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x37f994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x37f998: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x37F998u;
    {
        const bool branch_taken_0x37f998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F998u;
        // 0x37f99c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f998) {
            ctx->pc = 0x37F950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f950;
        }
    }
    ctx->pc = 0x37F9A0u;
label_37f9a0:
    // 0x37f9a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37f9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f9a4:
    // 0x37f9a4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37F9A4u;
    {
        const bool branch_taken_0x37f9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f9a4) {
            ctx->pc = 0x37F9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F9A4u;
            // 0x37f9a8: 0x8c4a0004  lw          $t2, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F9ACu;
            goto label_37f9ac;
        }
    }
    ctx->pc = 0x37F9ACu;
label_37f9ac:
    // 0x37f9ac: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37F9ACu;
    {
        const bool branch_taken_0x37f9ac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f9ac) {
            ctx->pc = 0x37F9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F9ACu;
            // 0x37f9b0: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F9B4u;
            goto label_37f9b4;
        }
    }
    ctx->pc = 0x37F9B4u;
label_37f9b4:
    // 0x37f9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x37F9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F9B4u;
        // 0x37f9b8: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F9BCu;
    // 0x37f9bc: 0x0  nop
    ctx->pc = 0x37f9bcu;
    // NOP
    ctx->pc = 0x37f9c0u;
}
