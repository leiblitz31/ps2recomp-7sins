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

// Function: sub_002F05D0
// Address: 0x2f05d0 - 0x2f07b8
void sub_002F05D0_0x2f05d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F05D0_0x2f05d0");
#endif

    switch (ctx->pc) {
        case 0x2f0634u: goto label_2f0634;
        case 0x2f066cu: goto label_2f066c;
        case 0x2f0694u: goto label_2f0694;
        case 0x2f0744u: goto label_2f0744;
        case 0x2f0754u: goto label_2f0754;
        case 0x2f07a0u: goto label_2f07a0;
        default: break;
    }

    ctx->pc = 0x2f05d0u;

    // 0x2f05d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f05d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f05d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f05d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f05d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f05dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f05dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f05e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f05e4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f05e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05e8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f05e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f05ec: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2f05ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2f05f0: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x2f05f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f05f4: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x2f05f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x2f05f8: 0xf11024  and         $v0, $a3, $s1
    ctx->pc = 0x2f05f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x2f05fc: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x2f05fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2f0600: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F0600u;
    {
        const bool branch_taken_0x2f0600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0600u;
        // 0x2f0604: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0600) {
            ctx->pc = 0x2F0678u;
            goto label_2f0678;
        }
    }
    ctx->pc = 0x2F0608u;
    // 0x2f0608: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2f0608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2f060c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f060cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f0610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f0614: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2f0614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2f0618: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2f0618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2f061c: 0x50600061  beql        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x2F061Cu;
    {
        const bool branch_taken_0x2f061c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f061c) {
            ctx->pc = 0x2F0620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F061Cu;
            // 0x2f0620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F07A4u;
            goto label_2f07a4;
        }
    }
    ctx->pc = 0x2F0624u;
    // 0x2f0624: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x2f0624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x2f0628: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2f0628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2f062c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F062Cu;
    SET_GPR_U32(ctx, 31, 0x2F0634u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F062Cu, 0x2F0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0634u;
label_2f0634:
    // 0x2f0634: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f0634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0638: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x2f0638u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f063c: 0xf11824  and         $v1, $a3, $s1
    ctx->pc = 0x2f063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x2f0640: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f0640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0644: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x2f0644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x2f0648: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x2f0648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x2f064c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2f064cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f0650: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0650u;
    {
        const bool branch_taken_0x2f0650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0650u;
        // 0x2f0654: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0650) {
            ctx->pc = 0x2F0678u;
            goto label_2f0678;
        }
    }
    ctx->pc = 0x2F0658u;
    // 0x2f0658: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f0658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f065c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2f065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0660: 0xdc459288  ld          $a1, -0x6D78($v0)
    ctx->pc = 0x2f0660u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5F9288u));
    // 0x2f0664: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F0664u;
    SET_GPR_U32(ctx, 31, 0x2F066Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F0664u, 0x2F066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F066Cu;
label_2f066c:
    // 0x2f066c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2F066Cu;
    {
        const bool branch_taken_0x2f066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F066Cu;
        // 0x2f0670: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f066c) {
            ctx->pc = 0x2F07A4u;
            goto label_2f07a4;
        }
    }
    ctx->pc = 0x2F0674u;
    // 0x2f0674: 0x0  nop
    ctx->pc = 0x2f0674u;
    // NOP
label_2f0678:
    // 0x2f0678: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x2f0678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x2f067c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F067Cu;
    {
        const bool branch_taken_0x2f067c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F067Cu;
        // 0x2f0680: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f067c) {
            ctx->pc = 0x2F06A0u;
            goto label_2f06a0;
        }
    }
    ctx->pc = 0x2F0684u;
    // 0x2f0684: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2f0684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0688: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f0688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f068c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F068Cu;
    SET_GPR_U32(ctx, 31, 0x2F0694u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F068Cu, 0x2F0694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0694u;
label_2f0694:
    // 0x2f0694: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2F0694u;
    {
        const bool branch_taken_0x2f0694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0694u;
        // 0x2f0698: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0694) {
            ctx->pc = 0x2F07A4u;
            goto label_2f07a4;
        }
    }
    ctx->pc = 0x2F069Cu;
    // 0x2f069c: 0x0  nop
    ctx->pc = 0x2f069cu;
    // NOP
