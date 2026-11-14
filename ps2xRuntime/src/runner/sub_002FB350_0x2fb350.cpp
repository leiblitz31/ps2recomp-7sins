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

// Function: sub_002FB350
// Address: 0x2fb350 - 0x2fb5b0
void sub_002FB350_0x2fb350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB350_0x2fb350");
#endif

    switch (ctx->pc) {
        case 0x2fb448u: goto label_2fb448;
        case 0x2fb478u: goto label_2fb478;
        case 0x2fb520u: goto label_2fb520;
        default: break;
    }

    ctx->pc = 0x2fb350u;

    // 0x2fb350: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2fb350u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb354: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x2fb354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2fb358: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x2fb358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb35c: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x2FB35Cu;
    {
        const bool branch_taken_0x2fb35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB35Cu;
        // 0x2fb360: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb35c) {
            ctx->pc = 0x2FB5A4u;
            goto label_2fb5a4;
        }
    }
    ctx->pc = 0x2FB364u;
    // 0x2fb364: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fb364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb368: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x2fb368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb36c: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x2FB36Cu;
    {
        const bool branch_taken_0x2fb36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB36Cu;
        // 0x2fb370: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb36c) {
            ctx->pc = 0x2FB5A4u;
            goto label_2fb5a4;
        }
    }
    ctx->pc = 0x2FB374u;
    // 0x2fb374: 0x38e20004  xori        $v0, $a3, 0x4
    ctx->pc = 0x2fb374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x2fb378: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB378u;
    {
        const bool branch_taken_0x2fb378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB378u;
        // 0x2fb37c: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb378) {
            ctx->pc = 0x2FB3A8u;
            goto label_2fb3a8;
        }
    }
    ctx->pc = 0x2FB380u;
    // 0x2fb380: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x2fb380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x2fb384: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2FB384u;
    {
        const bool branch_taken_0x2fb384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb384) {
            ctx->pc = 0x2FB3F8u;
            goto label_2fb3f8;
        }
    }
    ctx->pc = 0x2FB38Cu;
    // 0x2fb38c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2fb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fb390: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x2fb390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2fb394: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB394u;
    {
        const bool branch_taken_0x2fb394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fb394) {
            ctx->pc = 0x2FB3F8u;
            goto label_2fb3f8;
        }
    }
    ctx->pc = 0x2FB39Cu;
    // 0x2fb39c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2fb3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3A0u;
        // 0x2fb3a4: 0x2442a360  addiu       $v0, $v0, -0x5CA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB3A8u;
label_2fb3a8:
    // 0x2fb3a8: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2FB3A8u;
    {
        const bool branch_taken_0x2fb3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3A8u;
        // 0x2fb3ac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3a8) {
            ctx->pc = 0x2FB5A4u;
            goto label_2fb5a4;
        }
    }
    ctx->pc = 0x2FB3B0u;
    // 0x2fb3b0: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x2fb3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2fb3b4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FB3B4u;
    {
        const bool branch_taken_0x2fb3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3B4u;
        // 0x2fb3b8: 0x38e30002  xori        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3b4) {
            ctx->pc = 0x2FB400u;
            goto label_2fb400;
        }
    }
    ctx->pc = 0x2FB3BCu;
    // 0x2fb3bc: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x2fb3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x2fb3c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FB3C0u;
    {
        const bool branch_taken_0x2fb3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb3c0) {
            ctx->pc = 0x2FB3F8u;
            goto label_2fb3f8;
        }
    }
    ctx->pc = 0x2FB3C8u;
    // 0x2fb3c8: 0xdd640000  ld          $a0, 0x0($t3)
    ctx->pc = 0x2fb3c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2fb3cc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2fb3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb3d0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb3d4: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x2fb3d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2fb3d8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2fb3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2fb3dc: 0xdd640010  ld          $a0, 0x10($t3)
    ctx->pc = 0x2fb3dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2fb3e0: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x2fb3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x2fb3e4: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x2fb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2fb3e8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2fb3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fb3ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fb3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3F0u;
        // 0x2fb3f4: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB3F8u;
label_2fb3f8:
    // 0x2fb3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3F8u;
        // 0x2fb3fc: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB400u;
