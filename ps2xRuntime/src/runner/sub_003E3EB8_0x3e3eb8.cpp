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

// Function: sub_003E3EB8
// Address: 0x3e3eb8 - 0x3e4388
void sub_003E3EB8_0x3e3eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3EB8_0x3e3eb8");
#endif

    switch (ctx->pc) {
        case 0x3e3ef8u: goto label_3e3ef8;
        case 0x3e3f00u: goto label_3e3f00;
        case 0x3e3f0cu: goto label_3e3f0c;
        case 0x3e3f14u: goto label_3e3f14;
        case 0x3e3f20u: goto label_3e3f20;
        case 0x3e3f30u: goto label_3e3f30;
        case 0x3e3f40u: goto label_3e3f40;
        case 0x3e3f58u: goto label_3e3f58;
        case 0x3e3f6cu: goto label_3e3f6c;
        case 0x3e3f80u: goto label_3e3f80;
        case 0x3e3f90u: goto label_3e3f90;
        case 0x3e3fa4u: goto label_3e3fa4;
        case 0x3e3fccu: goto label_3e3fcc;
        case 0x3e3fecu: goto label_3e3fec;
        case 0x3e3ffcu: goto label_3e3ffc;
        case 0x3e401cu: goto label_3e401c;
        case 0x3e4044u: goto label_3e4044;
        case 0x3e4050u: goto label_3e4050;
        case 0x3e4064u: goto label_3e4064;
        case 0x3e407cu: goto label_3e407c;
        case 0x3e4090u: goto label_3e4090;
        case 0x3e40a8u: goto label_3e40a8;
        case 0x3e40bcu: goto label_3e40bc;
        case 0x3e40d4u: goto label_3e40d4;
        case 0x3e40e8u: goto label_3e40e8;
        case 0x3e4100u: goto label_3e4100;
        case 0x3e4114u: goto label_3e4114;
        case 0x3e412cu: goto label_3e412c;
        case 0x3e4140u: goto label_3e4140;
        case 0x3e4158u: goto label_3e4158;
        case 0x3e416cu: goto label_3e416c;
        case 0x3e4184u: goto label_3e4184;
        case 0x3e4198u: goto label_3e4198;
        case 0x3e41b0u: goto label_3e41b0;
        case 0x3e41c4u: goto label_3e41c4;
        case 0x3e41dcu: goto label_3e41dc;
        case 0x3e41f0u: goto label_3e41f0;
        case 0x3e4208u: goto label_3e4208;
        case 0x3e421cu: goto label_3e421c;
        case 0x3e4234u: goto label_3e4234;
        case 0x3e4248u: goto label_3e4248;
        case 0x3e4260u: goto label_3e4260;
        case 0x3e4274u: goto label_3e4274;
        case 0x3e428cu: goto label_3e428c;
        case 0x3e42a0u: goto label_3e42a0;
        case 0x3e42b8u: goto label_3e42b8;
        case 0x3e42ccu: goto label_3e42cc;
        case 0x3e42e4u: goto label_3e42e4;
        case 0x3e42f8u: goto label_3e42f8;
        case 0x3e4310u: goto label_3e4310;
        case 0x3e4324u: goto label_3e4324;
        case 0x3e4338u: goto label_3e4338;
        case 0x3e434cu: goto label_3e434c;
        default: break;
    }

    ctx->pc = 0x3e3eb8u;

    // 0x3e3eb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e3eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3e3ebc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e3ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3e3ec0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e3ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3e3ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e3ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ec8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e3ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ecc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e3eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3e3ed0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e3ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e3ed4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3e3ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3e3ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3edc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3e3edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3e3ee0: 0x26120200  addiu       $s2, $s0, 0x200
    ctx->pc = 0x3e3ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x3e3ee4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e3ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3e3ee8: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x3e3ee8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x3e3eec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e3eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e3ef0: 0xc0fe732  jal         func_3F9CC8
    ctx->pc = 0x3E3EF0u;
    SET_GPR_U32(ctx, 31, 0x3E3EF8u);
    ctx->pc = 0x3E3EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3EF0u;
    // 0x3e3ef4: 0x24150008  addiu       $s5, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9CC8u, 0x3E3EF0u, 0x3E3EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3EF8u;
label_3e3ef8:
    // 0x3e3ef8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x3e3ef8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e3efc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e3efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e3f00:
    // 0x3e3f00: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e3f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e3f04: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3E3F04u;
    SET_GPR_U32(ctx, 31, 0x3E3F0Cu);
    ctx->pc = 0x3E3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F04u;
    // 0x3e3f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3E3F04u, 0x3E3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F0Cu;
