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

// Function: sub_00415188
// Address: 0x415188 - 0x4152a0
void sub_00415188_0x415188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415188_0x415188");
#endif

    switch (ctx->pc) {
        case 0x4151acu: goto label_4151ac;
        case 0x4151d8u: goto label_4151d8;
        case 0x4151e8u: goto label_4151e8;
        case 0x4151fcu: goto label_4151fc;
        case 0x415218u: goto label_415218;
        case 0x415228u: goto label_415228;
        case 0x415234u: goto label_415234;
        case 0x415240u: goto label_415240;
        case 0x41524cu: goto label_41524c;
        case 0x415260u: goto label_415260;
        case 0x41527cu: goto label_41527c;
        case 0x415288u: goto label_415288;
        default: break;
    }

    ctx->pc = 0x415188u;

    // 0x415188: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x415188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x41518c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x415190: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x415190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x415194: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x415194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x415198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41519c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x41519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4151a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4151a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4151a4: 0xc103322  jal         func_40CC88
    ctx->pc = 0x4151A4u;
    SET_GPR_U32(ctx, 31, 0x4151ACu);
    ctx->pc = 0x4151A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4151A4u;
    // 0x4151a8: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x4151A4u, 0x4151ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4151ACu;
label_4151ac:
    // 0x4151ac: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4151ACu;
    {
        const bool branch_taken_0x4151ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4151B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4151ACu;
        // 0x4151b0: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4151ac) {
            ctx->pc = 0x415288u;
            goto label_415288;
        }
    }
    ctx->pc = 0x4151B4u;
    // 0x4151b4: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4151b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x4151b8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4151b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x4151bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4151bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4151c0: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4151c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x4151c4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x4151C4u;
    {
        const bool branch_taken_0x4151c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4151C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4151C4u;
        // 0x4151c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4151c4) {
            ctx->pc = 0x415268u;
            goto label_415268;
        }
    }
    ctx->pc = 0x4151CCu;
    // 0x4151cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4151ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4151d0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4151D0u;
    SET_GPR_U32(ctx, 31, 0x4151D8u);
    ctx->pc = 0x4151D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4151D0u;
    // 0x4151d4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4151D0u, 0x4151D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4151D8u;
label_4151d8:
    // 0x4151d8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4151d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4151dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4151dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4151e0: 0xc10480a  jal         func_412028
    ctx->pc = 0x4151E0u;
    SET_GPR_U32(ctx, 31, 0x4151E8u);
    ctx->pc = 0x4151E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4151E0u;
    // 0x4151e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x4151E0u, 0x4151E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4151E8u;
label_4151e8:
    // 0x4151e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4151e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4151ec: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x4151ECu;
    {
        const bool branch_taken_0x4151ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4151F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4151ECu;
        // 0x4151f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4151ec) {
            ctx->pc = 0x41528Cu;
            goto label_41528c;
        }
    }
    ctx->pc = 0x4151F4u;
    // 0x4151f4: 0xc105eea  jal         func_417BA8
    ctx->pc = 0x4151F4u;
    SET_GPR_U32(ctx, 31, 0x4151FCu);
    ctx->pc = 0x417BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417BA8u, 0x4151F4u, 0x4151FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4151FCu;
label_4151fc:
    // 0x4151fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4151fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415200: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x415200u;
    {
        const bool branch_taken_0x415200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415200u;
        // 0x415204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415200) {
            ctx->pc = 0x415288u;
            goto label_415288;
        }
    }
    ctx->pc = 0x415208u;
    // 0x415208: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x415208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41520c: 0x2484c898  addiu       $a0, $a0, -0x3768
    ctx->pc = 0x41520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
    // 0x415210: 0xc1049e2  jal         func_412788
    ctx->pc = 0x415210u;
    SET_GPR_U32(ctx, 31, 0x415218u);
    ctx->pc = 0x415214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415210u;
    // 0x415214: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x415210u, 0x415218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415218u;
label_415218:
    // 0x415218: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x415218u;
    {
        const bool branch_taken_0x415218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415218u;
        // 0x41521c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415218) {
            ctx->pc = 0x415288u;
            goto label_415288;
        }
    }
    ctx->pc = 0x415220u;
    // 0x415220: 0xc105fee  jal         func_417FB8
    ctx->pc = 0x415220u;
    SET_GPR_U32(ctx, 31, 0x415228u);
    ctx->pc = 0x415224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415220u;
    // 0x415224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417FB8u, 0x415220u, 0x415228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415228u;
label_415228:
    // 0x415228: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x415228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x41522c: 0xc105fdc  jal         func_417F70
    ctx->pc = 0x41522Cu;
    SET_GPR_U32(ctx, 31, 0x415234u);
    ctx->pc = 0x415230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41522Cu;
    // 0x415230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417F70u, 0x41522Cu, 0x415234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415234u;
label_415234:
    // 0x415234: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x415234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x415238: 0xc10604c  jal         func_418130
    ctx->pc = 0x415238u;
    SET_GPR_U32(ctx, 31, 0x415240u);
    ctx->pc = 0x41523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415238u;
    // 0x41523c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418130u, 0x415238u, 0x415240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415240u;
label_415240:
    // 0x415240: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x415240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x415244: 0xc106080  jal         func_418200
    ctx->pc = 0x415244u;
    SET_GPR_U32(ctx, 31, 0x41524Cu);
    ctx->pc = 0x415248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415244u;
    // 0x415248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418200u, 0x415244u, 0x41524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41524Cu;
label_41524c:
    // 0x41524c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x41524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x415250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415254: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x415254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x415258: 0xc106008  jal         func_418020
    ctx->pc = 0x415258u;
    SET_GPR_U32(ctx, 31, 0x415260u);
    ctx->pc = 0x41525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415258u;
    // 0x41525c: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x418020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418020u, 0x415258u, 0x415260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415260u;
label_415260:
    // 0x415260: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x415260u;
    {
        const bool branch_taken_0x415260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415260u;
        // 0x415264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415260) {
            ctx->pc = 0x41528Cu;
            goto label_41528c;
        }
    }
    ctx->pc = 0x415268u;
label_415268:
    // 0x415268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x415268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41526c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41526cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x415270: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x415270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x415274: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x415274u;
    SET_GPR_U32(ctx, 31, 0x41527Cu);
    ctx->pc = 0x415278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415274u;
    // 0x415278: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x415274u, 0x41527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41527Cu;
label_41527c:
    // 0x41527c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x41527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x415280: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x415280u;
    SET_GPR_U32(ctx, 31, 0x415288u);
    ctx->pc = 0x415284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415280u;
    // 0x415284: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x415280u, 0x415288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415288u;
label_415288:
    // 0x415288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x415288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41528c:
    // 0x41528c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41528cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x415290: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x415290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x415294: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x415294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x415298: 0x3e00008  jr          $ra
    ctx->pc = 0x415298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415298u;
        // 0x41529c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4152A0u;
}
