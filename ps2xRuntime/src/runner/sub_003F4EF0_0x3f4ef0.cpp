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

// Function: sub_003F4EF0
// Address: 0x3f4ef0 - 0x3f54b0
void sub_003F4EF0_0x3f4ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4EF0_0x3f4ef0");
#endif

    switch (ctx->pc) {
        case 0x3f4f30u: goto label_3f4f30;
        case 0x3f4f58u: goto label_3f4f58;
        case 0x3f4f70u: goto label_3f4f70;
        case 0x3f4f88u: goto label_3f4f88;
        case 0x3f4f98u: goto label_3f4f98;
        case 0x3f4fa4u: goto label_3f4fa4;
        case 0x3f4fbcu: goto label_3f4fbc;
        case 0x3f4fccu: goto label_3f4fcc;
        case 0x3f4fd4u: goto label_3f4fd4;
        case 0x3f502cu: goto label_3f502c;
        case 0x3f5040u: goto label_3f5040;
        case 0x3f5058u: goto label_3f5058;
        case 0x3f5068u: goto label_3f5068;
        case 0x3f50acu: goto label_3f50ac;
        case 0x3f50d4u: goto label_3f50d4;
        case 0x3f50e8u: goto label_3f50e8;
        case 0x3f5100u: goto label_3f5100;
        case 0x3f5110u: goto label_3f5110;
        case 0x3f513cu: goto label_3f513c;
        case 0x3f515cu: goto label_3f515c;
        case 0x3f516cu: goto label_3f516c;
        case 0x3f519cu: goto label_3f519c;
        case 0x3f51b0u: goto label_3f51b0;
        case 0x3f51c8u: goto label_3f51c8;
        case 0x3f51d8u: goto label_3f51d8;
        case 0x3f51fcu: goto label_3f51fc;
        case 0x3f520cu: goto label_3f520c;
        case 0x3f527cu: goto label_3f527c;
        case 0x3f5290u: goto label_3f5290;
        case 0x3f52a8u: goto label_3f52a8;
        case 0x3f52b8u: goto label_3f52b8;
        case 0x3f52dcu: goto label_3f52dc;
        case 0x3f52ecu: goto label_3f52ec;
        case 0x3f5320u: goto label_3f5320;
        case 0x3f5338u: goto label_3f5338;
        case 0x3f5350u: goto label_3f5350;
        case 0x3f5360u: goto label_3f5360;
        case 0x3f5384u: goto label_3f5384;
        case 0x3f5394u: goto label_3f5394;
        case 0x3f539cu: goto label_3f539c;
        case 0x3f53e4u: goto label_3f53e4;
        case 0x3f53f8u: goto label_3f53f8;
        case 0x3f5408u: goto label_3f5408;
        case 0x3f5454u: goto label_3f5454;
        case 0x3f5468u: goto label_3f5468;
        case 0x3f548cu: goto label_3f548c;
        default: break;
    }

    ctx->pc = 0x3f4ef0u;

    // 0x3f4ef0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3f4ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x3f4ef4: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x3f4ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x3f4ef8: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x3f4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x3f4efc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3f4efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f00: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x3f4f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x3f4f04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f4f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f08: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x3f4f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x3f4f0c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x3f4f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x3f4f10: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3f4f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x3f4f14: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f4f14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f4f18: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f4f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f4f1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4F1Cu;
    {
        const bool branch_taken_0x3f4f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F1Cu;
        // 0x3f4f20: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f1c) {
            ctx->pc = 0x3F4F38u;
            goto label_3f4f38;
        }
    }
    ctx->pc = 0x3F4F24u;
    // 0x3f4f24: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4f28: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F4F28u;
    SET_GPR_U32(ctx, 31, 0x3F4F30u);
    ctx->pc = 0x3F4F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F28u;
    // 0x3f4f2c: 0x24a5f0e0  addiu       $a1, $a1, -0xF20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F4F28u, 0x3F4F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F30u;
label_3f4f30:
    // 0x3f4f30: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3F4F30u;
    {
        const bool branch_taken_0x3f4f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F30u;
        // 0x3f4f34: 0x9243020a  lbu         $v1, 0x20A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f30) {
            ctx->pc = 0x3F5080u;
            goto label_3f5080;
        }
    }
    ctx->pc = 0x3F4F38u;