label_2f06a0:
    // 0x2f06a0: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x2f06a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2f06a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F06A4u;
    {
        const bool branch_taken_0x2f06a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06A4u;
        // 0x2f06a8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f06a4) {
            ctx->pc = 0x2F06C0u;
            goto label_2f06c0;
        }
    }
    ctx->pc = 0x2F06ACu;
    // 0x2f06ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f06acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06b0: 0xdc509290  ld          $s0, -0x6D70($v0)
    ctx->pc = 0x2f06b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294939280)));
    // 0x2f06b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F06B4u;
    {
        const bool branch_taken_0x2f06b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f06b4) {
            ctx->pc = 0x2F0738u;
            goto label_2f0738;
        }
    }
    ctx->pc = 0x2F06BCu;
    // 0x2f06bc: 0x0  nop
    ctx->pc = 0x2f06bcu;
    // NOP
label_2f06c0:
    // 0x2f06c0: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F06C0u;
    {
        const bool branch_taken_0x2f06c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f06c0) {
            ctx->pc = 0x2F06C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F06C0u;
            // 0x2f06c4: 0x2862ffcb  slti        $v0, $v1, -0x35 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0700u;
            goto label_2f0700;
        }
    }
    ctx->pc = 0x2F06C8u;
    // 0x2f06c8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x2f06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x2f06cc: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x2f06ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x2f06d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f06d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f06d4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2f06d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2f06d8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2f06d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2f06dc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2f06dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2f06e0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f06e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2f06e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f06e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f06e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2f06ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f06ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f06f0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2f06f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f06f4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f06f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06f8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F06F8u;
    {
        const bool branch_taken_0x2f06f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06F8u;
        // 0x2f06fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f06f8) {
            ctx->pc = 0x2F07A4u;
            goto label_2f07a4;
        }
    }
    ctx->pc = 0x2F0700u;
label_2f0700:
    // 0x2f0700: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F0700u;
    {
        const bool branch_taken_0x2f0700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0700) {
            ctx->pc = 0x2F0704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0700u;
            // 0x2f0704: 0x24630036  addiu       $v1, $v1, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0760u;
            goto label_2f0760;
        }
    }
    ctx->pc = 0x2F0708u;
    // 0x2f0708: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x2f0708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x2f070c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2f070cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2f0710: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0710u;
    {
        const bool branch_taken_0x2f0710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0710u;
        // 0x2f0714: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0710) {
            ctx->pc = 0x2F0730u;
            goto label_2f0730;
        }
    }
    ctx->pc = 0x2F0718u;
    // 0x2f0718: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f0718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f071c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f071cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0720: 0xdc509290  ld          $s0, -0x6D70($v0)
    ctx->pc = 0x2f0720u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x5F9290u));
    // 0x2f0724: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0724u;
    {
        const bool branch_taken_0x2f0724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0724) {
            ctx->pc = 0x2F0738u;
            goto label_2f0738;
        }
    }
    ctx->pc = 0x2F072Cu;
    // 0x2f072c: 0x0  nop
    ctx->pc = 0x2f072cu;
    // NOP
label_2f0730:
    // 0x2f0730: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f0730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0734: 0xdc509288  ld          $s0, -0x6D78($v0)
    ctx->pc = 0x2f0734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294939272)));
label_2f0738:
    // 0x2f0738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f073c: 0xc0bc140  jal         func_2F0500
    ctx->pc = 0x2F073Cu;
    SET_GPR_U32(ctx, 31, 0x2F0744u);
    ctx->pc = 0x2F0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0500u, 0x2F073Cu, 0x2F0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0744u;
label_2f0744:
    // 0x2f0744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f0744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f074c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F074Cu;
    SET_GPR_U32(ctx, 31, 0x2F0754u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F074Cu, 0x2F0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0754u;
label_2f0754:
    // 0x2f0754: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F0754u;
    {
        const bool branch_taken_0x2f0754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0754u;
        // 0x2f0758: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0754) {
            ctx->pc = 0x2F07A4u;
            goto label_2f07a4;
        }
    }
    ctx->pc = 0x2F075Cu;
    // 0x2f075c: 0x0  nop
    ctx->pc = 0x2f075cu;
    // NOP
label_2f0760:
    // 0x2f0760: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2f0760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0764: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x2f0764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x2f0768: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f076c: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x2f076cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x2f0770: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2f0770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2f0774: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f0774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0778: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f0778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f077c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2f077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f0780: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2f0780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2f0784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0788: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x2f0788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2f078c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2f078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0790: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x2f0790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x2f0794: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2f0794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2f0798: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F0798u;
    SET_GPR_U32(ctx, 31, 0x2F07A0u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F0798u, 0x2F07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F07A0u;
label_2f07a0:
    // 0x2f07a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f07a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f07a4:
    // 0x2f07a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f07a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f07a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f07a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f07ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F07ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F07ACu;
        // 0x2f07b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F07ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F07B4u;
    // 0x2f07b4: 0x0  nop
    ctx->pc = 0x2f07b4u;
    // NOP
    ctx->pc = 0x2f07b8u;
}