label_3e3f0c:
    // 0x3e3f0c: 0xc0fe70c  jal         func_3F9C30
    ctx->pc = 0x3E3F0Cu;
    SET_GPR_U32(ctx, 31, 0x3E3F14u);
    ctx->pc = 0x3E3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F0Cu;
    // 0x3e3f10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9C30u, 0x3E3F0Cu, 0x3E3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F14u;
label_3e3f14:
    // 0x3e3f14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e3f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f18: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x3E3F18u;
    SET_GPR_U32(ctx, 31, 0x3E3F20u);
    ctx->pc = 0x3E3F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F18u;
    // 0x3e3f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x3E3F18u, 0x3E3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F20u;
label_3e3f20:
    // 0x3e3f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f28: 0xc0fe71e  jal         func_3F9C78
    ctx->pc = 0x3E3F28u;
    SET_GPR_U32(ctx, 31, 0x3E3F30u);
    ctx->pc = 0x3E3F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F28u;
    // 0x3e3f2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9C78u, 0x3E3F28u, 0x3E3F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F30u;
label_3e3f30:
    // 0x3e3f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f34: 0x2785ac38  addiu       $a1, $gp, -0x53C8
    ctx->pc = 0x3e3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945848));
    // 0x3e3f38: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3F38u;
    SET_GPR_U32(ctx, 31, 0x3E3F40u);
    ctx->pc = 0x3E3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F38u;
    // 0x3e3f3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3F38u, 0x3E3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F40u;
label_3e3f40:
    // 0x3e3f40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3F40u;
    {
        const bool branch_taken_0x3e3f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F40u;
        // 0x3e3f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3f40) {
            ctx->pc = 0x3E3F60u;
            goto label_3e3f60;
        }
    }
    ctx->pc = 0x3E3F48u;
    // 0x3e3f48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e3f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f50: 0xc0fc94e  jal         func_3F2538
    ctx->pc = 0x3E3F50u;
    SET_GPR_U32(ctx, 31, 0x3E3F58u);
    ctx->pc = 0x3E3F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F50u;
    // 0x3e3f54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2538u, 0x3E3F50u, 0x3E3F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F58u;
label_3e3f58:
    // 0x3e3f58: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x3E3F58u;
    {
        const bool branch_taken_0x3e3f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F58u;
        // 0x3e3f5c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3f58) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E3F60u;
label_3e3f60:
    // 0x3e3f60: 0x2785ac48  addiu       $a1, $gp, -0x53B8
    ctx->pc = 0x3e3f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945864));
    // 0x3e3f64: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3F64u;
    SET_GPR_U32(ctx, 31, 0x3E3F6Cu);
    ctx->pc = 0x3E3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F64u;
    // 0x3e3f68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3F64u, 0x3E3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F6Cu;
label_3e3f6c:
    // 0x3e3f6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E3F6Cu;
    {
        const bool branch_taken_0x3e3f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F6Cu;
        // 0x3e3f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3f6c) {
            ctx->pc = 0x3E3F88u;
            goto label_3e3f88;
        }
    }
    ctx->pc = 0x3E3F74u;
    // 0x3e3f74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e3f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f78: 0xc0fe7a6  jal         func_3F9E98
    ctx->pc = 0x3E3F78u;
    SET_GPR_U32(ctx, 31, 0x3E3F80u);
    ctx->pc = 0x3E3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F78u;
    // 0x3e3f7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9E98u, 0x3E3F78u, 0x3E3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F80u;
label_3e3f80:
    // 0x3e3f80: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x3E3F80u;
    {
        const bool branch_taken_0x3e3f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F80u;
        // 0x3e3f84: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3f80) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E3F88u;
label_3e3f88:
    // 0x3e3f88: 0xc0f8606  jal         func_3E1818
    ctx->pc = 0x3E3F88u;
    SET_GPR_U32(ctx, 31, 0x3E3F90u);
    ctx->pc = 0x3E3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F88u;
    // 0x3e3f8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1818u, 0x3E3F88u, 0x3E3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F90u;
label_3e3f90:
    // 0x3e3f90: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E3F90u;
    {
        const bool branch_taken_0x3e3f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F90u;
        // 0x3e3f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3f90) {
            ctx->pc = 0x3E4010u;
            goto label_3e4010;
        }
    }
    ctx->pc = 0x3E3F98u;
    // 0x3e3f98: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x3e3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x3e3f9c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3F9Cu;
    SET_GPR_U32(ctx, 31, 0x3E3FA4u);
    ctx->pc = 0x3E3FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F9Cu;
    // 0x3e3fa0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3F9Cu, 0x3E3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3FA4u;