label_3f4f38:
    // 0x3f4f38: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f4f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f4f3c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F4F3Cu;
    {
        const bool branch_taken_0x3f4f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F3Cu;
        // 0x3f4f40: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f3c) {
            ctx->pc = 0x3F5000u;
            goto label_3f5000;
        }
    }
    ctx->pc = 0x3F4F44u;
    // 0x3f4f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f48: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f4f48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f4f4c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f4f4cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f4f50: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4F50u;
    SET_GPR_U32(ctx, 31, 0x3F4F58u);
    ctx->pc = 0x3F4F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F50u;
    // 0x3f4f54: 0x24a5f100  addiu       $a1, $a1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4F50u, 0x3F4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F58u;
label_3f4f58:
    // 0x3f4f58: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f4f58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f4f5c: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f4f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f4f60: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F4F60u;
    {
        const bool branch_taken_0x3f4f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f60) {
            ctx->pc = 0x3F4FA4u;
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F4F68u;
    // 0x3f4f68: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f4f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f4f6c: 0x0  nop
    ctx->pc = 0x3f4f6cu;
    // NOP
label_3f4f70:
    // 0x3f4f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f74: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f4f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f4f78: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f4f78u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f4f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f80: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4F80u;
    SET_GPR_U32(ctx, 31, 0x3F4F88u);
    ctx->pc = 0x3F4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F80u;
    // 0x3f4f84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4F80u, 0x3F4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F88u;
label_3f4f88:
    // 0x3f4f88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f4f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f90: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4F90u;
    SET_GPR_U32(ctx, 31, 0x3F4F98u);
    ctx->pc = 0x3F4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F90u;
    // 0x3f4f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4F90u, 0x3F4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F98u;
label_3f4f98:
    // 0x3f4f98: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f4f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f4f9c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F4F9Cu;
    {
        const bool branch_taken_0x3f4f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f9c) {
            ctx->pc = 0x3F4FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4F9Cu;
            // 0x3f4fa0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4f70;
        }
    }
    ctx->pc = 0x3F4FA4u;
label_3f4fa4:
    // 0x3f4fa4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4FA4u;
    {
        const bool branch_taken_0x3f4fa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FA4u;
        // 0x3f4fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4fa4) {
            ctx->pc = 0x3F4FCCu;
            goto label_3f4fcc;
        }
    }
    ctx->pc = 0x3F4FACu;
    // 0x3f4fac: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f4facu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f4fb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4fb4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4FB4u;
    SET_GPR_U32(ctx, 31, 0x3F4FBCu);
    ctx->pc = 0x3F4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4FB4u;
    // 0x3f4fb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4FB4u, 0x3F4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4FBCu;
label_3f4fbc:
    // 0x3f4fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4fc0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4fc4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4FC4u;
    SET_GPR_U32(ctx, 31, 0x3F4FCCu);
    ctx->pc = 0x3F4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4FC4u;
    // 0x3f4fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4FC4u, 0x3F4FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4FCCu;
label_3f4fcc:
    // 0x3f4fcc: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F4FCCu;
    SET_GPR_U32(ctx, 31, 0x3F4FD4u);
    ctx->pc = 0x3F4FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4FCCu;
    // 0x3f4fd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F4FCCu, 0x3F4FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4FD4u;
label_3f4fd4:
    // 0x3f4fd4: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x3F4FD4u;
    {
        const bool branch_taken_0x3f4fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FD4u;
        // 0x3f4fd8: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4fd4) {
            ctx->pc = 0x3F5490u;
            goto label_3f5490;
        }
    }
    ctx->pc = 0x3F4FDCu;
    // 0x3f4fdc: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f4fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f4fe0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f4fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f4fe4: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x3F4FE4u;
    {
        const bool branch_taken_0x3f4fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FE4u;
        // 0x3f4fe8: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4fe4) {
            ctx->pc = 0x3F53B4u;
            goto label_3f53b4;
        }
    }
    ctx->pc = 0x3F4FECu;
    // 0x3f4fec: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f4fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f4ff0: 0x144000f9  bnez        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3F4FF0u;
    {
        const bool branch_taken_0x3f4ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FF0u;
        // 0x3f4ff4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4ff0) {
            ctx->pc = 0x3F53D8u;
            goto label_3f53d8;
        }
    }
    ctx->pc = 0x3F4FF8u;
    // 0x3f4ff8: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x3F4FF8u;
    {
        const bool branch_taken_0x3f4ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FF8u;
        // 0x3f4ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4ff8) {
            ctx->pc = 0x3F53F0u;
            goto label_3f53f0;
        }
    }
    ctx->pc = 0x3F5000u;
