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

// Function: sub_00246470
// Address: 0x246470 - 0x246660
void sub_00246470_0x246470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246470_0x246470");
#endif

    switch (ctx->pc) {
        case 0x24648cu: goto label_24648c;
        case 0x2464c4u: goto label_2464c4;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464e4u: goto label_2464e4;
        case 0x246540u: goto label_246540;
        case 0x246554u: goto label_246554;
        case 0x246574u: goto label_246574;
        case 0x246584u: goto label_246584;
        case 0x2465a4u: goto label_2465a4;
        case 0x2465d8u: goto label_2465d8;
        case 0x246608u: goto label_246608;
        case 0x246644u: goto label_246644;
        default: break;
    }

    ctx->pc = 0x246470u;

    // 0x246470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x246478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24647c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246480: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x246480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x246484: 0xc091174  jal         func_2445D0
    ctx->pc = 0x246484u;
    SET_GPR_U32(ctx, 31, 0x24648Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x246484u, 0x24648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24648Cu;
label_24648c:
    // 0x24648c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24648cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x246490: 0x246357c0  addiu       $v1, $v1, 0x57C0
    ctx->pc = 0x246490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22464));
    // 0x246494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246498: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x246498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24649c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2464a0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2464a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2464a4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2464a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2464a8: 0x24a56d20  addiu       $a1, $a1, 0x6D20
    ctx->pc = 0x2464a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27936));
    // 0x2464ac: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2464acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x2464b0: 0x24c60b50  addiu       $a2, $a2, 0xB50
    ctx->pc = 0x2464b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2896));
    // 0x2464b4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2464b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2464b8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2464b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2464bc: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x2464BCu;
    SET_GPR_U32(ctx, 31, 0x2464C4u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x2464BCu, 0x2464C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464C4u;
label_2464c4:
    // 0x2464c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2464c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2464c8: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2464c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2464cc: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2464CCu;
    SET_GPR_U32(ctx, 31, 0x2464D4u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2464CCu, 0x2464D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464D4u;
label_2464d4:
    // 0x2464d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2464d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2464d8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2464d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2464dc: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2464DCu;
    SET_GPR_U32(ctx, 31, 0x2464E4u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2464DCu, 0x2464E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464E4u;
label_2464e4:
    // 0x2464e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2464e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2464e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2464e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2464ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2464ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2464f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2464F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2464F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2464F8u;
    // 0x2464f8: 0x0  nop
    ctx->pc = 0x2464f8u;
    // NOP
    // 0x2464fc: 0x0  nop
    ctx->pc = 0x2464fcu;
    // NOP
    // 0x246500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x246504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x246508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24650c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24650cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x246510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246514: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x246514u;
    {
        const bool branch_taken_0x246514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246514) {
            ctx->pc = 0x2465A4u;
            goto label_2465a4;
        }
    }
    ctx->pc = 0x24651Cu;
    // 0x24651c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24651cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x246520: 0x246357c0  addiu       $v1, $v1, 0x57C0
    ctx->pc = 0x246520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22464));
    // 0x246524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246528: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x246528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24652c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246530: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x246530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x246534: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x246534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246538: 0xc0420a0  jal         func_108280
    ctx->pc = 0x246538u;
    SET_GPR_U32(ctx, 31, 0x246540u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x246538u, 0x246540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246540u;
label_246540:
    // 0x246540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246544: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x246544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x246548: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x246548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24654c: 0xc0420a0  jal         func_108280
    ctx->pc = 0x24654Cu;
    SET_GPR_U32(ctx, 31, 0x246554u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x24654Cu, 0x246554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246554u;
label_246554:
    // 0x246554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246558: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x246558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x24655c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x24655cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x246560: 0x24a50b50  addiu       $a1, $a1, 0xB50
    ctx->pc = 0x246560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2896));
    // 0x246564: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x246564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x246568: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x246568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24656c: 0xc0b9fd4  jal         func_2E7F50
    ctx->pc = 0x24656Cu;
    SET_GPR_U32(ctx, 31, 0x246574u);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x24656Cu, 0x246574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246574u;
label_246574:
    // 0x246574: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x246574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24657c: 0xc091188  jal         func_244620
    ctx->pc = 0x24657Cu;
    SET_GPR_U32(ctx, 31, 0x246584u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x24657Cu, 0x246584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246584u;
label_246584:
    // 0x246584: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x246584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246588: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x246588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24658c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x24658cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x246590: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246590u;
    {
        const bool branch_taken_0x246590 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x246590) {
            ctx->pc = 0x2465A4u;
            goto label_2465a4;
        }
    }
    ctx->pc = 0x246598u;
    // 0x246598: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x246598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24659c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x24659Cu;
    SET_GPR_U32(ctx, 31, 0x2465A4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x24659Cu, 0x2465A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465A4u;
label_2465a4:
    // 0x2465a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2465a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2465a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2465ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2465acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2465b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2465B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2465B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2465B8u;
    // 0x2465b8: 0x0  nop
    ctx->pc = 0x2465b8u;
    // NOP
    // 0x2465bc: 0x0  nop
    ctx->pc = 0x2465bcu;
    // NOP
    // 0x2465c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2465c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2465c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2465c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2465c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2465c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2465cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2465d0: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2465D0u;
    SET_GPR_U32(ctx, 31, 0x2465D8u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2465D0u, 0x2465D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465D8u;
label_2465d8:
    // 0x2465d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2465d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2465dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2465dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2465e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2465E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2465E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2465E8u;
    // 0x2465e8: 0x0  nop
    ctx->pc = 0x2465e8u;
    // NOP
    // 0x2465ec: 0x0  nop
    ctx->pc = 0x2465ecu;
    // NOP
    // 0x2465f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2465f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2465f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2465f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2465f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2465f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2465fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2465fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246600: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x246600u;
    SET_GPR_U32(ctx, 31, 0x246608u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x246600u, 0x246608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246608u;
label_246608:
    // 0x246608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24660c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24660cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x246610: 0x3e00008  jr          $ra
    ctx->pc = 0x246610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246618u;
    // 0x246618: 0x0  nop
    ctx->pc = 0x246618u;
    // NOP
    // 0x24661c: 0x0  nop
    ctx->pc = 0x24661cu;
    // NOP
    // 0x246620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x246624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x246624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24662c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x246630: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x246630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x246634: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x246634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246638: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24663c: 0xc0911dc  jal         func_244770
    ctx->pc = 0x24663Cu;
    SET_GPR_U32(ctx, 31, 0x246644u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x24663Cu, 0x246644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246644u;
label_246644:
    // 0x246644: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x246644u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246648: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24664c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24664cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x246650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246654: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x246654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x246658: 0x3e00008  jr          $ra
    ctx->pc = 0x246658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246660u;
}