label_3e3fa4:
    // 0x3e3fa4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3E3FA4u;
    {
        const bool branch_taken_0x3e3fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3fa4) {
            ctx->pc = 0x3E3FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3FA4u;
            // 0x3e3fa8: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3FD4u;
            goto label_3e3fd4;
        }
    }
    ctx->pc = 0x3E3FACu;
    // 0x3e3fac: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3FACu;
    {
        const bool branch_taken_0x3e3fac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3FACu;
        // 0x3e3fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3fac) {
            ctx->pc = 0x3E3FC4u;
            goto label_3e3fc4;
        }
    }
    ctx->pc = 0x3E3FB4u;
    // 0x3e3fb4: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x3e3fb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x3e3fb8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3e3fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3e3fbc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E3FBCu;
    {
        const bool branch_taken_0x3e3fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3fbc) {
            ctx->pc = 0x3E3FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3FBCu;
            // 0x3e3fc0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3FE4u;
            goto label_3e3fe4;
        }
    }
    ctx->pc = 0x3E3FC4u;
label_3e3fc4:
    // 0x3e3fc4: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3FC4u;
    SET_GPR_U32(ctx, 31, 0x3E3FCCu);
    ctx->pc = 0x3E3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3FC4u;
    // 0x3e3fc8: 0x2685e6a0  addiu       $a1, $s4, -0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3FC4u, 0x3E3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3FCCu;
label_3e3fcc:
    // 0x3e3fcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3FCCu;
    {
        const bool branch_taken_0x3e3fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3FCCu;
        // 0x3e3fd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3fcc) {
            ctx->pc = 0x3E3FE0u;
            goto label_3e3fe0;
        }
    }
    ctx->pc = 0x3E3FD4u;
label_3e3fd4:
    // 0x3e3fd4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x3e3fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x3e3fd8: 0xfe0200f8  sd          $v0, 0xF8($s0)
    ctx->pc = 0x3e3fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
    // 0x3e3fdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e3fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e3fe0:
    // 0x3e3fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3fe4:
    // 0x3e3fe4: 0xc0fddee  jal         func_3F77B8
    ctx->pc = 0x3E3FE4u;
    SET_GPR_U32(ctx, 31, 0x3E3FECu);
    ctx->pc = 0x3E3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3FE4u;
    // 0x3e3fe8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F77B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F77B8u, 0x3E3FE4u, 0x3E3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3FECu;
label_3e3fec:
    // 0x3e3fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ff0: 0x2785ac50  addiu       $a1, $gp, -0x53B0
    ctx->pc = 0x3e3ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945872));
    // 0x3e3ff4: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3FF4u;
    SET_GPR_U32(ctx, 31, 0x3E3FFCu);
    ctx->pc = 0x3E3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3FF4u;
    // 0x3e3ff8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3FF4u, 0x3E3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3FFCu;
label_3e3ffc:
    // 0x3e3ffc: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x3E3FFCu;
    {
        const bool branch_taken_0x3e3ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3FFCu;
        // 0x3e4000: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3ffc) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4004u;
    // 0x3e4004: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x3e4004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x3e4008: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x3E4008u;
    {
        const bool branch_taken_0x3e4008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4008u;
        // 0x3e400c: 0xfe0200f8  sd          $v0, 0xF8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4008) {
            ctx->pc = 0x3E434Cu;
            goto label_3e434c;
        }
    }
    ctx->pc = 0x3E4010u;
label_3e4010:
    // 0x3e4010: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x3e4010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x3e4014: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E4014u;
    SET_GPR_U32(ctx, 31, 0x3E401Cu);
    ctx->pc = 0x3E4018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4014u;
    // 0x3e4018: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E4014u, 0x3E401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E401Cu;
label_3e401c:
    // 0x3e401c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E401Cu;
    {
        const bool branch_taken_0x3e401c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E401Cu;
        // 0x3e4020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e401c) {
            ctx->pc = 0x3E4058u;
            goto label_3e4058;
        }
    }
    ctx->pc = 0x3E4024u;
    // 0x3e4024: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E4024u;
    {
        const bool branch_taken_0x3e4024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4024u;
        // 0x3e4028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4024) {
            ctx->pc = 0x3E403Cu;
            goto label_3e403c;
        }
    }
    ctx->pc = 0x3E402Cu;
    // 0x3e402c: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x3e402cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x3e4030: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3e4030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3e4034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E4034u;
    {
        const bool branch_taken_0x3e4034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4034u;
        // 0x3e4038: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4034) {
            ctx->pc = 0x3E4048u;
            goto label_3e4048;
        }
    }
    ctx->pc = 0x3E403Cu;
label_3e403c:
    // 0x3e403c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E403Cu;
    SET_GPR_U32(ctx, 31, 0x3E4044u);
    ctx->pc = 0x3E4040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E403Cu;
    // 0x3e4040: 0x2685e6a0  addiu       $a1, $s4, -0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E403Cu, 0x3E4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4044u;
