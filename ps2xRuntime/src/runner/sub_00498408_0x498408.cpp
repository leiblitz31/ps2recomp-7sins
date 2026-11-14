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

// Function: sub_00498408
// Address: 0x498408 - 0x498798
void sub_00498408_0x498408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498408_0x498408");
#endif

    switch (ctx->pc) {
        case 0x498470u: goto label_498470;
        case 0x4984f0u: goto label_4984f0;
        case 0x498524u: goto label_498524;
        case 0x49854cu: goto label_49854c;
        case 0x498618u: goto label_498618;
        case 0x498660u: goto label_498660;
        case 0x498668u: goto label_498668;
        case 0x498680u: goto label_498680;
        case 0x4986d0u: goto label_4986d0;
        case 0x4986e0u: goto label_4986e0;
        case 0x498748u: goto label_498748;
        case 0x498770u: goto label_498770;
        default: break;
    }

    ctx->pc = 0x498408u;

label_498408:
    // 0x498408: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x498408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x49840c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x49840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x498410: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x498410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x498414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x498414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498418: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x498418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x49841c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x49841cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x498420: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x498420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498424: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x498424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x498428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x498428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49842c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x49842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x498430: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498434: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x498434u;
    {
        const bool branch_taken_0x498434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x498438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498434u;
        // 0x498438: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498434) {
            ctx->pc = 0x498450u;
            goto label_498450;
        }
    }
    ctx->pc = 0x49843Cu;
    // 0x49843c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x49843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x498440: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x498440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498444: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x498444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x498448: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x498448u;
    {
        const bool branch_taken_0x498448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498448u;
        // 0x49844c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498448) {
            ctx->pc = 0x4985BCu;
            goto label_4985bc;
        }
    }
    ctx->pc = 0x498450u;
label_498450:
    // 0x498450: 0x2786c188  addiu       $a2, $gp, -0x3E78
    ctx->pc = 0x498450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951304));
    // 0x498454: 0x8f84c188  lw          $a0, -0x3E78($gp)
    ctx->pc = 0x498454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x498458: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x498458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49845c: 0x1094000e  beq         $a0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x49845Cu;
    {
        const bool branch_taken_0x49845c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x498460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49845Cu;
        // 0x498460: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49845c) {
            ctx->pc = 0x498498u;
            goto label_498498;
        }
    }
    ctx->pc = 0x498464u;
    // 0x498464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x498464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498468: 0x2490fff8  addiu       $s0, $a0, -0x8
    ctx->pc = 0x498468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x49846c: 0x0  nop
    ctx->pc = 0x49846cu;
    // NOP
label_498470:
    // 0x498470: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x498474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x498474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498478: 0x54730005  bnel        $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x498478u;
    {
        const bool branch_taken_0x498478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x498478) {
            ctx->pc = 0x49847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498478u;
            // 0x49847c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498490u;
            goto label_498490;
        }
    }
    ctx->pc = 0x498480u;
    // 0x498480: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x498480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
    // 0x498484: 0x5045003d  beql        $v0, $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x498484u;
    {
        const bool branch_taken_0x498484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x498484) {
            ctx->pc = 0x498488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498484u;
            // 0x498488: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49857Cu;
            goto label_49857c;
        }
    }
    ctx->pc = 0x49848Cu;
    // 0x49848c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_498490:
    // 0x498490: 0x5486fff7  bnel        $a0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x498490u;
    {
        const bool branch_taken_0x498490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x498490) {
            ctx->pc = 0x498494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498490u;
            // 0x498494: 0x2490fff8  addiu       $s0, $a0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498470;
        }
    }
    ctx->pc = 0x498498u;
label_498498:
    // 0x498498: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x498498u;
    {
        const bool branch_taken_0x498498 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x498498) {
            ctx->pc = 0x49849Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498498u;
            // 0x49849c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4984C8u;
            goto label_4984c8;
        }
    }
    ctx->pc = 0x4984A0u;
    // 0x4984a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4984a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4984a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4984a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4984a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4984a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4984ac: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4984acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x4984b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4984b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4984b4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4984b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4984b8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x4984b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x4984bc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x4984bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4984c0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4984c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4984c4: 0x0  nop
    ctx->pc = 0x4984c4u;
    // NOP
