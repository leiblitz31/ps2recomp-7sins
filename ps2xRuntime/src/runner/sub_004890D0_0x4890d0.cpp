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

// Function: sub_004890D0
// Address: 0x4890d0 - 0x4891b0
void sub_004890D0_0x4890d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004890D0_0x4890d0");
#endif

    switch (ctx->pc) {
        case 0x4890d0u: goto label_4890d0;
        case 0x4890d4u: goto label_4890d4;
        case 0x4890d8u: goto label_4890d8;
        case 0x4890dcu: goto label_4890dc;
        case 0x4890e0u: goto label_4890e0;
        case 0x4890e4u: goto label_4890e4;
        case 0x4890e8u: goto label_4890e8;
        case 0x4890ecu: goto label_4890ec;
        case 0x4890f0u: goto label_4890f0;
        case 0x4890f4u: goto label_4890f4;
        case 0x4890f8u: goto label_4890f8;
        case 0x4890fcu: goto label_4890fc;
        case 0x489100u: goto label_489100;
        case 0x489104u: goto label_489104;
        case 0x489108u: goto label_489108;
        case 0x48910cu: goto label_48910c;
        case 0x489110u: goto label_489110;
        case 0x489114u: goto label_489114;
        case 0x489118u: goto label_489118;
        case 0x48911cu: goto label_48911c;
        case 0x489120u: goto label_489120;
        case 0x489124u: goto label_489124;
        case 0x489128u: goto label_489128;
        case 0x48912cu: goto label_48912c;
        case 0x489130u: goto label_489130;
        case 0x489134u: goto label_489134;
        case 0x489138u: goto label_489138;
        case 0x48913cu: goto label_48913c;
        case 0x489140u: goto label_489140;
        case 0x489144u: goto label_489144;
        case 0x489148u: goto label_489148;
        case 0x48914cu: goto label_48914c;
        case 0x489150u: goto label_489150;
        case 0x489154u: goto label_489154;
        case 0x489158u: goto label_489158;
        case 0x48915cu: goto label_48915c;
        case 0x489160u: goto label_489160;
        case 0x489164u: goto label_489164;
        case 0x489168u: goto label_489168;
        case 0x48916cu: goto label_48916c;
        case 0x489170u: goto label_489170;
        case 0x489174u: goto label_489174;
        case 0x489178u: goto label_489178;
        case 0x48917cu: goto label_48917c;
        case 0x489180u: goto label_489180;
        case 0x489184u: goto label_489184;
        case 0x489188u: goto label_489188;
        case 0x48918cu: goto label_48918c;
        case 0x489190u: goto label_489190;
        case 0x489194u: goto label_489194;
        case 0x489198u: goto label_489198;
        case 0x48919cu: goto label_48919c;
        case 0x4891a0u: goto label_4891a0;
        case 0x4891a4u: goto label_4891a4;
        case 0x4891a8u: goto label_4891a8;
        case 0x4891acu: goto label_4891ac;
        default: break;
    }

    ctx->pc = 0x4890d0u;

label_4890d0:
    // 0x4890d0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4890d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_4890d4:
    // 0x4890d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4890d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4890d8:
    // 0x4890d8: 0x8f82c0ec  lw          $v0, -0x3F14($gp)
    ctx->pc = 0x4890d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951148)));
label_4890dc:
    // 0x4890dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4890dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4890e0:
    // 0x4890e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4890e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4890e4:
    // 0x4890e4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4890e8:
    if (ctx->pc == 0x4890E8u) {
        ctx->pc = 0x4890ECu;
        goto label_4890ec;
    }
    ctx->pc = 0x4890E4u;
    {
        const bool branch_taken_0x4890e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4890e4) {
            ctx->pc = 0x489194u;
            goto label_489194;
        }
    }
    ctx->pc = 0x4890ECu;
label_4890ec:
    // 0x4890ec: 0x8f82b5fc  lw          $v0, -0x4A04($gp)
    ctx->pc = 0x4890ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948348)));
label_4890f0:
    // 0x4890f0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4890f4:
    if (ctx->pc == 0x4890F4u) {
        ctx->pc = 0x4890F8u;
        goto label_4890f8;
    }
    ctx->pc = 0x4890F0u;
    {
        const bool branch_taken_0x4890f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4890f0) {
            ctx->pc = 0x489194u;
            goto label_489194;
        }
    }
    ctx->pc = 0x4890F8u;
label_4890f8:
    // 0x4890f8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4890f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4890fc:
    // 0x4890fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4890fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_489100:
    // 0x489100: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x489100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_489104:
    // 0x489104: 0xc115ee8  jal         func_457BA0
label_489108:
    if (ctx->pc == 0x489108u) {
        ctx->pc = 0x48910Cu;
        goto label_48910c;
    }
    ctx->pc = 0x489104u;
    SET_GPR_U32(ctx, 31, 0x48910Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x489104u, 0x48910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48910Cu;
label_48910c:
    // 0x48910c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_489110:
    if (ctx->pc == 0x489110u) {
        ctx->pc = 0x489114u;
        goto label_489114;
    }
    ctx->pc = 0x48910Cu;
    {
        const bool branch_taken_0x48910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48910c) {
            ctx->pc = 0x489194u;
            goto label_489194;
        }
    }
    ctx->pc = 0x489114u;