label_3e4044:
    // 0x3e4044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e4044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4048:
    // 0x3e4048: 0xc0fe732  jal         func_3F9CC8
    ctx->pc = 0x3E4048u;
    SET_GPR_U32(ctx, 31, 0x3E4050u);
    ctx->pc = 0x3E404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4048u;
    // 0x3e404c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9CC8u, 0x3E4048u, 0x3E4050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4050u;
label_3e4050:
    // 0x3e4050: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x3E4050u;
    {
        const bool branch_taken_0x3e4050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4050u;
        // 0x3e4054: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4050) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4058u;
label_3e4058:
    // 0x3e4058: 0x2785ac50  addiu       $a1, $gp, -0x53B0
    ctx->pc = 0x3e4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945872));
    // 0x3e405c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E405Cu;
    SET_GPR_U32(ctx, 31, 0x3E4064u);
    ctx->pc = 0x3E4060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E405Cu;
    // 0x3e4060: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E405Cu, 0x3E4064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4064u;
label_3e4064:
    // 0x3e4064: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4064u;
    {
        const bool branch_taken_0x3e4064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4064u;
        // 0x3e4068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4064) {
            ctx->pc = 0x3E4084u;
            goto label_3e4084;
        }
    }
    ctx->pc = 0x3E406Cu;
    // 0x3e406c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e406cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4074: 0xc0fc9e2  jal         func_3F2788
    ctx->pc = 0x3E4074u;
    SET_GPR_U32(ctx, 31, 0x3E407Cu);
    ctx->pc = 0x3E4078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4074u;
    // 0x3e4078: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2788u, 0x3E4074u, 0x3E407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E407Cu;
label_3e407c:
    // 0x3e407c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x3E407Cu;
    {
        const bool branch_taken_0x3e407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E407Cu;
        // 0x3e4080: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e407c) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4084u;
label_3e4084:
    // 0x3e4084: 0x2785ac58  addiu       $a1, $gp, -0x53A8
    ctx->pc = 0x3e4084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945880));
    // 0x3e4088: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E4088u;
    SET_GPR_U32(ctx, 31, 0x3E4090u);
    ctx->pc = 0x3E408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4088u;
    // 0x3e408c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E4088u, 0x3E4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4090u;
label_3e4090:
    // 0x3e4090: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4090u;
    {
        const bool branch_taken_0x3e4090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4090u;
        // 0x3e4094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4090) {
            ctx->pc = 0x3E40B0u;
            goto label_3e40b0;
        }
    }
    ctx->pc = 0x3E4098u;
    // 0x3e4098: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e4098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e409c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e40a0: 0xc0fd52c  jal         func_3F54B0
    ctx->pc = 0x3E40A0u;
    SET_GPR_U32(ctx, 31, 0x3E40A8u);
    ctx->pc = 0x3E40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E40A0u;
    // 0x3e40a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F54B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F54B0u, 0x3E40A0u, 0x3E40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E40A8u;
label_3e40a8:
    // 0x3e40a8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3E40A8u;
    {
        const bool branch_taken_0x3e40a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40A8u;
        // 0x3e40ac: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e40a8) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E40B0u;
label_3e40b0:
    // 0x3e40b0: 0x2785ac60  addiu       $a1, $gp, -0x53A0
    ctx->pc = 0x3e40b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945888));
    // 0x3e40b4: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E40B4u;
    SET_GPR_U32(ctx, 31, 0x3E40BCu);
    ctx->pc = 0x3E40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E40B4u;
    // 0x3e40b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E40B4u, 0x3E40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E40BCu;
label_3e40bc:
    // 0x3e40bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E40BCu;
    {
        const bool branch_taken_0x3e40bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40BCu;
        // 0x3e40c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e40bc) {
            ctx->pc = 0x3E40DCu;
            goto label_3e40dc;
        }
    }
    ctx->pc = 0x3E40C4u;
    // 0x3e40c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e40c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e40c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e40c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e40cc: 0xc0fcd5c  jal         func_3F3570
    ctx->pc = 0x3E40CCu;
    SET_GPR_U32(ctx, 31, 0x3E40D4u);
    ctx->pc = 0x3E40D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E40CCu;
    // 0x3e40d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F3570u, 0x3E40CCu, 0x3E40D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E40D4u;
label_3e40d4:
    // 0x3e40d4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x3E40D4u;
    {
        const bool branch_taken_0x3e40d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40D4u;
        // 0x3e40d8: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e40d4) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E40DCu;
label_3e40dc:
    // 0x3e40dc: 0x2785ac68  addiu       $a1, $gp, -0x5398
    ctx->pc = 0x3e40dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945896));
    // 0x3e40e0: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E40E0u;
    SET_GPR_U32(ctx, 31, 0x3E40E8u);
    ctx->pc = 0x3E40E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E40E0u;
    // 0x3e40e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E40E0u, 0x3E40E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E40E8u;