label_3f5000:
    // 0x3f5000: 0x5260001f  beql        $s3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F5000u;
    {
        const bool branch_taken_0x3f5000 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5000) {
            ctx->pc = 0x3F5004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5000u;
            // 0x3f5004: 0x9243020a  lbu         $v1, 0x20A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5080u;
            goto label_3f5080;
        }
    }
    ctx->pc = 0x3F5008u;
    // 0x3f5008: 0xde620010  ld          $v0, 0x10($s3)
    ctx->pc = 0x3f5008u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3f500c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3f500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3f5010: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F5010u;
    {
        const bool branch_taken_0x3f5010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5010u;
        // 0x3f5014: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5010) {
            ctx->pc = 0x3F507Cu;
            goto label_3f507c;
        }
    }
    ctx->pc = 0x3F5018u;
    // 0x3f5018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f501c: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f501cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f5020: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f5020u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5024: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5024u;
    SET_GPR_U32(ctx, 31, 0x3F502Cu);
    ctx->pc = 0x3F5028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5024u;
    // 0x3f5028: 0x24a5f118  addiu       $a1, $a1, -0xEE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5024u, 0x3F502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F502Cu;
label_3f502c:
    // 0x3f502c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f502cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5030: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5034: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3F5034u;
    {
        const bool branch_taken_0x3f5034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5034) {
            ctx->pc = 0x3F4FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F503Cu;
    // 0x3f503c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f503cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f5040:
    // 0x3f5040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5044: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5044u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5048: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5048u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f504c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f504cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5050: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5050u;
    SET_GPR_U32(ctx, 31, 0x3F5058u);
    ctx->pc = 0x3F5054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5050u;
    // 0x3f5054: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5050u, 0x3F5058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5058u;
label_3f5058:
    // 0x3f5058: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f505c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f505cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5060: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5060u;
    SET_GPR_U32(ctx, 31, 0x3F5068u);
    ctx->pc = 0x3F5064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5060u;
    // 0x3f5064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5060u, 0x3F5068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5068u;
label_3f5068:
    // 0x3f5068: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f506c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F506Cu;
    {
        const bool branch_taken_0x3f506c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f506c) {
            ctx->pc = 0x3F5070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F506Cu;
            // 0x3f5070: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5040;
        }
    }
    ctx->pc = 0x3F5074u;
    // 0x3f5074: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x3F5074u;
    {
        const bool branch_taken_0x3f5074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5074) {
            ctx->pc = 0x3F4FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F507Cu;
label_3f507c:
    // 0x3f507c: 0x9243020a  lbu         $v1, 0x20A($s2)
    ctx->pc = 0x3f507cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
label_3f5080:
    // 0x3f5080: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f5084: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F5084u;
    {
        const bool branch_taken_0x3f5084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5084u;
        // 0x3f5088: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5084) {
            ctx->pc = 0x3F5178u;
            goto label_3f5178;
        }
    }
    ctx->pc = 0x3F508Cu;
    // 0x3f508c: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f508cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f5090: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f5090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3f5094: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5094u;
    {
        const bool branch_taken_0x3f5094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5094) {
            ctx->pc = 0x3F5098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5094u;
            // 0x3f5098: 0x964201fc  lhu         $v0, 0x1FC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F50B4u;
            goto label_3f50b4;
        }
    }
    ctx->pc = 0x3F509Cu;
    // 0x3f509c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f509cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f50a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f50a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f50a4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F50A4u;
    SET_GPR_U32(ctx, 31, 0x3F50ACu);
    ctx->pc = 0x3F50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F50A4u;
    // 0x3f50a8: 0x24a5f130  addiu       $a1, $a1, -0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F50A4u, 0x3F50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F50ACu;
label_3f50ac:
    // 0x3f50ac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3F50ACu;
    {
        const bool branch_taken_0x3f50ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f50ac) {
            ctx->pc = 0x3F5124u;
            goto label_3f5124;
        }
    }
    ctx->pc = 0x3F50B4u;
label_3f50b4:
    // 0x3f50b4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3f50b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3f50b8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F50B8u;
    {
        const bool branch_taken_0x3f50b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F50B8u;
        // 0x3f50bc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f50b8) {
            ctx->pc = 0x3F5124u;
            goto label_3f5124;
        }
    }
    ctx->pc = 0x3F50C0u;
    // 0x3f50c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f50c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f50c4: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f50c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f50c8: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f50c8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f50cc: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F50CCu;
    SET_GPR_U32(ctx, 31, 0x3F50D4u);
    ctx->pc = 0x3F50D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F50CCu;
    // 0x3f50d0: 0x24a5f150  addiu       $a1, $a1, -0xEB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F50CCu, 0x3F50D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F50D4u;
