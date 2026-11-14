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

// Function: sub_002AA660
// Address: 0x2aa660 - 0x2aa7b0
void sub_002AA660_0x2aa660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA660_0x2aa660");
#endif

    switch (ctx->pc) {
        case 0x2aa678u: goto label_2aa678;
        case 0x2aa6dcu: goto label_2aa6dc;
        case 0x2aa6fcu: goto label_2aa6fc;
        case 0x2aa728u: goto label_2aa728;
        case 0x2aa76cu: goto label_2aa76c;
        case 0x2aa77cu: goto label_2aa77c;
        case 0x2aa794u: goto label_2aa794;
        default: break;
    }

    ctx->pc = 0x2aa660u;

    // 0x2aa660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aa668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aa66c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa670: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2AA670u;
    SET_GPR_U32(ctx, 31, 0x2AA678u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2AA670u, 0x2AA678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA678u;
label_2aa678:
    // 0x2aa678: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2aa678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2aa67c: 0x24636440  addiu       $v1, $v1, 0x6440
    ctx->pc = 0x2aa67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25664));
    // 0x2aa680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2aa684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2aa688: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa690: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa694: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA69Cu;
    // 0x2aa69c: 0x0  nop
    ctx->pc = 0x2aa69cu;
    // NOP
    // 0x2aa6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aa6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa6a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aa6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aa6ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2aa6acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2aa6b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa6b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AA6B4u;
    {
        const bool branch_taken_0x2aa6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa6b4) {
            ctx->pc = 0x2AA6FCu;
            goto label_2aa6fc;
        }
    }
    ctx->pc = 0x2AA6BCu;
    // 0x2aa6bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2aa6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2aa6c0: 0x24636440  addiu       $v1, $v1, 0x6440
    ctx->pc = 0x2aa6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25664));
    // 0x2aa6c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa6c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2aa6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2aa6cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6d4: 0xc09d150  jal         func_274540
    ctx->pc = 0x2AA6D4u;
    SET_GPR_U32(ctx, 31, 0x2AA6DCu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2AA6D4u, 0x2AA6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6DCu;
label_2aa6dc:
    // 0x2aa6dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2aa6dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa6e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2aa6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2aa6e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aa6e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2aa6e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA6E8u;
    {
        const bool branch_taken_0x2aa6e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aa6e8) {
            ctx->pc = 0x2AA6FCu;
            goto label_2aa6fc;
        }
    }
    ctx->pc = 0x2AA6F0u;
    // 0x2aa6f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa6f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2AA6F4u;
    SET_GPR_U32(ctx, 31, 0x2AA6FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AA6F4u, 0x2AA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6FCu;
label_2aa6fc:
    // 0x2aa6fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa704: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2aa704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa708: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA710u;
    // 0x2aa710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aa718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aa71c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa720: 0xc09d248  jal         func_274920
    ctx->pc = 0x2AA720u;
    SET_GPR_U32(ctx, 31, 0x2AA728u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2AA720u, 0x2AA728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA728u;
label_2aa728:
    // 0x2aa728: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aa728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa72c: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AA72Cu;
    {
        const bool branch_taken_0x2aa72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa72c) {
            ctx->pc = 0x2AA784u;
            goto label_2aa784;
        }
    }
    ctx->pc = 0x2AA734u;
    // 0x2aa734: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aa734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa738: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AA738u;
    {
        const bool branch_taken_0x2aa738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa738) {
            ctx->pc = 0x2AA794u;
            goto label_2aa794;
        }
    }
    ctx->pc = 0x2AA740u;
    // 0x2aa740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aa740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa744: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA744u;
    {
        const bool branch_taken_0x2aa744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa744) {
            ctx->pc = 0x2AA754u;
            goto label_2aa754;
        }
    }
    ctx->pc = 0x2AA74Cu;
    // 0x2aa74c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2AA74Cu;
    {
        const bool branch_taken_0x2aa74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa74c) {
            ctx->pc = 0x2AA794u;
            goto label_2aa794;
        }
    }
    ctx->pc = 0x2AA754u;
label_2aa754:
    // 0x2aa754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa758: 0x8f84bb74  lw          $a0, -0x448C($gp)
    ctx->pc = 0x2aa758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949748)));
    // 0x2aa75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa760: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x2aa760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2aa764: 0xc085a90  jal         func_216A40
    ctx->pc = 0x2AA764u;
    SET_GPR_U32(ctx, 31, 0x2AA76Cu);
    ctx->pc = 0x216A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216A40u, 0x2AA764u, 0x2AA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA76Cu;
label_2aa76c:
    // 0x2aa76c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa770: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2aa770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa774: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AA774u;
    SET_GPR_U32(ctx, 31, 0x2AA77Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AA774u, 0x2AA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA77Cu;
label_2aa77c:
    // 0x2aa77c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA77Cu;
    {
        const bool branch_taken_0x2aa77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa77c) {
            ctx->pc = 0x2AA794u;
            goto label_2aa794;
        }
    }
    ctx->pc = 0x2AA784u;
label_2aa784:
    // 0x2aa784: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa788: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2aa788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aa78c: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AA78Cu;
    SET_GPR_U32(ctx, 31, 0x2AA794u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AA78Cu, 0x2AA794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA794u;
label_2aa794:
    // 0x2aa794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa798: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa79c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA7A4u;
    // 0x2aa7a4: 0x0  nop
    ctx->pc = 0x2aa7a4u;
    // NOP
    // 0x2aa7a8: 0x0  nop
    ctx->pc = 0x2aa7a8u;
    // NOP
    // 0x2aa7ac: 0x0  nop
    ctx->pc = 0x2aa7acu;
    // NOP
    ctx->pc = 0x2aa7b0u;
}