label_3e40e8:
    // 0x3e40e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E40E8u;
    {
        const bool branch_taken_0x3e40e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40E8u;
        // 0x3e40ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e40e8) {
            ctx->pc = 0x3E4108u;
            goto label_3e4108;
        }
    }
    ctx->pc = 0x3E40F0u;
    // 0x3e40f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e40f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e40f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e40f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e40f8: 0xc0fcb5c  jal         func_3F2D70
    ctx->pc = 0x3E40F8u;
    SET_GPR_U32(ctx, 31, 0x3E4100u);
    ctx->pc = 0x3E40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E40F8u;
    // 0x3e40fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2D70u, 0x3E40F8u, 0x3E4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4100u;
label_3e4100:
    // 0x3e4100: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3E4100u;
    {
        const bool branch_taken_0x3e4100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4100u;
        // 0x3e4104: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4100) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4108u;
label_3e4108:
    // 0x3e4108: 0x2785ac70  addiu       $a1, $gp, -0x5390
    ctx->pc = 0x3e4108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945904));
    // 0x3e410c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E410Cu;
    SET_GPR_U32(ctx, 31, 0x3E4114u);
    ctx->pc = 0x3E4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E410Cu;
    // 0x3e4110: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E410Cu, 0x3E4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4114u;
label_3e4114:
    // 0x3e4114: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4114u;
    {
        const bool branch_taken_0x3e4114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4114u;
        // 0x3e4118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4114) {
            ctx->pc = 0x3E4134u;
            goto label_3e4134;
        }
    }
    ctx->pc = 0x3E411Cu;
    // 0x3e411c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e411cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4124: 0xc0fd666  jal         func_3F5998
    ctx->pc = 0x3E4124u;
    SET_GPR_U32(ctx, 31, 0x3E412Cu);
    ctx->pc = 0x3E4128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4124u;
    // 0x3e4128: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5998u, 0x3E4124u, 0x3E412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E412Cu;
label_3e412c:
    // 0x3e412c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3E412Cu;
    {
        const bool branch_taken_0x3e412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E412Cu;
        // 0x3e4130: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e412c) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4134u;
label_3e4134:
    // 0x3e4134: 0x2785ac88  addiu       $a1, $gp, -0x5378
    ctx->pc = 0x3e4134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945928));
    // 0x3e4138: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E4138u;
    SET_GPR_U32(ctx, 31, 0x3E4140u);
    ctx->pc = 0x3E413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4138u;
    // 0x3e413c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E4138u, 0x3E4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4140u;
label_3e4140:
    // 0x3e4140: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4140u;
    {
        const bool branch_taken_0x3e4140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4140u;
        // 0x3e4144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4140) {
            ctx->pc = 0x3E4160u;
            goto label_3e4160;
        }
    }
    ctx->pc = 0x3E4148u;
    // 0x3e4148: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e4148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e414c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4150: 0xc0fd8ac  jal         func_3F62B0
    ctx->pc = 0x3E4150u;
    SET_GPR_U32(ctx, 31, 0x3E4158u);
    ctx->pc = 0x3E4154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4150u;
    // 0x3e4154: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F62B0u, 0x3E4150u, 0x3E4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4158u;
label_3e4158:
    // 0x3e4158: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x3E4158u;
    {
        const bool branch_taken_0x3e4158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4158u;
        // 0x3e415c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4158) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4160u;
label_3e4160:
    // 0x3e4160: 0x2785ac90  addiu       $a1, $gp, -0x5370
    ctx->pc = 0x3e4160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945936));
    // 0x3e4164: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E4164u;
    SET_GPR_U32(ctx, 31, 0x3E416Cu);
    ctx->pc = 0x3E4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4164u;
    // 0x3e4168: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E4164u, 0x3E416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E416Cu;
label_3e416c:
    // 0x3e416c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E416Cu;
    {
        const bool branch_taken_0x3e416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E416Cu;
        // 0x3e4170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e416c) {
            ctx->pc = 0x3E418Cu;
            goto label_3e418c;
        }
    }
    ctx->pc = 0x3E4174u;
    // 0x3e4174: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e4174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e417c: 0xc0fd994  jal         func_3F6650
    ctx->pc = 0x3E417Cu;
    SET_GPR_U32(ctx, 31, 0x3E4184u);
    ctx->pc = 0x3E4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E417Cu;
    // 0x3e4180: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6650u, 0x3E417Cu, 0x3E4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4184u;