label_3f50d4:
    // 0x3f50d4: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f50d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f50d8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f50d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f50dc: 0x1040ffb1  beqz        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x3F50DCu;
    {
        const bool branch_taken_0x3f50dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f50dc) {
            ctx->pc = 0x3F4FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F50E4u;
    // 0x3f50e4: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f50e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f50e8:
    // 0x3f50e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f50e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f50ec: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f50ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f50f0: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f50f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f50f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f50f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f50f8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F50F8u;
    SET_GPR_U32(ctx, 31, 0x3F5100u);
    ctx->pc = 0x3F50FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F50F8u;
    // 0x3f50fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F50F8u, 0x3F5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5100u;
label_3f5100:
    // 0x3f5100: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5108: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5108u;
    SET_GPR_U32(ctx, 31, 0x3F5110u);
    ctx->pc = 0x3F510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5108u;
    // 0x3f510c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5108u, 0x3F5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5110u;
label_3f5110:
    // 0x3f5110: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5114: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F5114u;
    {
        const bool branch_taken_0x3f5114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5114) {
            ctx->pc = 0x3F5118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5114u;
            // 0x3f5118: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f50e8;
        }
    }
    ctx->pc = 0x3F511Cu;
    // 0x3f511c: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x3F511Cu;
    {
        const bool branch_taken_0x3f511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f511c) {
            ctx->pc = 0x3F4FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F5124u;
label_3f5124:
    // 0x3f5124: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F5124u;
    {
        const bool branch_taken_0x3f5124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5124u;
        // 0x3f5128: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5124) {
            ctx->pc = 0x3F5148u;
            goto label_3f5148;
        }
    }
    ctx->pc = 0x3F512Cu;
    // 0x3f512c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f512cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f5130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5134: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5134u;
    SET_GPR_U32(ctx, 31, 0x3F513Cu);
    ctx->pc = 0x3F5138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5134u;
    // 0x3f5138: 0x24a5f170  addiu       $a1, $a1, -0xE90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5134u, 0x3F513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F513Cu;
label_3f513c:
    // 0x3f513c: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x3F513Cu;
    {
        const bool branch_taken_0x3f513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f513c) {
            ctx->pc = 0x3F4FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fcc;
        }
    }
    ctx->pc = 0x3F5144u;
    // 0x3f5144: 0x0  nop
    ctx->pc = 0x3f5144u;
    // NOP
label_3f5148:
    // 0x3f5148: 0x11803c  dsll32      $s0, $s1, 0
    ctx->pc = 0x3f5148u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f514c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3f514cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3f5150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5154: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5154u;
    SET_GPR_U32(ctx, 31, 0x3F515Cu);
    ctx->pc = 0x3F5158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5154u;
    // 0x3f5158: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5154u, 0x3F515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F515Cu;
label_3f515c:
    // 0x3f515c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f515cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5164: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5164u;
    SET_GPR_U32(ctx, 31, 0x3F516Cu);
    ctx->pc = 0x3F5168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5164u;
    // 0x3f5168: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5164u, 0x3F516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F516Cu;
label_3f516c:
    // 0x3f516c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x3f516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3f5170: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x3F5170u;
    {
        const bool branch_taken_0x3f5170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5170u;
        // 0x3f5174: 0xa64201fe  sh          $v0, 0x1FE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 510), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5170) {
            ctx->pc = 0x3F5400u;
            goto label_3f5400;
        }
    }
    ctx->pc = 0x3F5178u;
label_3f5178:
    // 0x3f5178: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3F5178u;
    {
        const bool branch_taken_0x3f5178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5178u;
        // 0x3f517c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5178) {
            ctx->pc = 0x3F5254u;
            goto label_3f5254;
        }
    }
    ctx->pc = 0x3F5180u;
    // 0x3f5180: 0x1222001a  beq         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F5180u;
    {
        const bool branch_taken_0x3f5180 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5180u;
        // 0x3f5184: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5180) {
            ctx->pc = 0x3F51ECu;
            goto label_3f51ec;
        }
    }
    ctx->pc = 0x3F5188u;
    // 0x3f5188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f518c: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f518cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f5190: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f5190u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5194: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5194u;
    SET_GPR_U32(ctx, 31, 0x3F519Cu);
    ctx->pc = 0x3F5198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5194u;
    // 0x3f5198: 0x24a5f150  addiu       $a1, $a1, -0xEB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5194u, 0x3F519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F519Cu;
