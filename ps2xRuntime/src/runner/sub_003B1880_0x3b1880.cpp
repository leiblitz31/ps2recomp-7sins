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

// Function: sub_003B1880
// Address: 0x3b1880 - 0x3b1928
void sub_003B1880_0x3b1880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1880_0x3b1880");
#endif

    switch (ctx->pc) {
        case 0x3b1880u: goto label_3b1880;
        case 0x3b1884u: goto label_3b1884;
        case 0x3b1888u: goto label_3b1888;
        case 0x3b188cu: goto label_3b188c;
        case 0x3b1890u: goto label_3b1890;
        case 0x3b1894u: goto label_3b1894;
        case 0x3b1898u: goto label_3b1898;
        case 0x3b189cu: goto label_3b189c;
        case 0x3b18a0u: goto label_3b18a0;
        case 0x3b18a4u: goto label_3b18a4;
        case 0x3b18a8u: goto label_3b18a8;
        case 0x3b18acu: goto label_3b18ac;
        case 0x3b18b0u: goto label_3b18b0;
        case 0x3b18b4u: goto label_3b18b4;
        case 0x3b18b8u: goto label_3b18b8;
        case 0x3b18bcu: goto label_3b18bc;
        case 0x3b18c0u: goto label_3b18c0;
        case 0x3b18c4u: goto label_3b18c4;
        case 0x3b18c8u: goto label_3b18c8;
        case 0x3b18ccu: goto label_3b18cc;
        case 0x3b18d0u: goto label_3b18d0;
        case 0x3b18d4u: goto label_3b18d4;
        case 0x3b18d8u: goto label_3b18d8;
        case 0x3b18dcu: goto label_3b18dc;
        case 0x3b18e0u: goto label_3b18e0;
        case 0x3b18e4u: goto label_3b18e4;
        case 0x3b18e8u: goto label_3b18e8;
        case 0x3b18ecu: goto label_3b18ec;
        case 0x3b18f0u: goto label_3b18f0;
        case 0x3b18f4u: goto label_3b18f4;
        case 0x3b18f8u: goto label_3b18f8;
        case 0x3b18fcu: goto label_3b18fc;
        case 0x3b1900u: goto label_3b1900;
        case 0x3b1904u: goto label_3b1904;
        case 0x3b1908u: goto label_3b1908;
        case 0x3b190cu: goto label_3b190c;
        case 0x3b1910u: goto label_3b1910;
        case 0x3b1914u: goto label_3b1914;
        case 0x3b1918u: goto label_3b1918;
        case 0x3b191cu: goto label_3b191c;
        case 0x3b1920u: goto label_3b1920;
        case 0x3b1924u: goto label_3b1924;
        default: break;
    }

    ctx->pc = 0x3b1880u;

label_3b1880:
    // 0x3b1880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b1880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b1884:
    // 0x3b1884: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b1884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3b1888:
    // 0x3b1888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b1888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b188c:
    // 0x3b188c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b188cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1890:
    // 0x3b1890: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b1890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b1894:
    // 0x3b1894: 0x10902b  sltu        $s2, $zero, $s0
    ctx->pc = 0x3b1894u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3b1898:
    // 0x3b1898: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b1898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3b189c:
    // 0x3b189c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_3b18a0:
    if (ctx->pc == 0x3B18A0u) {
        ctx->pc = 0x3B18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B189Cu;
        // 0x3b18a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18A4u;
        goto label_3b18a4;
    }
    ctx->pc = 0x3B189Cu;
    {
        const bool branch_taken_0x3b189c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B189Cu;
        // 0x3b18a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b189c) {
            ctx->pc = 0x3B1908u;
            goto label_3b1908;
        }
    }
    ctx->pc = 0x3B18A4u;
label_3b18a4:
    // 0x3b18a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b18a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b18a8:
    // 0x3b18a8: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x3b18a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_3b18ac:
    // 0x3b18ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b18acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b18b0:
    // 0x3b18b0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3b18b4:
    if (ctx->pc == 0x3B18B4u) {
        ctx->pc = 0x3B18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18B0u;
        // 0x3b18b4: 0x8c530014  lw          $s3, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18B8u;
        goto label_3b18b8;
    }
    ctx->pc = 0x3B18B0u;
    {
        const bool branch_taken_0x3b18b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18B0u;
        // 0x3b18b4: 0x8c530014  lw          $s3, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18b0) {
            ctx->pc = 0x3B18E4u;
            goto label_3b18e4;
        }
    }
    ctx->pc = 0x3B18B8u;
