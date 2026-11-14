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

// Function: sub_003095D8
// Address: 0x3095d8 - 0x309700
void sub_003095D8_0x3095d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003095D8_0x3095d8");
#endif

    switch (ctx->pc) {
        case 0x309608u: goto label_309608;
        case 0x309620u: goto label_309620;
        case 0x309630u: goto label_309630;
        case 0x309680u: goto label_309680;
        case 0x3096dcu: goto label_3096dc;
        default: break;
    }

    ctx->pc = 0x3095d8u;

    // 0x3095d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3095d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3095dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3095dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3095e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3095e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3095e4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3095e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3095e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3095ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3095ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3095f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3095f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3095f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3095f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3095fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3095fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x309600: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x309600u;
    SET_GPR_U32(ctx, 31, 0x309608u);
    ctx->pc = 0x309604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309600u;
    // 0x309604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x309600u, 0x309608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309608u;
label_309608:
    // 0x309608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30960c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30960cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x309610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309614: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x309614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309618: 0xc0c2538  jal         func_3094E0
    ctx->pc = 0x309618u;
    SET_GPR_U32(ctx, 31, 0x309620u);
    ctx->pc = 0x30961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309618u;
    // 0x30961c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3094E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3094E0u, 0x309618u, 0x309620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309620u;
label_309620:
    // 0x309620: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x309620u;
    {
        const bool branch_taken_0x309620 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x309624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309620u;
        // 0x309624: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309620) {
            ctx->pc = 0x309630u;
            goto label_309630;
        }
    }
    ctx->pc = 0x309628u;
    // 0x309628: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x309628u;
    SET_GPR_U32(ctx, 31, 0x309630u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x309628u, 0x309630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309630u;
label_309630:
    // 0x309630: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309634: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x309634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309638: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x309638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30963c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x30963cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x309640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309644: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x309644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30964c: 0x3e00008  jr          $ra
    ctx->pc = 0x30964Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30964Cu;
        // 0x309650: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30964Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309654u;
    // 0x309654: 0x0  nop
    ctx->pc = 0x309654u;
    // NOP
    // 0x309658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x309658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30965c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x30965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x309660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x309664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309668: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x309668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30966c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30966cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309670: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x309674: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x309674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309678: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x309678u;
    SET_GPR_U32(ctx, 31, 0x309680u);
    ctx->pc = 0x30967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309678u;
    // 0x30967c: 0x3c0508ca  lui         $a1, 0x8CA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x309678u, 0x309680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309680u;
label_309680:
    // 0x309680: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x309680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x309684: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x309684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x309688: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x309688u;
    {
        const bool branch_taken_0x309688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x309688) {
            ctx->pc = 0x30968Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309688u;
            // 0x30968c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309690u;
            goto label_309690;
        }
    }
    ctx->pc = 0x309690u;
label_309690:
    // 0x309690: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x309690u;
    {
        const bool branch_taken_0x309690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x309694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309690u;
        // 0x309694: 0x3c0308ca  lui         $v1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2250 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309690) {
            ctx->pc = 0x3096E8u;
            goto label_3096e8;
        }
    }
    ctx->pc = 0x309698u;
    // 0x309698: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x309698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x30969c: 0x430019  multu       $v0, $v1
    ctx->pc = 0x30969cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3096a0: 0x3012  mflo        $a2
    ctx->pc = 0x3096a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3096a4: 0x1810  mfhi        $v1
    ctx->pc = 0x3096a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3096a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3096a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3096ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3096acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3096b0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3096b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3096b4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3096b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3096b8: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x3096b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x3096bc: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x3096bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x3096c0: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3096c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3096c4: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x3096c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x3096c8: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x3096c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x3096cc: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x3096ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x3096d0: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x3096d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3096d4: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3096D4u;
    SET_GPR_U32(ctx, 31, 0x3096DCu);
    ctx->pc = 0x3096D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3096D4u;
    // 0x3096d8: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3096D4u, 0x3096DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3096DCu;
label_3096dc:
    // 0x3096dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3096dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3096e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3096e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3096e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3096e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3096e8:
    // 0x3096e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3096e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3096ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3096ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3096f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3096f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3096f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3096f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3096f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3096F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3096FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096F8u;
        // 0x3096fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3096F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309700u;
}