label_3f519c:
    // 0x3f519c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f519cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f51a0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f51a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f51a4: 0x1040ff7f  beqz        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x3F51A4u;
    {
        const bool branch_taken_0x3f51a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f51a4) {
            ctx->pc = 0x3F4FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F51ACu;
    // 0x3f51ac: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f51acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f51b0:
    // 0x3f51b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f51b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f51b4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f51b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f51b8: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f51b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f51bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f51bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f51c0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F51C0u;
    SET_GPR_U32(ctx, 31, 0x3F51C8u);
    ctx->pc = 0x3F51C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F51C0u;
    // 0x3f51c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F51C0u, 0x3F51C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F51C8u;
label_3f51c8:
    // 0x3f51c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f51c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f51cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f51ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f51d0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F51D0u;
    SET_GPR_U32(ctx, 31, 0x3F51D8u);
    ctx->pc = 0x3F51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F51D0u;
    // 0x3f51d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F51D0u, 0x3F51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F51D8u;
label_3f51d8:
    // 0x3f51d8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f51d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f51dc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F51DCu;
    {
        const bool branch_taken_0x3f51dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f51dc) {
            ctx->pc = 0x3F51E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F51DCu;
            // 0x3f51e0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F51B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f51b0;
        }
    }
    ctx->pc = 0x3F51E4u;
    // 0x3f51e4: 0x1000ff6f  b           . + 4 + (-0x91 << 2)
    ctx->pc = 0x3F51E4u;
    {
        const bool branch_taken_0x3f51e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f51e4) {
            ctx->pc = 0x3F4FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F51ECu;
label_3f51ec:
    // 0x3f51ec: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x3f51ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3f51f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f51f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f51f4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F51F4u;
    SET_GPR_U32(ctx, 31, 0x3F51FCu);
    ctx->pc = 0x3F51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F51F4u;
    // 0x3f51f8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F51F4u, 0x3F51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F51FCu;
label_3f51fc:
    // 0x3f51fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f51fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5200: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x3f5200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3f5204: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5204u;
    SET_GPR_U32(ctx, 31, 0x3F520Cu);
    ctx->pc = 0x3F5208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5204u;
    // 0x3f5208: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5204u, 0x3F520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F520Cu;
label_3f520c:
    // 0x3f520c: 0x93a60100  lbu         $a2, 0x100($sp)
    ctx->pc = 0x3f520cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3f5210: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3f5210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5214: 0x93a40102  lbu         $a0, 0x102($sp)
    ctx->pc = 0x3f5214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 258)));
    // 0x3f5218: 0x93a70104  lbu         $a3, 0x104($sp)
    ctx->pc = 0x3f5218u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3f521c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3f521cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3f5220: 0x93a50101  lbu         $a1, 0x101($sp)
    ctx->pc = 0x3f5220u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 257)));
    // 0x3f5224: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3f5224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3f5228: 0x93a30103  lbu         $v1, 0x103($sp)
    ctx->pc = 0x3f5228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 259)));
    // 0x3f522c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3f522cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3f5230: 0x93a20105  lbu         $v0, 0x105($sp)
    ctx->pc = 0x3f5230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 261)));
    // 0x3f5234: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3f5234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3f5238: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f5238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3f523c: 0xa64801fe  sh          $t0, 0x1FE($s2)
    ctx->pc = 0x3f523cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 510), (uint16_t)GPR_U32(ctx, 8));
    // 0x3f5240: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3f5240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3f5244: 0xa645027e  sh          $a1, 0x27E($s2)
    ctx->pc = 0x3f5244u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 638), (uint16_t)GPR_U32(ctx, 5));
    // 0x3f5248: 0xa6430280  sh          $v1, 0x280($s2)
    ctx->pc = 0x3f5248u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 640), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f524c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3F524Cu;
    {
        const bool branch_taken_0x3f524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F524Cu;
        // 0x3f5250: 0xa6420282  sh          $v0, 0x282($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 642), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f524c) {
            ctx->pc = 0x3F5400u;
            goto label_3f5400;
        }
    }
    ctx->pc = 0x3F5254u;