label_489114:
    // 0x489114: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x489114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_489118:
    // 0x489118: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48911c:
    if (ctx->pc == 0x48911Cu) {
        ctx->pc = 0x489120u;
        goto label_489120;
    }
    ctx->pc = 0x489118u;
    {
        const bool branch_taken_0x489118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489118) {
            ctx->pc = 0x489194u;
            goto label_489194;
        }
    }
    ctx->pc = 0x489120u;
label_489120:
    // 0x489120: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x489120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_489124:
    // 0x489124: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x489124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_489128:
    // 0x489128: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x489128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48912c:
    // 0x48912c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48912cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_489130:
    // 0x489130: 0x24e744c0  addiu       $a3, $a3, 0x44C0
    ctx->pc = 0x489130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17600));
label_489134:
    // 0x489134: 0x24080265  addiu       $t0, $zero, 0x265
    ctx->pc = 0x489134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
label_489138:
    // 0x489138: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x489138u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48913c:
    // 0x48913c: 0x252944e0  addiu       $t1, $t1, 0x44E0
    ctx->pc = 0x48913cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 17632));
label_489140:
    // 0x489140: 0xc113940  jal         func_44E500
label_489144:
    if (ctx->pc == 0x489144u) {
        ctx->pc = 0x489148u;
        goto label_489148;
    }
    ctx->pc = 0x489140u;
    SET_GPR_U32(ctx, 31, 0x489148u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x489140u, 0x489148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489148u;
label_489148:
    // 0x489148: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x489148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48914c:
    // 0x48914c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48914cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_489150:
    // 0x489150: 0x24a54500  addiu       $a1, $a1, 0x4500
    ctx->pc = 0x489150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17664));
label_489154:
    // 0x489154: 0xc115c24  jal         func_457090
label_489158:
    if (ctx->pc == 0x489158u) {
        ctx->pc = 0x48915Cu;
        goto label_48915c;
    }
    ctx->pc = 0x489154u;
    SET_GPR_U32(ctx, 31, 0x48915Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x489154u, 0x48915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48915Cu;
label_48915c:
    // 0x48915c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_489160:
    // 0x489160: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x489160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_489164:
    // 0x489164: 0x40f809  jalr        $v0
label_489168:
    if (ctx->pc == 0x489168u) {
        ctx->pc = 0x48916Cu;
        goto label_48916c;
    }
    ctx->pc = 0x489164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48916Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489164u, 0x48916Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48916Cu;
label_48916c:
    // 0x48916c: 0xaf82b5fc  sw          $v0, -0x4A04($gp)
    ctx->pc = 0x48916cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948348), GPR_U32(ctx, 2));
label_489170:
    // 0x489170: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_489174:
    // 0x489174: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_489178:
    if (ctx->pc == 0x489178u) {
        ctx->pc = 0x48917Cu;
        goto label_48917c;
    }
    ctx->pc = 0x489174u;
    {
        const bool branch_taken_0x489174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489174) {
            ctx->pc = 0x489184u;
            goto label_489184;
        }
    }
    ctx->pc = 0x48917Cu;
label_48917c:
    // 0x48917c: 0xd  break       0
    ctx->pc = 0x48917cu;
    runtime->handleBreak(rdram, ctx);
label_489180:
    // 0x489180: 0x0  nop
    ctx->pc = 0x489180u;
    // NOP
label_489184:
    // 0x489184: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x489184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_489188:
    // 0x489188: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x489188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48918c:
    // 0x48918c: 0xc11392c  jal         func_44E4B0
label_489190:
    if (ctx->pc == 0x489190u) {
        ctx->pc = 0x489194u;
        goto label_489194;
    }
    ctx->pc = 0x48918Cu;
    SET_GPR_U32(ctx, 31, 0x489194u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48918Cu, 0x489194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489194u;
label_489194:
    // 0x489194: 0x8f82c0ec  lw          $v0, -0x3F14($gp)
    ctx->pc = 0x489194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951148)));
label_489198:
    // 0x489198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48919c:
    // 0x48919c: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x48919cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4891a0:
    // 0x4891a0: 0x3e00008  jr          $ra
label_4891a4:
    if (ctx->pc == 0x4891A4u) {
        ctx->pc = 0x4891A8u;
        goto label_4891a8;
    }
    ctx->pc = 0x4891A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4891A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4891A8u;
label_4891a8:
    // 0x4891a8: 0x0  nop
    ctx->pc = 0x4891a8u;
    // NOP
label_4891ac:
    // 0x4891ac: 0x0  nop
    ctx->pc = 0x4891acu;
    // NOP
    ctx->pc = 0x4891b0u;
}