label_2fb400:
    // 0x2fb400: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2FB400u;
    {
        const bool branch_taken_0x2fb400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB400u;
        // 0x2fb404: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb400) {
            ctx->pc = 0x2FB5A4u;
            goto label_2fb5a4;
        }
    }
    ctx->pc = 0x2FB408u;
    // 0x2fb408: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x2fb408u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2fb40c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x2fb40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fb410: 0xdd6a0010  ld          $t2, 0x10($t3)
    ctx->pc = 0x2fb410u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2fb414: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x2fb414u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2fb418: 0x22023  negu        $a0, $v0
    ctx->pc = 0x2fb418u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2fb41c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2fb41cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2fb420: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2fb420u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2fb424: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x2fb424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2fb428: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2FB428u;
    {
        const bool branch_taken_0x2fb428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB428u;
        // 0x2fb42c: 0xdca90010  ld          $t1, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb428) {
            ctx->pc = 0x2FB4A0u;
            goto label_2fb4a0;
        }
    }
    ctx->pc = 0x2FB430u;
    // 0x2fb430: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x2fb430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2fb434: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FB434u;
    {
        const bool branch_taken_0x2fb434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB434u;
        // 0x2fb438: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb434) {
            ctx->pc = 0x2FB46Cu;
            goto label_2fb46c;
        }
    }
    ctx->pc = 0x2FB43Cu;
    // 0x2fb43c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fb43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb440: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x2fb440u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2fb444: 0x0  nop
    ctx->pc = 0x2fb444u;
    // NOP
label_2fb448:
    // 0x2fb448: 0x9187a  dsrl        $v1, $t1, 1
    ctx->pc = 0x2fb448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> 1);
    // 0x2fb44c: 0x1241024  and         $v0, $t1, $a0
    ctx->pc = 0x2fb44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x2fb450: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2fb450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2fb454: 0x0  nop
    ctx->pc = 0x2fb454u;
    // NOP
    // 0x2fb458: 0x0  nop
    ctx->pc = 0x2fb458u;
    // NOP
    // 0x2fb45c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FB45Cu;
    {
        const bool branch_taken_0x2fb45c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB45Cu;
        // 0x2fb460: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb45c) {
            ctx->pc = 0x2FB448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb448;
        }
    }
    ctx->pc = 0x2FB464u;
    // 0x2fb464: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2fb464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb468: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x2fb468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2fb46c:
    // 0x2fb46c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FB46Cu;
    {
        const bool branch_taken_0x2fb46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb46c) {
            ctx->pc = 0x2FB470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB46Cu;
            // 0x2fb470: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB4C0u;
            goto label_2fb4c0;
        }
    }
    ctx->pc = 0x2FB474u;
    // 0x2fb474: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2fb474u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb478:
    // 0x2fb478: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2fb478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fb47c: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x2fb47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x2fb480: 0x14c1824  and         $v1, $t2, $t4
    ctx->pc = 0x2fb480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x2fb484: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x2fb484u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2fb488: 0x0  nop
    ctx->pc = 0x2fb488u;
    // NOP
    // 0x2fb48c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FB48Cu;
    {
        const bool branch_taken_0x2fb48c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB48Cu;
        // 0x2fb490: 0x625025  or          $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb48c) {
            ctx->pc = 0x2FB478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb478;
        }
    }
    ctx->pc = 0x2FB494u;
    // 0x2fb494: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2FB494u;
    {
        const bool branch_taken_0x2fb494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB494u;
        // 0x2fb498: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb494) {
            ctx->pc = 0x2FB4C0u;
            goto label_2fb4c0;
        }
    }
    ctx->pc = 0x2FB49Cu;
    // 0x2fb49c: 0x0  nop
    ctx->pc = 0x2fb49cu;
    // NOP
label_2fb4a0:
    // 0x2fb4a0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x2fb4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2fb4a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB4A4u;
    {
        const bool branch_taken_0x2fb4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb4a4) {
            ctx->pc = 0x2FB4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB4A4u;
            // 0x2fb4a8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB4B8u;
            goto label_2fb4b8;
        }
    }
    ctx->pc = 0x2FB4ACu;
    // 0x2fb4ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB4ACu;
    {
        const bool branch_taken_0x2fb4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4ACu;
        // 0x2fb4b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4ac) {
            ctx->pc = 0x2FB4BCu;
            goto label_2fb4bc;
        }
    }
    ctx->pc = 0x2FB4B4u;
    // 0x2fb4b4: 0x0  nop
    ctx->pc = 0x2fb4b4u;
    // NOP