label_4984c8:
    // 0x4984c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4984C8u;
    {
        const bool branch_taken_0x4984c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4984CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4984C8u;
        // 0x4984cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4984c8) {
            ctx->pc = 0x4984DCu;
            goto label_4984dc;
        }
    }
    ctx->pc = 0x4984D0u;
    // 0x4984d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4984d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4984d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4984D4u;
    {
        const bool branch_taken_0x4984d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4984D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4984D4u;
        // 0x4984d8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4984d4) {
            ctx->pc = 0x498504u;
            goto label_498504;
        }
    }
    ctx->pc = 0x4984DCu;
label_4984dc:
    // 0x4984dc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4984dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4984e0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4984e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4984e4: 0x248481b8  addiu       $a0, $a0, -0x7E48
    ctx->pc = 0x4984e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934968));
    // 0x4984e8: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4984E8u;
    SET_GPR_U32(ctx, 31, 0x4984F0u);
    ctx->pc = 0x4984ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4984E8u;
    // 0x4984ec: 0x34a5080b  ori         $a1, $a1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4984E8u, 0x4984F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4984F0u;
label_4984f0:
    // 0x4984f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4984f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4984f4: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4984F4u;
    {
        const bool branch_taken_0x4984f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4984f4) {
            ctx->pc = 0x4984F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4984F4u;
            // 0x4984f8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498504u;
            goto label_498504;
        }
    }
    ctx->pc = 0x4984FCu;
    // 0x4984fc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4984FCu;
    {
        const bool branch_taken_0x4984fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4984FCu;
        // 0x498500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4984fc) {
            ctx->pc = 0x4985BCu;
            goto label_4985bc;
        }
    }
    ctx->pc = 0x498504u;
label_498504:
    // 0x498504: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x498504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x498508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49850c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x49850cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x498510: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x498510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x498514: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x498514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498518: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x498518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x49851c: 0xc127276  jal         func_49C9D8
    ctx->pc = 0x49851Cu;
    SET_GPR_U32(ctx, 31, 0x498524u);
    ctx->pc = 0x498520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49851Cu;
    // 0x498520: 0x8e46000c  lw          $a2, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C9D8u, 0x49851Cu, 0x498524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498524u;
label_498524:
    // 0x498524: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x498524u;
    {
        const bool branch_taken_0x498524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498524u;
        // 0x498528: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498524) {
            ctx->pc = 0x498554u;
            goto label_498554;
        }
    }
    ctx->pc = 0x49852Cu;
    // 0x49852c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x49852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x498530: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x498530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x498534: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x498534u;
    {
        const bool branch_taken_0x498534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498534u;
        // 0x498538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498534) {
            ctx->pc = 0x4985BCu;
            goto label_4985bc;
        }
    }
    ctx->pc = 0x49853Cu;
    // 0x49853c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49853cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x498540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x498540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498544: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x498544u;
    SET_GPR_U32(ctx, 31, 0x49854Cu);
    ctx->pc = 0x498548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498544u;
    // 0x498548: 0x248481b8  addiu       $a0, $a0, -0x7E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x498544u, 0x49854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49854Cu;
label_49854c:
    // 0x49854c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x49854Cu;
    {
        const bool branch_taken_0x49854c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49854Cu;
        // 0x498550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49854c) {
            ctx->pc = 0x4985BCu;
            goto label_4985bc;
        }
    }
    ctx->pc = 0x498554u;