label_3f5254:
    // 0x3f5254: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F5254u;
    {
        const bool branch_taken_0x3f5254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5254u;
        // 0x3f5258: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5254) {
            ctx->pc = 0x3F530Cu;
            goto label_3f530c;
        }
    }
    ctx->pc = 0x3F525Cu;
    // 0x3f525c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5260: 0x1222001a  beq         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F5260u;
    {
        const bool branch_taken_0x3f5260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5260u;
        // 0x3f5264: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5260) {
            ctx->pc = 0x3F52CCu;
            goto label_3f52cc;
        }
    }
    ctx->pc = 0x3F5268u;
    // 0x3f5268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f526c: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f526cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f5270: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f5270u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5274: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5274u;
    SET_GPR_U32(ctx, 31, 0x3F527Cu);
    ctx->pc = 0x3F5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5274u;
    // 0x3f5278: 0x24a5f150  addiu       $a1, $a1, -0xEB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5274u, 0x3F527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F527Cu;
label_3f527c:
    // 0x3f527c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f527cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5280: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5284: 0x1040ff47  beqz        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x3F5284u;
    {
        const bool branch_taken_0x3f5284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5284) {
            ctx->pc = 0x3F4FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F528Cu;
    // 0x3f528c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f528cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f5290:
    // 0x3f5290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5294: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5298: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5298u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f529c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f529cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f52a0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F52A0u;
    SET_GPR_U32(ctx, 31, 0x3F52A8u);
    ctx->pc = 0x3F52A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F52A0u;
    // 0x3f52a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F52A0u, 0x3F52A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F52A8u;
label_3f52a8:
    // 0x3f52a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f52a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f52ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f52acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f52b0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F52B0u;
    SET_GPR_U32(ctx, 31, 0x3F52B8u);
    ctx->pc = 0x3F52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F52B0u;
    // 0x3f52b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F52B0u, 0x3F52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F52B8u;
label_3f52b8:
    // 0x3f52b8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f52b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f52bc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F52BCu;
    {
        const bool branch_taken_0x3f52bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f52bc) {
            ctx->pc = 0x3F52C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F52BCu;
            // 0x3f52c0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5290;
        }
    }
    ctx->pc = 0x3F52C4u;
    // 0x3f52c4: 0x1000ff37  b           . + 4 + (-0xC9 << 2)
    ctx->pc = 0x3F52C4u;
    {
        const bool branch_taken_0x3f52c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f52c4) {
            ctx->pc = 0x3F4FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4fa4;
        }
    }
    ctx->pc = 0x3F52CCu;
label_3f52cc:
    // 0x3f52cc: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3f52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3f52d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f52d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f52d4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F52D4u;
    SET_GPR_U32(ctx, 31, 0x3F52DCu);
    ctx->pc = 0x3F52D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F52D4u;
    // 0x3f52d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F52D4u, 0x3F52DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F52DCu;
label_3f52dc:
    // 0x3f52dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f52dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f52e0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3f52e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3f52e4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F52E4u;
    SET_GPR_U32(ctx, 31, 0x3F52ECu);
    ctx->pc = 0x3F52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F52E4u;
    // 0x3f52e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F52E4u, 0x3F52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F52ECu;
label_3f52ec:
    // 0x3f52ec: 0x93a20110  lbu         $v0, 0x110($sp)
    ctx->pc = 0x3f52ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3f52f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f52f4: 0x93a30111  lbu         $v1, 0x111($sp)
    ctx->pc = 0x3f52f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 273)));
    // 0x3f52f8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f52fc: 0xa64401fe  sh          $a0, 0x1FE($s2)
    ctx->pc = 0x3f52fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 510), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f5300: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f5300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f5304: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3F5304u;
    {
        const bool branch_taken_0x3f5304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5304u;
        // 0x3f5308: 0xa6430284  sh          $v1, 0x284($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 644), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5304) {
            ctx->pc = 0x3F5400u;
            goto label_3f5400;
        }
    }
    ctx->pc = 0x3F530Cu;
label_3f530c:
    // 0x3f530c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5310: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f5310u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f5314: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f5314u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5318: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5318u;
    SET_GPR_U32(ctx, 31, 0x3F5320u);
    ctx->pc = 0x3F531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5318u;
    // 0x3f531c: 0x24a5f188  addiu       $a1, $a1, -0xE78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5318u, 0x3F5320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5320u;
label_3f5320:
    // 0x3f5320: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f5320u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5324: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5328: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F5328u;
    {
        const bool branch_taken_0x3f5328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5328) {
            ctx->pc = 0x3F536Cu;
            goto label_3f536c;
        }
    }
    ctx->pc = 0x3F5330u;
    // 0x3f5330: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f5330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5334: 0x0  nop
    ctx->pc = 0x3f5334u;
    // NOP
