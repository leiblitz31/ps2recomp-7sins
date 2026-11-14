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

// Function: sub_00403410
// Address: 0x403410 - 0x4035c8
void sub_00403410_0x403410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403410_0x403410");
#endif

    switch (ctx->pc) {
        case 0x40343cu: goto label_40343c;
        case 0x40344cu: goto label_40344c;
        case 0x403454u: goto label_403454;
        case 0x403460u: goto label_403460;
        case 0x4034b8u: goto label_4034b8;
        case 0x4034c8u: goto label_4034c8;
        case 0x4034d0u: goto label_4034d0;
        case 0x4034e0u: goto label_4034e0;
        case 0x4034f4u: goto label_4034f4;
        case 0x403504u: goto label_403504;
        case 0x40350cu: goto label_40350c;
        case 0x403524u: goto label_403524;
        case 0x403534u: goto label_403534;
        case 0x40353cu: goto label_40353c;
        case 0x403554u: goto label_403554;
        case 0x403564u: goto label_403564;
        case 0x4035b0u: goto label_4035b0;
        default: break;
    }

    ctx->pc = 0x403410u;

    // 0x403410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x403410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x403414: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x403414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x403418: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x403418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x40341c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40341cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403420: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x403420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x403424: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x403424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403428: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x403428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x40342c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403430: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x403430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x403434: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x403434u;
    SET_GPR_U32(ctx, 31, 0x40343Cu);
    ctx->pc = 0x403438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403434u;
    // 0x403438: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x403434u, 0x40343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40343Cu;
label_40343c:
    // 0x40343c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x40343cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x403440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x403440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403444: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x403444u;
    SET_GPR_U32(ctx, 31, 0x40344Cu);
    ctx->pc = 0x403448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403444u;
    // 0x403448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x403444u, 0x40344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40344Cu;
label_40344c:
    // 0x40344c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x40344Cu;
    SET_GPR_U32(ctx, 31, 0x403454u);
    ctx->pc = 0x403450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40344Cu;
    // 0x403450: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x40344Cu, 0x403454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403454u;
label_403454:
    // 0x403454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x403454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403458: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x403458u;
    SET_GPR_U32(ctx, 31, 0x403460u);
    ctx->pc = 0x40345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403458u;
    // 0x40345c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x403458u, 0x403460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403460u;
label_403460:
    // 0x403460: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x403460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x403464: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x403464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x403468: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x403468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x40346c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403470: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x403470u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x403474: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x403474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403478: 0x101a3e  dsrl32      $v1, $s0, 8
    ctx->pc = 0x403478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (32 + 8));
    // 0x40347c: 0x10383e  dsrl32      $a3, $s0, 0
    ctx->pc = 0x40347cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x403480: 0x10143e  dsrl32      $v0, $s0, 16
    ctx->pc = 0x403480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> (32 + 16));
    // 0x403484: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x403484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x403488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x403488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40348c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x40348cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x403490: 0x10863e  dsrl32      $s0, $s0, 24
    ctx->pc = 0x403490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 24));
    // 0x403494: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x403494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x403498: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x403498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x40349c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x40349cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4034a0: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x4034a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x4034a4: 0xa3a20041  sb          $v0, 0x41($sp)
    ctx->pc = 0x4034a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x4034a8: 0xa3b00040  sb          $s0, 0x40($sp)
    ctx->pc = 0x4034a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 16));
    // 0x4034ac: 0xa3a30042  sb          $v1, 0x42($sp)
    ctx->pc = 0x4034acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x4034b0: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4034B0u;
    SET_GPR_U32(ctx, 31, 0x4034B8u);
    ctx->pc = 0x4034B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4034B0u;
    // 0x4034b4: 0xa3a70043  sb          $a3, 0x43($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4034B0u, 0x4034B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4034B8u;
label_4034b8:
    // 0x4034b8: 0x2785ac98  addiu       $a1, $gp, -0x5368
    ctx->pc = 0x4034b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945944));
    // 0x4034bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4034bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4034c0: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4034C0u;
    SET_GPR_U32(ctx, 31, 0x4034C8u);
    ctx->pc = 0x4034C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4034C0u;
    // 0x4034c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4034C0u, 0x4034C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4034C8u;
label_4034c8:
    // 0x4034c8: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x4034C8u;
    SET_GPR_U32(ctx, 31, 0x4034D0u);
    ctx->pc = 0x4034CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4034C8u;
    // 0x4034cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x4034C8u, 0x4034D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4034D0u;