label_498554:
    // 0x498554: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x498554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498558: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x498558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x49855c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x49855Cu;
    {
        const bool branch_taken_0x49855c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x498560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49855Cu;
        // 0x498560: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49855c) {
            ctx->pc = 0x49858Cu;
            goto label_49858c;
        }
    }
    ctx->pc = 0x498564u;
    // 0x498564: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x498564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498568: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49856c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x498570: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x498570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x498574u;
    {
        const bool branch_taken_0x498574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498574u;
        // 0x498578: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498574) {
            ctx->pc = 0x498590u;
            goto label_498590;
        }
    }
    ctx->pc = 0x49857Cu;
label_49857c:
    // 0x49857c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49857cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498580: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x498580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x498584: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x498584u;
    {
        const bool branch_taken_0x498584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498584u;
        // 0x498588: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498584) {
            ctx->pc = 0x4985BCu;
            goto label_4985bc;
        }
    }
    ctx->pc = 0x49858Cu;
label_49858c:
    // 0x49858c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x49858cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_498590:
    // 0x498590: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x498590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498594: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x498594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x498598: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49859c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4985a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4985a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4985a4: 0x8f84c188  lw          $a0, -0x3E78($gp)
    ctx->pc = 0x4985a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x4985a8: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x4985a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x4985ac: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4985acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x4985b0: 0x8f83c188  lw          $v1, -0x3E78($gp)
    ctx->pc = 0x4985b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x4985b4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4985b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x4985b8: 0xaf85c188  sw          $a1, -0x3E78($gp)
    ctx->pc = 0x4985b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951304), GPR_U32(ctx, 5));
label_4985bc:
    // 0x4985bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4985bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4985c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4985c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4985c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4985c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4985c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4985c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4985cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4985ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4985d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4985d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4985d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4985D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4985D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985D4u;
        // 0x4985d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4985D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4985DCu;
    // 0x4985dc: 0x0  nop
    ctx->pc = 0x4985dcu;
    // NOP
    // 0x4985e0: 0x2782c188  addiu       $v0, $gp, -0x3E78
    ctx->pc = 0x4985e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951304));
    // 0x4985e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4985e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4985e8: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4985e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x4985ec: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4985ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4985f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4985f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4985f4: 0x250881b8  addiu       $t0, $t0, -0x7E48
    ctx->pc = 0x4985f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934968));
    // 0x4985f8: 0xaf82c18c  sw          $v0, -0x3E74($gp)
    ctx->pc = 0x4985f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951308), GPR_U32(ctx, 2));
    // 0x4985fc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4985fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x498600: 0xaf82c188  sw          $v0, -0x3E78($gp)
    ctx->pc = 0x498600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951304), GPR_U32(ctx, 2));
    // 0x498604: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x498604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x498608: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x498608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x49860c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49860cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498610: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x498610u;
    SET_GPR_U32(ctx, 31, 0x498618u);
    ctx->pc = 0x498614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498610u;
    // 0x498614: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x498610u, 0x498618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498618u;
label_498618:
    // 0x498618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x498618u;
    {
        const bool branch_taken_0x498618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498618u;
        // 0x49861c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498618) {
            ctx->pc = 0x49862Cu;
            goto label_49862c;
        }
    }
    ctx->pc = 0x498620u;
    // 0x498620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x498620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x498624u;
    {
        const bool branch_taken_0x498624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498624u;
        // 0x498628: 0xaf83b7a8  sw          $v1, -0x4858($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498624) {
            ctx->pc = 0x498630u;
            goto label_498630;
        }
    }
    ctx->pc = 0x49862Cu;
label_49862c:
    // 0x49862c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49862cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498630:
    // 0x498630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498634: 0x3e00008  jr          $ra
    ctx->pc = 0x498634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498634u;
        // 0x498638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49863Cu;
    // 0x49863c: 0x0  nop
    ctx->pc = 0x49863cu;
    // NOP
    // 0x498640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x498644: 0x8f84c188  lw          $a0, -0x3E78($gp)
    ctx->pc = 0x498644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x498648: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x498648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x49864c: 0x2790c188  addiu       $s0, $gp, -0x3E78
    ctx->pc = 0x49864cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951304));
    // 0x498650: 0x10900008  beq         $a0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x498650u;
    {
        const bool branch_taken_0x498650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x498654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498650u;
        // 0x498654: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498650) {
            ctx->pc = 0x498674u;
            goto label_498674;
        }
    }
    ctx->pc = 0x498658u;
    // 0x498658: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x498658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x49865c: 0x0  nop
    ctx->pc = 0x49865cu;
    // NOP