label_3e4184:
    // 0x3e4184: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3E4184u;
    {
        const bool branch_taken_0x3e4184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4184u;
        // 0x3e4188: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4184) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E418Cu;
label_3e418c:
    // 0x3e418c: 0x2785ac98  addiu       $a1, $gp, -0x5368
    ctx->pc = 0x3e418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945944));
    // 0x3e4190: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E4190u;
    SET_GPR_U32(ctx, 31, 0x3E4198u);
    ctx->pc = 0x3E4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4190u;
    // 0x3e4194: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E4190u, 0x3E4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4198u;
label_3e4198:
    // 0x3e4198: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4198u;
    {
        const bool branch_taken_0x3e4198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4198u;
        // 0x3e419c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4198) {
            ctx->pc = 0x3E41B8u;
            goto label_3e41b8;
        }
    }
    ctx->pc = 0x3E41A0u;
    // 0x3e41a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e41a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e41a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e41a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e41a8: 0xc0fdb1c  jal         func_3F6C70
    ctx->pc = 0x3E41A8u;
    SET_GPR_U32(ctx, 31, 0x3E41B0u);
    ctx->pc = 0x3E41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E41A8u;
    // 0x3e41ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6C70u, 0x3E41A8u, 0x3E41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41B0u;
label_3e41b0:
    // 0x3e41b0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3E41B0u;
    {
        const bool branch_taken_0x3e41b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41B0u;
        // 0x3e41b4: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e41b0) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E41B8u;
label_3e41b8:
    // 0x3e41b8: 0x2785aca0  addiu       $a1, $gp, -0x5360
    ctx->pc = 0x3e41b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945952));
    // 0x3e41bc: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E41BCu;
    SET_GPR_U32(ctx, 31, 0x3E41C4u);
    ctx->pc = 0x3E41C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E41BCu;
    // 0x3e41c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E41BCu, 0x3E41C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41C4u;
label_3e41c4:
    // 0x3e41c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E41C4u;
    {
        const bool branch_taken_0x3e41c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41C4u;
        // 0x3e41c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e41c4) {
            ctx->pc = 0x3E41E4u;
            goto label_3e41e4;
        }
    }
    ctx->pc = 0x3E41CCu;
    // 0x3e41cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e41ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e41d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e41d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e41d4: 0xc0fd7c4  jal         func_3F5F10
    ctx->pc = 0x3E41D4u;
    SET_GPR_U32(ctx, 31, 0x3E41DCu);
    ctx->pc = 0x3E41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E41D4u;
    // 0x3e41d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5F10u, 0x3E41D4u, 0x3E41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41DCu;
label_3e41dc:
    // 0x3e41dc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3E41DCu;
    {
        const bool branch_taken_0x3e41dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41DCu;
        // 0x3e41e0: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e41dc) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E41E4u;
label_3e41e4:
    // 0x3e41e4: 0x2785aca8  addiu       $a1, $gp, -0x5358
    ctx->pc = 0x3e41e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945960));
    // 0x3e41e8: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E41E8u;
    SET_GPR_U32(ctx, 31, 0x3E41F0u);
    ctx->pc = 0x3E41ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E41E8u;
    // 0x3e41ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E41E8u, 0x3E41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41F0u;
label_3e41f0:
    // 0x3e41f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E41F0u;
    {
        const bool branch_taken_0x3e41f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41F0u;
        // 0x3e41f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e41f0) {
            ctx->pc = 0x3E4210u;
            goto label_3e4210;
        }
    }
    ctx->pc = 0x3E41F8u;
    // 0x3e41f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e41f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e41fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e41fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4200: 0xc0fcc68  jal         func_3F31A0
    ctx->pc = 0x3E4200u;
    SET_GPR_U32(ctx, 31, 0x3E4208u);
    ctx->pc = 0x3E4204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4200u;
    // 0x3e4204: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F31A0u, 0x3E4200u, 0x3E4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4208u;
label_3e4208:
    // 0x3e4208: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3E4208u;
    {
        const bool branch_taken_0x3e4208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4208u;
        // 0x3e420c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4208) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4210u;
label_3e4210:
    // 0x3e4210: 0x2785acb8  addiu       $a1, $gp, -0x5348
    ctx->pc = 0x3e4210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945976));
    // 0x3e4214: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E4214u;
    SET_GPR_U32(ctx, 31, 0x3E421Cu);
    ctx->pc = 0x3E4218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4214u;
    // 0x3e4218: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E4214u, 0x3E421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E421Cu;
label_3e421c:
    // 0x3e421c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E421Cu;
    {
        const bool branch_taken_0x3e421c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E421Cu;
        // 0x3e4220: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e421c) {
            ctx->pc = 0x3E423Cu;
            goto label_3e423c;
        }
    }
    ctx->pc = 0x3E4224u;
    // 0x3e4224: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e4224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e422c: 0xc0fd000  jal         func_3F4000
    ctx->pc = 0x3E422Cu;
    SET_GPR_U32(ctx, 31, 0x3E4234u);
    ctx->pc = 0x3E4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E422Cu;
    // 0x3e4230: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4000u, 0x3E422Cu, 0x3E4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4234u;