label_3f5338:
    // 0x3f5338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f533c: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f533cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5340: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5340u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f5344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5348: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5348u;
    SET_GPR_U32(ctx, 31, 0x3F5350u);
    ctx->pc = 0x3F534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5348u;
    // 0x3f534c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5348u, 0x3F5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5350u;
label_3f5350:
    // 0x3f5350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5354: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5358: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5358u;
    SET_GPR_U32(ctx, 31, 0x3F5360u);
    ctx->pc = 0x3F535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5358u;
    // 0x3f535c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5358u, 0x3F5360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5360u;
label_3f5360:
    // 0x3f5360: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5364: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F5364u;
    {
        const bool branch_taken_0x3f5364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5364) {
            ctx->pc = 0x3F5368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5364u;
            // 0x3f5368: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5338;
        }
    }
    ctx->pc = 0x3F536Cu;
label_3f536c:
    // 0x3f536c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F536Cu;
    {
        const bool branch_taken_0x3f536c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F536Cu;
        // 0x3f5370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f536c) {
            ctx->pc = 0x3F5394u;
            goto label_3f5394;
        }
    }
    ctx->pc = 0x3F5374u;
    // 0x3f5374: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f5374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5378: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f537c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F537Cu;
    SET_GPR_U32(ctx, 31, 0x3F5384u);
    ctx->pc = 0x3F5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F537Cu;
    // 0x3f5380: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F537Cu, 0x3F5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5384u;
label_3f5384:
    // 0x3f5384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5388: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f538c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F538Cu;
    SET_GPR_U32(ctx, 31, 0x3F5394u);
    ctx->pc = 0x3F5390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F538Cu;
    // 0x3f5390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F538Cu, 0x3F5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5394u;
label_3f5394:
    // 0x3f5394: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F5394u;
    SET_GPR_U32(ctx, 31, 0x3F539Cu);
    ctx->pc = 0x3F5398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5394u;
    // 0x3f5398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F5394u, 0x3F539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F539Cu;
label_3f539c:
    // 0x3f539c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F539Cu;
    {
        const bool branch_taken_0x3f539c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F539Cu;
        // 0x3f53a0: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f539c) {
            ctx->pc = 0x3F5490u;
            goto label_3f5490;
        }
    }
    ctx->pc = 0x3F53A4u;
    // 0x3f53a4: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f53a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f53a8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f53a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f53ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F53ACu;
    {
        const bool branch_taken_0x3f53ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F53ACu;
        // 0x3f53b0: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f53ac) {
            ctx->pc = 0x3F53C8u;
            goto label_3f53c8;
        }
    }
    ctx->pc = 0x3F53B4u;
label_3f53b4:
    // 0x3f53b4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f53b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f53b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F53B8u;
    {
        const bool branch_taken_0x3f53b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F53B8u;
        // 0x3f53bc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f53b8) {
            ctx->pc = 0x3F53D4u;
            goto label_3f53d4;
        }
    }
    ctx->pc = 0x3F53C0u;
    // 0x3f53c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F53C0u;
    {
        const bool branch_taken_0x3f53c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F53C0u;
        // 0x3f53c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f53c0) {
            ctx->pc = 0x3F53F0u;
            goto label_3f53f0;
        }
    }
    ctx->pc = 0x3F53C8u;
label_3f53c8:
    // 0x3f53c8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f53c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f53cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F53CCu;
    {
        const bool branch_taken_0x3f53cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F53CCu;
        // 0x3f53d0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f53cc) {
            ctx->pc = 0x3F53ECu;
            goto label_3f53ec;
        }
    }
    ctx->pc = 0x3F53D4u;
label_3f53d4:
    // 0x3f53d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f53d8:
    // 0x3f53d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f53d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f53dc: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F53DCu;
    SET_GPR_U32(ctx, 31, 0x3F53E4u);
    ctx->pc = 0x3F53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F53DCu;
    // 0x3f53e0: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F53DCu, 0x3F53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F53E4u;
label_3f53e4:
    // 0x3f53e4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3F53E4u;
    {
        const bool branch_taken_0x3f53e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F53E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F53E4u;
        // 0x3f53e8: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f53e4) {
            ctx->pc = 0x3F5490u;
            goto label_3f5490;
        }
    }
    ctx->pc = 0x3F53ECu;
label_3f53ec:
    // 0x3f53ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f53ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f53f0:
    // 0x3f53f0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F53F0u;
    SET_GPR_U32(ctx, 31, 0x3F53F8u);
    ctx->pc = 0x3F53F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F53F0u;
    // 0x3f53f4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F53F0u, 0x3F53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F53F8u;