label_498660:
    // 0x498660: 0xc1262a2  jal         func_498A88
    ctx->pc = 0x498660u;
    SET_GPR_U32(ctx, 31, 0x498668u);
    ctx->pc = 0x498664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498660u;
    // 0x498664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498A88u, 0x498660u, 0x498668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498668u;
label_498668:
    // 0x498668: 0x8f84c188  lw          $a0, -0x3E78($gp)
    ctx->pc = 0x498668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x49866c: 0x5490fffc  bnel        $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x49866Cu;
    {
        const bool branch_taken_0x49866c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x49866c) {
            ctx->pc = 0x498670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49866Cu;
            // 0x498670: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498660;
        }
    }
    ctx->pc = 0x498674u;
label_498674:
    // 0x498674: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x498674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x498678: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x498678u;
    SET_GPR_U32(ctx, 31, 0x498680u);
    ctx->pc = 0x49867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498678u;
    // 0x49867c: 0x248481b8  addiu       $a0, $a0, -0x7E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x498678u, 0x498680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498680u;
label_498680:
    // 0x498680: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x498680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498688: 0xaf80b7a8  sw          $zero, -0x4858($gp)
    ctx->pc = 0x498688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948776), GPR_U32(ctx, 0));
    // 0x49868c: 0x3e00008  jr          $ra
    ctx->pc = 0x49868Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49868Cu;
        // 0x498690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49868Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498694u;
    // 0x498694: 0x0  nop
    ctx->pc = 0x498694u;
    // NOP
    // 0x498698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x498698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49869c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x49869cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4986a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4986a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4986a4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4986A4u;
    {
        const bool branch_taken_0x4986a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4986A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4986A4u;
        // 0x4986a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4986a4) {
            ctx->pc = 0x4986B8u;
            goto label_4986b8;
        }
    }
    ctx->pc = 0x4986ACu;
    // 0x4986ac: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4986acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4986b0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x4986b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x4986b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4986b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4986b8:
    // 0x4986b8: 0x278bc188  addiu       $t3, $gp, -0x3E78
    ctx->pc = 0x4986b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951304));
    // 0x4986bc: 0x8f8cc188  lw          $t4, -0x3E78($gp)
    ctx->pc = 0x4986bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x4986c0: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x4986c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4986c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4986c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4986c8: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x4986c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4986cc: 0x0  nop
    ctx->pc = 0x4986ccu;
    // NOP
label_4986d0:
    // 0x4986d0: 0x10ed0015  beq         $a3, $t5, . + 4 + (0x15 << 2)
    ctx->pc = 0x4986D0u;
    {
        const bool branch_taken_0x4986d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        ctx->pc = 0x4986D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4986D0u;
        // 0x4986d4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4986d0) {
            ctx->pc = 0x498728u;
            goto label_498728;
        }
    }
    ctx->pc = 0x4986D8u;
    // 0x4986d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4986d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4986dc: 0x8ce2fff8  lw          $v0, -0x8($a3)
    ctx->pc = 0x4986dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_4986e0:
    // 0x4986e0: 0x144a000d  bne         $v0, $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x4986E0u;
    {
        const bool branch_taken_0x4986e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x4986E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4986E0u;
        // 0x4986e4: 0x24e3fff8  addiu       $v1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4986e0) {
            ctx->pc = 0x498718u;
            goto label_498718;
        }
    }
    ctx->pc = 0x4986E8u;
    // 0x4986e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4986e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4986ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4986ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4986f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4986f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4986f4: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4986F4u;
    {
        const bool branch_taken_0x4986f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4986f4) {
            ctx->pc = 0x4986F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4986F4u;
            // 0x4986f8: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498708u;
            goto label_498708;
        }
    }
    ctx->pc = 0x4986FCu;
    // 0x4986fc: 0x55090007  bnel        $t0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4986FCu;
    {
        const bool branch_taken_0x4986fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x4986fc) {
            ctx->pc = 0x498700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4986FCu;
            // 0x498700: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49871Cu;
            goto label_49871c;
        }
    }
    ctx->pc = 0x498704u;
    // 0x498704: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x498704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_498708:
    // 0x498708: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x498708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49870c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x498710: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x498710u;
    {
        const bool branch_taken_0x498710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498710u;
        // 0x498714: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498710) {
            ctx->pc = 0x498748u;
            goto label_498748;
        }
    }
    ctx->pc = 0x498718u;