label_3e4234:
    // 0x3e4234: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3E4234u;
    {
        const bool branch_taken_0x3e4234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4234u;
        // 0x3e4238: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4234) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E423Cu;
label_3e423c:
    // 0x3e423c: 0x2785ac78  addiu       $a1, $gp, -0x5388
    ctx->pc = 0x3e423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945912));
    // 0x3e4240: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E4240u;
    SET_GPR_U32(ctx, 31, 0x3E4248u);
    ctx->pc = 0x3E4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4240u;
    // 0x3e4244: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E4240u, 0x3E4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4248u;
label_3e4248:
    // 0x3e4248: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4248u;
    {
        const bool branch_taken_0x3e4248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4248u;
        // 0x3e424c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4248) {
            ctx->pc = 0x3E4268u;
            goto label_3e4268;
        }
    }
    ctx->pc = 0x3E4250u;
    // 0x3e4250: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e4250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4258: 0xc0fd150  jal         func_3F4540
    ctx->pc = 0x3E4258u;
    SET_GPR_U32(ctx, 31, 0x3E4260u);
    ctx->pc = 0x3E425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4258u;
    // 0x3e425c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4540u, 0x3E4258u, 0x3E4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4260u;
label_3e4260:
    // 0x3e4260: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E4260u;
    {
        const bool branch_taken_0x3e4260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4260u;
        // 0x3e4264: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4260) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4268u;
label_3e4268:
    // 0x3e4268: 0x2785acb0  addiu       $a1, $gp, -0x5350
    ctx->pc = 0x3e4268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945968));
    // 0x3e426c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E426Cu;
    SET_GPR_U32(ctx, 31, 0x3E4274u);
    ctx->pc = 0x3E4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E426Cu;
    // 0x3e4270: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E426Cu, 0x3E4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4274u;
label_3e4274:
    // 0x3e4274: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4274u;
    {
        const bool branch_taken_0x3e4274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4274u;
        // 0x3e4278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4274) {
            ctx->pc = 0x3E4294u;
            goto label_3e4294;
        }
    }
    ctx->pc = 0x3E427Cu;
    // 0x3e427c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e427cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4284: 0xc0fd290  jal         func_3F4A40
    ctx->pc = 0x3E4284u;
    SET_GPR_U32(ctx, 31, 0x3E428Cu);
    ctx->pc = 0x3E4288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4284u;
    // 0x3e4288: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4A40u, 0x3E4284u, 0x3E428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E428Cu;
label_3e428c:
    // 0x3e428c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3E428Cu;
    {
        const bool branch_taken_0x3e428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E428Cu;
        // 0x3e4290: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e428c) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4294u;
label_3e4294:
    // 0x3e4294: 0x2785acc0  addiu       $a1, $gp, -0x5340
    ctx->pc = 0x3e4294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945984));
    // 0x3e4298: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E4298u;
    SET_GPR_U32(ctx, 31, 0x3E42A0u);
    ctx->pc = 0x3E429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4298u;
    // 0x3e429c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E4298u, 0x3E42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42A0u;
label_3e42a0:
    // 0x3e42a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E42A0u;
    {
        const bool branch_taken_0x3e42a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42A0u;
        // 0x3e42a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e42a0) {
            ctx->pc = 0x3E42C0u;
            goto label_3e42c0;
        }
    }
    ctx->pc = 0x3E42A8u;
    // 0x3e42a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e42a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e42acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42b0: 0xc0fdcec  jal         func_3F73B0
    ctx->pc = 0x3E42B0u;
    SET_GPR_U32(ctx, 31, 0x3E42B8u);
    ctx->pc = 0x3E42B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42B0u;
    // 0x3e42b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F73B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F73B0u, 0x3E42B0u, 0x3E42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42B8u;
label_3e42b8:
    // 0x3e42b8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3E42B8u;
    {
        const bool branch_taken_0x3e42b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42B8u;
        // 0x3e42bc: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e42b8) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E42C0u;
label_3e42c0:
    // 0x3e42c0: 0x2785acc8  addiu       $a1, $gp, -0x5338
    ctx->pc = 0x3e42c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945992));
    // 0x3e42c4: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E42C4u;
    SET_GPR_U32(ctx, 31, 0x3E42CCu);
    ctx->pc = 0x3E42C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42C4u;
    // 0x3e42c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E42C4u, 0x3E42CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42CCu;