label_3f53f8:
    // 0x3f53f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3F53F8u;
    {
        const bool branch_taken_0x3f53f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F53F8u;
        // 0x3f53fc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f53f8) {
            ctx->pc = 0x3F5490u;
            goto label_3f5490;
        }
    }
    ctx->pc = 0x3F5400u;
label_3f5400:
    // 0x3f5400: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F5400u;
    SET_GPR_U32(ctx, 31, 0x3F5408u);
    ctx->pc = 0x3F5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5400u;
    // 0x3f5404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F5400u, 0x3F5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5408u;
label_3f5408:
    // 0x3f5408: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F5408u;
    {
        const bool branch_taken_0x3f5408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5408u;
        // 0x3f540c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5408) {
            ctx->pc = 0x3F546Cu;
            goto label_3f546c;
        }
    }
    ctx->pc = 0x3F5410u;
    // 0x3f5410: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f5410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f5414: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f5414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f5418: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5418u;
    {
        const bool branch_taken_0x3f5418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5418u;
        // 0x3f541c: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5418) {
            ctx->pc = 0x3F5438u;
            goto label_3f5438;
        }
    }
    ctx->pc = 0x3F5420u;
    // 0x3f5420: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f5420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f5424: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5424u;
    {
        const bool branch_taken_0x3f5424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5424u;
        // 0x3f5428: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5424) {
            ctx->pc = 0x3F5444u;
            goto label_3f5444;
        }
    }
    ctx->pc = 0x3F542Cu;
    // 0x3f542c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F542Cu;
    {
        const bool branch_taken_0x3f542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F542Cu;
        // 0x3f5430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f542c) {
            ctx->pc = 0x3F5460u;
            goto label_3f5460;
        }
    }
    ctx->pc = 0x3F5434u;
    // 0x3f5434: 0x0  nop
    ctx->pc = 0x3f5434u;
    // NOP
label_3f5438:
    // 0x3f5438: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f5438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f543c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F543Cu;
    {
        const bool branch_taken_0x3f543c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F543Cu;
        // 0x3f5440: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f543c) {
            ctx->pc = 0x3F545Cu;
            goto label_3f545c;
        }
    }
    ctx->pc = 0x3F5444u;
label_3f5444:
    // 0x3f5444: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f5444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f5448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f544c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F544Cu;
    SET_GPR_U32(ctx, 31, 0x3F5454u);
    ctx->pc = 0x3F5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F544Cu;
    // 0x3f5450: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F544Cu, 0x3F5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5454u;
label_3f5454:
    // 0x3f5454: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F5454u;
    {
        const bool branch_taken_0x3f5454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5454u;
        // 0x3f5458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5454) {
            ctx->pc = 0x3F546Cu;
            goto label_3f546c;
        }
    }
    ctx->pc = 0x3F545Cu;
label_3f545c:
    // 0x3f545c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5460:
    // 0x3f5460: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F5460u;
    SET_GPR_U32(ctx, 31, 0x3F5468u);
    ctx->pc = 0x3F5464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5460u;
    // 0x3f5464: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F5460u, 0x3F5468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5468u;
label_3f5468:
    // 0x3f5468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f546c:
    // 0x3f546c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F546Cu;
    {
        const bool branch_taken_0x3f546c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F546Cu;
        // 0x3f5470: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f546c) {
            ctx->pc = 0x3F5490u;
            goto label_3f5490;
        }
    }
    ctx->pc = 0x3F5474u;
    // 0x3f5474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5478: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f5478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f547c: 0x948701fe  lhu         $a3, 0x1FE($a0)
    ctx->pc = 0x3f547cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 510)));
    // 0x3f5480: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f5480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5484: 0xc0fee4e  jal         func_3FB938
    ctx->pc = 0x3F5484u;
    SET_GPR_U32(ctx, 31, 0x3F548Cu);
    ctx->pc = 0x3F5488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5484u;
    // 0x3f5488: 0x2488027c  addiu       $t0, $a0, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB938u, 0x3F5484u, 0x3F548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F548Cu;
label_3f548c:
    // 0x3f548c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x3f548cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3f5490:
    // 0x3f5490: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x3f5490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3f5494: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x3f5494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3f5498: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x3f5498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3f549c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x3f549cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3f54a0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3f54a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3f54a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F54A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F54A4u;
        // 0x3f54a8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F54A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F54ACu;
    // 0x3f54ac: 0x0  nop
    ctx->pc = 0x3f54acu;
    // NOP
    ctx->pc = 0x3f54b0u;
}