label_4034d0:
    // 0x4034d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4034d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034d4: 0x2785ac98  addiu       $a1, $gp, -0x5368
    ctx->pc = 0x4034d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945944));
    // 0x4034d8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4034D8u;
    SET_GPR_U32(ctx, 31, 0x4034E0u);
    ctx->pc = 0x4034DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4034D8u;
    // 0x4034dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4034D8u, 0x4034E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4034E0u;
label_4034e0:
    // 0x4034e0: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x4034e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4034e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4034e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4034e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034ec: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4034ECu;
    SET_GPR_U32(ctx, 31, 0x4034F4u);
    ctx->pc = 0x4034F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4034ECu;
    // 0x4034f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4034ECu, 0x4034F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4034F4u;
label_4034f4:
    // 0x4034f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4034f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4034f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034fc: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4034FCu;
    SET_GPR_U32(ctx, 31, 0x403504u);
    ctx->pc = 0x403500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4034FCu;
    // 0x403500: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4034FCu, 0x403504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403504u;
label_403504:
    // 0x403504: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x403504u;
    SET_GPR_U32(ctx, 31, 0x40350Cu);
    ctx->pc = 0x403508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403504u;
    // 0x403508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x403504u, 0x40350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40350Cu;
label_40350c:
    // 0x40350c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x40350cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x403510: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x403510u;
    {
        const bool branch_taken_0x403510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x403514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403510u;
        // 0x403514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403510) {
            ctx->pc = 0x403534u;
            goto label_403534;
        }
    }
    ctx->pc = 0x403518u;
    // 0x403518: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x403518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40351c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x40351Cu;
    SET_GPR_U32(ctx, 31, 0x403524u);
    ctx->pc = 0x403520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40351Cu;
    // 0x403520: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x40351Cu, 0x403524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403524u;
label_403524:
    // 0x403524: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x403524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x403528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40352c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40352Cu;
    SET_GPR_U32(ctx, 31, 0x403534u);
    ctx->pc = 0x403530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40352Cu;
    // 0x403530: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40352Cu, 0x403534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403534u;
label_403534:
    // 0x403534: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x403534u;
    SET_GPR_U32(ctx, 31, 0x40353Cu);
    ctx->pc = 0x403538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403534u;
    // 0x403538: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x403534u, 0x40353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40353Cu;
label_40353c:
    // 0x40353c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40353cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403540: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x403540u;
    {
        const bool branch_taken_0x403540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x403544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403540u;
        // 0x403544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403540) {
            ctx->pc = 0x403564u;
            goto label_403564;
        }
    }
    ctx->pc = 0x403548u;
    // 0x403548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x403548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40354c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x40354Cu;
    SET_GPR_U32(ctx, 31, 0x403554u);
    ctx->pc = 0x403550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40354Cu;
    // 0x403550: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x40354Cu, 0x403554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403554u;
label_403554:
    // 0x403554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x403554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403558: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x403558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40355c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40355Cu;
    SET_GPR_U32(ctx, 31, 0x403564u);
    ctx->pc = 0x403560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40355Cu;
    // 0x403560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40355Cu, 0x403564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403564u;
label_403564:
    // 0x403564: 0xde2201f0  ld          $v0, 0x1F0($s1)
    ctx->pc = 0x403564u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x403568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x403568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40356c: 0x922601f3  lbu         $a2, 0x1F3($s1)
    ctx->pc = 0x40356cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 499)));
    // 0x403570: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x403570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x403574: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x403574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x403578: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x403578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x40357c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x40357cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x403580: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x403580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x403584: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x403584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x403588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x403588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40358c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x40358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x403590: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x403590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x403594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x403594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x403598: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x403598u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x40359c: 0xa3a30051  sb          $v1, 0x51($sp)
    ctx->pc = 0x40359cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x4035a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4035a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4035a4: 0xa3a70052  sb          $a3, 0x52($sp)
    ctx->pc = 0x4035a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 7));
    // 0x4035a8: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4035A8u;
    SET_GPR_U32(ctx, 31, 0x4035B0u);
    ctx->pc = 0x4035ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4035A8u;
    // 0x4035ac: 0xa3a20053  sb          $v0, 0x53($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 83), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4035A8u, 0x4035B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4035B0u;
label_4035b0:
    // 0x4035b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4035b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4035b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4035b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4035b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4035b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4035bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4035bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4035c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4035C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4035C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4035C0u;
        // 0x4035c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4035C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4035C8u;
}