label_498718:
    // 0x498718: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x498718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49871c:
    // 0x49871c: 0x54ebfff0  bnel        $a3, $t3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x49871Cu;
    {
        const bool branch_taken_0x49871c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x49871c) {
            ctx->pc = 0x498720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49871Cu;
            // 0x498720: 0x8ce2fff8  lw          $v0, -0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4986E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4986e0;
        }
    }
    ctx->pc = 0x498724u;
    // 0x498724: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x498724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_498728:
    // 0x498728: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x498728u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x49872c: 0x2d030002  sltiu       $v1, $t0, 0x2
    ctx->pc = 0x49872cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x498730: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x498730u;
    {
        const bool branch_taken_0x498730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x498730) {
            ctx->pc = 0x498734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498730u;
            // 0x498734: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4986D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4986d0;
        }
    }
    ctx->pc = 0x498738u;
    // 0x498738: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x498738u;
    {
        const bool branch_taken_0x498738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498738u;
        // 0x49873c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498738) {
            ctx->pc = 0x498748u;
            goto label_498748;
        }
    }
    ctx->pc = 0x498740u;
    // 0x498740: 0xc126102  jal         func_498408
    ctx->pc = 0x498740u;
    SET_GPR_U32(ctx, 31, 0x498748u);
    ctx->pc = 0x498408u;
    goto label_498408;
    ctx->pc = 0x498748u;
label_498748:
    // 0x498748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49874c: 0x3e00008  jr          $ra
    ctx->pc = 0x49874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49874Cu;
        // 0x498750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498754u;
    // 0x498754: 0x0  nop
    ctx->pc = 0x498754u;
    // NOP
    // 0x498758: 0x8f85c188  lw          $a1, -0x3E78($gp)
    ctx->pc = 0x498758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x49875c: 0x2787c188  addiu       $a3, $gp, -0x3E78
    ctx->pc = 0x49875cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951304));
    // 0x498760: 0x10a7000b  beq         $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x498760u;
    {
        const bool branch_taken_0x498760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x498760) {
            ctx->pc = 0x498790u;
            goto label_498790;
        }
    }
    ctx->pc = 0x498768u;
    // 0x498768: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x498768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x49876c: 0x0  nop
    ctx->pc = 0x49876cu;
    // NOP
label_498770:
    // 0x498770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498774: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x498774u;
    {
        const bool branch_taken_0x498774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x498778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498774u;
        // 0x498778: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498774) {
            ctx->pc = 0x498784u;
            goto label_498784;
        }
    }
    ctx->pc = 0x49877Cu;
    // 0x49877c: 0x3e00008  jr          $ra
    ctx->pc = 0x49877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49877Cu;
        // 0x498780: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49877Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498784u;
label_498784:
    // 0x498784: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x498784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498788: 0x54a7fff9  bnel        $a1, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x498788u;
    {
        const bool branch_taken_0x498788 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x498788) {
            ctx->pc = 0x49878Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498788u;
            // 0x49878c: 0x8ca3fff8  lw          $v1, -0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498770;
        }
    }
    ctx->pc = 0x498790u;
label_498790:
    // 0x498790: 0x3e00008  jr          $ra
    ctx->pc = 0x498790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498790u;
        // 0x498794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498798u;
}
