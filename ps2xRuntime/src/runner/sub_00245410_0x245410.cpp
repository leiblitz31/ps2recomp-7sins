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

// Function: sub_00245410
// Address: 0x245410 - 0x2455d0
void sub_00245410_0x245410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245410_0x245410");
#endif

    switch (ctx->pc) {
        case 0x245450u: goto label_245450;
        case 0x245464u: goto label_245464;
        case 0x245484u: goto label_245484;
        case 0x245494u: goto label_245494;
        case 0x2454b4u: goto label_2454b4;
        case 0x2454e8u: goto label_2454e8;
        case 0x24551cu: goto label_24551c;
        case 0x24552cu: goto label_24552c;
        case 0x245558u: goto label_245558;
        case 0x245590u: goto label_245590;
        case 0x2455b8u: goto label_2455b8;
        default: break;
    }

    ctx->pc = 0x245410u;

    // 0x245410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24541c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24541cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x245420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245424: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x245424u;
    {
        const bool branch_taken_0x245424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245424) {
            ctx->pc = 0x2454B4u;
            goto label_2454b4;
        }
    }
    ctx->pc = 0x24542Cu;
    // 0x24542c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24542cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x245430: 0x246357a0  addiu       $v1, $v1, 0x57A0
    ctx->pc = 0x245430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22432));
    // 0x245434: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245438: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x245438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24543c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245440: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245444: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x245444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x245448: 0xc091424  jal         func_245090
    ctx->pc = 0x245448u;
    SET_GPR_U32(ctx, 31, 0x245450u);
    ctx->pc = 0x245090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245090u, 0x245448u, 0x245450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245450u;
label_245450:
    // 0x245450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245454: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x245454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x245458: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x245458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24545c: 0xc0420a0  jal         func_108280
    ctx->pc = 0x24545Cu;
    SET_GPR_U32(ctx, 31, 0x245464u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x24545Cu, 0x245464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245464u;
label_245464:
    // 0x245464: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245468: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x245468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x24546c: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x24546cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x245470: 0x24a58280  addiu       $a1, $a1, -0x7D80
    ctx->pc = 0x245470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935168));
    // 0x245474: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x245474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x245478: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x245478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x24547c: 0xc0b9fd4  jal         func_2E7F50
    ctx->pc = 0x24547Cu;
    SET_GPR_U32(ctx, 31, 0x245484u);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x24547Cu, 0x245484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245484u;
label_245484:
    // 0x245484: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24548c: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x24548Cu;
    SET_GPR_U32(ctx, 31, 0x245494u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x24548Cu, 0x245494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245494u;
label_245494:
    // 0x245494: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x245494u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245498: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x245498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24549c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x24549cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2454a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2454A0u;
    {
        const bool branch_taken_0x2454a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2454a0) {
            ctx->pc = 0x2454B4u;
            goto label_2454b4;
        }
    }
    ctx->pc = 0x2454A8u;
    // 0x2454a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2454a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2454ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2454ACu;
    SET_GPR_U32(ctx, 31, 0x2454B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2454ACu, 0x2454B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454B4u;
label_2454b4:
    // 0x2454b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2454b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2454b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2454b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2454bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2454bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2454c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2454C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2454C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2454C8u;
    // 0x2454c8: 0x0  nop
    ctx->pc = 0x2454c8u;
    // NOP
    // 0x2454cc: 0x0  nop
    ctx->pc = 0x2454ccu;
    // NOP
    // 0x2454d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2454d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2454d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2454d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2454d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2454d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2454dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2454dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2454e0: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x2454E0u;
    SET_GPR_U32(ctx, 31, 0x2454E8u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x2454E0u, 0x2454E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454E8u;
label_2454e8:
    // 0x2454e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2454e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2454ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2454ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2454f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2454F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2454F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2454F8u;
    // 0x2454f8: 0x0  nop
    ctx->pc = 0x2454f8u;
    // NOP
    // 0x2454fc: 0x0  nop
    ctx->pc = 0x2454fcu;
    // NOP
    // 0x245500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24550c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245510: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x245510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x245514: 0xc040e70  jal         func_1039C0
    ctx->pc = 0x245514u;
    SET_GPR_U32(ctx, 31, 0x24551Cu);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x245514u, 0x24551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24551Cu;
label_24551c:
    // 0x24551c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24551cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245520: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245524: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x245524u;
    SET_GPR_U32(ctx, 31, 0x24552Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x245524u, 0x24552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24552Cu;
label_24552c:
    // 0x24552c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245530: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x245530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x245534: 0x3e00008  jr          $ra
    ctx->pc = 0x245534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24553Cu;
    // 0x24553c: 0x0  nop
    ctx->pc = 0x24553cu;
    // NOP
    // 0x245540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24554c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24554cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245550: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x245550u;
    SET_GPR_U32(ctx, 31, 0x245558u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x245550u, 0x245558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245558u;
label_245558:
    // 0x245558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24555c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24555cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x245560: 0x3e00008  jr          $ra
    ctx->pc = 0x245560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245568u;
    // 0x245568: 0x0  nop
    ctx->pc = 0x245568u;
    // NOP
    // 0x24556c: 0x0  nop
    ctx->pc = 0x24556cu;
    // NOP
    // 0x245570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24557c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24557cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x245580: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245584: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x245584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245588: 0xc08ec68  jal         func_23B1A0
    ctx->pc = 0x245588u;
    SET_GPR_U32(ctx, 31, 0x245590u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x245588u, 0x245590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245590u;
label_245590:
    // 0x245590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245594: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x245594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x245598: 0x3e00008  jr          $ra
    ctx->pc = 0x245598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2455A0u;
    // 0x2455a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2455a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2455a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2455a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2455a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2455a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2455ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2455acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2455b0: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x2455B0u;
    SET_GPR_U32(ctx, 31, 0x2455B8u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x2455B0u, 0x2455B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455B8u;
label_2455b8:
    // 0x2455b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2455b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2455bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2455bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2455c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2455C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2455C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2455C8u;
    // 0x2455c8: 0x0  nop
    ctx->pc = 0x2455c8u;
    // NOP
    // 0x2455cc: 0x0  nop
    ctx->pc = 0x2455ccu;
    // NOP
    ctx->pc = 0x2455d0u;
}