label_3e42cc:
    // 0x3e42cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E42CCu;
    {
        const bool branch_taken_0x3e42cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42CCu;
        // 0x3e42d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e42cc) {
            ctx->pc = 0x3E42ECu;
            goto label_3e42ec;
        }
    }
    ctx->pc = 0x3E42D4u;
    // 0x3e42d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e42d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e42d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42dc: 0xc0fdc20  jal         func_3F7080
    ctx->pc = 0x3E42DCu;
    SET_GPR_U32(ctx, 31, 0x3E42E4u);
    ctx->pc = 0x3E42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42DCu;
    // 0x3e42e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7080u, 0x3E42DCu, 0x3E42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42E4u;
label_3e42e4:
    // 0x3e42e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3E42E4u;
    {
        const bool branch_taken_0x3e42e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42E4u;
        // 0x3e42e8: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e42e4) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E42ECu;
label_3e42ec:
    // 0x3e42ec: 0x2785acd0  addiu       $a1, $gp, -0x5330
    ctx->pc = 0x3e42ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946000));
    // 0x3e42f0: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E42F0u;
    SET_GPR_U32(ctx, 31, 0x3E42F8u);
    ctx->pc = 0x3E42F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42F0u;
    // 0x3e42f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E42F0u, 0x3E42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42F8u;
label_3e42f8:
    // 0x3e42f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E42F8u;
    {
        const bool branch_taken_0x3e42f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42F8u;
        // 0x3e42fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e42f8) {
            ctx->pc = 0x3E4318u;
            goto label_3e4318;
        }
    }
    ctx->pc = 0x3E4300u;
    // 0x3e4300: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e4300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4308: 0xc0fd3bc  jal         func_3F4EF0
    ctx->pc = 0x3E4308u;
    SET_GPR_U32(ctx, 31, 0x3E4310u);
    ctx->pc = 0x3E430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4308u;
    // 0x3e430c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4EF0u, 0x3E4308u, 0x3E4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4310u;
label_3e4310:
    // 0x3e4310: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E4310u;
    {
        const bool branch_taken_0x3e4310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4310u;
        // 0x3e4314: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4310) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4318u;
label_3e4318:
    // 0x3e4318: 0x2785acd8  addiu       $a1, $gp, -0x5328
    ctx->pc = 0x3e4318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946008));
    // 0x3e431c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E431Cu;
    SET_GPR_U32(ctx, 31, 0x3E4324u);
    ctx->pc = 0x3E4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E431Cu;
    // 0x3e4320: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E431Cu, 0x3E4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4324u;
label_3e4324:
    // 0x3e4324: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E4324u;
    {
        const bool branch_taken_0x3e4324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4324u;
        // 0x3e4328: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4324) {
            ctx->pc = 0x3E4340u;
            goto label_3e4340;
        }
    }
    ctx->pc = 0x3E432Cu;
    // 0x3e432c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4330: 0xc0fdd60  jal         func_3F7580
    ctx->pc = 0x3E4330u;
    SET_GPR_U32(ctx, 31, 0x3E4338u);
    ctx->pc = 0x3E4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4330u;
    // 0x3e4334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7580u, 0x3E4330u, 0x3E4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4338u;
label_3e4338:
    // 0x3e4338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E4338u;
    {
        const bool branch_taken_0x3e4338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4338u;
        // 0x3e433c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4338) {
            ctx->pc = 0x3E4350u;
            goto label_3e4350;
        }
    }
    ctx->pc = 0x3E4340u;
label_3e4340:
    // 0x3e4340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4344: 0xc0fddee  jal         func_3F77B8
    ctx->pc = 0x3E4344u;
    SET_GPR_U32(ctx, 31, 0x3E434Cu);
    ctx->pc = 0x3E4348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4344u;
    // 0x3e4348: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F77B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F77B8u, 0x3E4344u, 0x3E434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E434Cu;
label_3e434c:
    // 0x3e434c: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x3e434cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
label_3e4350:
    // 0x3e4350: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3e4350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3e4354: 0x5040feea  beql        $v0, $zero, . + 4 + (-0x116 << 2)
    ctx->pc = 0x3E4354u;
    {
        const bool branch_taken_0x3e4354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4354) {
            ctx->pc = 0x3E4358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4354u;
            // 0x3e4358: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3f00;
        }
    }
    ctx->pc = 0x3E435Cu;
    // 0x3e435c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e435cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e4360: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e4360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e4364: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e4364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e4368: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e4368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e436c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e436cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e4370: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3e4370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e4374: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3e4374u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e4378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e4378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e437c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E437Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E437Cu;
        // 0x3e4380: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E437Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4384u;
    // 0x3e4384: 0x0  nop
    ctx->pc = 0x3e4384u;
    // NOP
    ctx->pc = 0x3e4388u;
}