label_3b18b8:
    // 0x3b18b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b18bc:
    // 0x3b18bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b18c0:
    // 0x3b18c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3b18c4:
    if (ctx->pc == 0x3B18C4u) {
        ctx->pc = 0x3B18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18C0u;
        // 0x3b18c4: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18C8u;
        goto label_3b18c8;
    }
    ctx->pc = 0x3B18C0u;
    {
        const bool branch_taken_0x3b18c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18C0u;
        // 0x3b18c4: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18c0) {
            ctx->pc = 0x3B18D8u;
            goto label_3b18d8;
        }
    }
    ctx->pc = 0x3B18C8u;
label_3b18c8:
    // 0x3b18c8: 0xc103684  jal         func_40DA10
label_3b18cc:
    if (ctx->pc == 0x3B18CCu) {
        ctx->pc = 0x3B18D0u;
        goto label_3b18d0;
    }
    ctx->pc = 0x3B18C8u;
    SET_GPR_U32(ctx, 31, 0x3B18D0u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B18C8u, 0x3B18D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B18D0u;
label_3b18d0:
    // 0x3b18d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b18d4:
    if (ctx->pc == 0x3B18D4u) {
        ctx->pc = 0x3B18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18D0u;
        // 0x3b18d4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18D8u;
        goto label_3b18d8;
    }
    ctx->pc = 0x3B18D0u;
    {
        const bool branch_taken_0x3b18d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18D0u;
        // 0x3b18d4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18d0) {
            ctx->pc = 0x3B18E8u;
            goto label_3b18e8;
        }
    }
    ctx->pc = 0x3B18D8u;
label_3b18d8:
    // 0x3b18d8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b18dc:
    // 0x3b18dc: 0x60f809  jalr        $v1
label_3b18e0:
    if (ctx->pc == 0x3B18E0u) {
        ctx->pc = 0x3B18E4u;
        goto label_3b18e4;
    }
    ctx->pc = 0x3B18DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B18E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B18DCu, 0x3B18E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B18E4u;
label_3b18e4:
    // 0x3b18e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b18e8:
    // 0x3b18e8: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x3b18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3b18ec:
    // 0x3b18ec: 0x8c44d3a4  lw          $a0, -0x2C5C($v0)
    ctx->pc = 0x3b18ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955940)));
label_3b18f0:
    // 0x3b18f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b18f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b18f4:
    // 0x3b18f4: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b18f8:
    // 0x3b18f8: 0x40f809  jalr        $v0
label_3b18fc:
    if (ctx->pc == 0x3B18FCu) {
        ctx->pc = 0x3B18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18F8u;
        // 0x3b18fc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1900u;
        goto label_3b1900;
    }
    ctx->pc = 0x3B18F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1900u);
        ctx->pc = 0x3B18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18F8u;
        // 0x3b18fc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B18F8u, 0x3B1900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1900u;
label_3b1900:
    // 0x3b1900: 0xc0ec620  jal         func_3B1880
label_3b1904:
    if (ctx->pc == 0x3B1904u) {
        ctx->pc = 0x3B1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1900u;
        // 0x3b1904: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1908u;
        goto label_3b1908;
    }
    ctx->pc = 0x3B1900u;
    SET_GPR_U32(ctx, 31, 0x3B1908u);
    ctx->pc = 0x3B1904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1900u;
    // 0x3b1904: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    goto label_3b1880;
    ctx->pc = 0x3B1908u;
label_3b1908:
    // 0x3b1908: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b1908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b190c:
    // 0x3b190c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b190cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1910:
    // 0x3b1910: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b1910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1914:
    // 0x3b1914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b1914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1918:
    // 0x3b1918: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b1918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b191c:
    // 0x3b191c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b191cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1920:
    // 0x3b1920: 0x3e00008  jr          $ra
label_3b1924:
    if (ctx->pc == 0x3B1924u) {
        ctx->pc = 0x3B1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1920u;
        // 0x3b1924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1928u;
        goto label_fallthrough_0x3b1920;
    }
    ctx->pc = 0x3B1920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1920u;
        // 0x3b1924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1920:
    ctx->pc = 0x3B1928u;
}