label_2fb4b8:
    // 0x2fb4b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2fb4b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4bc:
    // 0x2fb4bc: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x2fb4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_2fb4c0:
    // 0x2fb4c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fb4c4: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FB4C4u;
    {
        const bool branch_taken_0x2fb4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4C4u;
        // 0x2fb4c8: 0x149102f  dsubu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4c4) {
            ctx->pc = 0x2FB558u;
            goto label_2fb558;
        }
    }
    ctx->pc = 0x2FB4CCu;
    // 0x2fb4cc: 0x12a182f  dsubu       $v1, $t1, $t2
    ctx->pc = 0x2fb4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) - GPR_U64(ctx, 10));
    // 0x2fb4d0: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x2fb4d0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2fb4d4: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB4D4u;
    {
        const bool branch_taken_0x2fb4d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2fb4d4) {
            ctx->pc = 0x2FB4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB4D4u;
            // 0x2fb4d8: 0x3182f  dsubu       $v1, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB4F0u;
            goto label_2fb4f0;
        }
    }
    ctx->pc = 0x2FB4DCu;
    // 0x2fb4dc: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2fb4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x2fb4e0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2fb4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2fb4e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB4E4u;
    {
        const bool branch_taken_0x2fb4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4E4u;
        // 0x2fb4e8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4e4) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB4ECu;
    // 0x2fb4ec: 0x0  nop
    ctx->pc = 0x2fb4ecu;
    // NOP
label_2fb4f0:
    // 0x2fb4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb4f4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2fb4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2fb4f8: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2fb4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x2fb4fc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2fb4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_2fb500:
    // 0x2fb500: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x2fb500u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fb504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb508: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x2fb508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x2fb50c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2fb50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2fb510: 0x64e3ffff  daddiu      $v1, $a3, -0x1
    ctx->pc = 0x2fb510u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x2fb514: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2fb514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fb518: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FB518u;
    {
        const bool branch_taken_0x2fb518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb518) {
            ctx->pc = 0x2FB56Cu;
            goto label_2fb56c;
        }
    }
    ctx->pc = 0x2FB520u;
label_2fb520:
    // 0x2fb520: 0x72878  dsll        $a1, $a3, 1
    ctx->pc = 0x2fb520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 1);
    // 0x2fb524: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2fb524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb528: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x2fb528u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x2fb52c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fb52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb530: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x2fb530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x2fb534: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x2fb534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x2fb538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fb538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fb53c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2fb53cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fb540: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2fb540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2fb544: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fb544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb548: 0x1080fff5  beqz        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2FB548u;
    {
        const bool branch_taken_0x2fb548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB548u;
        // 0x2fb54c: 0xfcc50010  sd          $a1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb548) {
            ctx->pc = 0x2FB520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb520;
        }
    }
    ctx->pc = 0x2FB550u;
    // 0x2fb550: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB550u;
    {
        const bool branch_taken_0x2fb550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb550) {
            ctx->pc = 0x2FB56Cu;
            goto label_2fb56c;
        }
    }
    ctx->pc = 0x2FB558u;
label_2fb558:
    // 0x2fb558: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x2fb558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
    // 0x2fb55c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2fb55cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x2fb560: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2fb560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x2fb564: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fb564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb568: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x2fb568u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_2fb56c:
    // 0x2fb56c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb570: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2fb570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2fb574: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fb574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fb578: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2fb578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fb57c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB57Cu;
    {
        const bool branch_taken_0x2fb57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB57Cu;
        // 0x2fb580: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb57c) {
            ctx->pc = 0x2FB5A0u;
            goto label_2fb5a0;
        }
    }
    ctx->pc = 0x2FB584u;
    // 0x2fb584: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2fb584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb588: 0x7207a  dsrl        $a0, $a3, 1
    ctx->pc = 0x2fb588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 1);
    // 0x2fb58c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x2fb58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2fb590: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fb590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fb594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fb598: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2fb598u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2fb59c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2fb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_2fb5a0:
    // 0x2fb5a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2fb5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fb5a4:
    // 0x2fb5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB5ACu;
    // 0x2fb5ac: 0x0  nop
    ctx->pc = 0x2fb5acu;
    // NOP
    ctx->pc = 0x2fb5b0u;
}
