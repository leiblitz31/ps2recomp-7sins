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

// Function: sub_00322108
// Address: 0x322108 - 0x3222c0
void sub_00322108_0x322108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322108_0x322108");
#endif

    switch (ctx->pc) {
        case 0x322108u: goto label_322108;
        case 0x32210cu: goto label_32210c;
        case 0x322110u: goto label_322110;
        case 0x322114u: goto label_322114;
        case 0x322118u: goto label_322118;
        case 0x32211cu: goto label_32211c;
        case 0x322120u: goto label_322120;
        case 0x322124u: goto label_322124;
        case 0x322128u: goto label_322128;
        case 0x32212cu: goto label_32212c;
        case 0x322130u: goto label_322130;
        case 0x322134u: goto label_322134;
        case 0x322138u: goto label_322138;
        case 0x32213cu: goto label_32213c;
        case 0x322140u: goto label_322140;
        case 0x322144u: goto label_322144;
        case 0x322148u: goto label_322148;
        case 0x32214cu: goto label_32214c;
        case 0x322150u: goto label_322150;
        case 0x322154u: goto label_322154;
        case 0x322158u: goto label_322158;
        case 0x32215cu: goto label_32215c;
        case 0x322160u: goto label_322160;
        case 0x322164u: goto label_322164;
        case 0x322168u: goto label_322168;
        case 0x32216cu: goto label_32216c;
        case 0x322170u: goto label_322170;
        case 0x322174u: goto label_322174;
        case 0x322178u: goto label_322178;
        case 0x32217cu: goto label_32217c;
        case 0x322180u: goto label_322180;
        case 0x322184u: goto label_322184;
        case 0x322188u: goto label_322188;
        case 0x32218cu: goto label_32218c;
        case 0x322190u: goto label_322190;
        case 0x322194u: goto label_322194;
        case 0x322198u: goto label_322198;
        case 0x32219cu: goto label_32219c;
        case 0x3221a0u: goto label_3221a0;
        case 0x3221a4u: goto label_3221a4;
        case 0x3221a8u: goto label_3221a8;
        case 0x3221acu: goto label_3221ac;
        case 0x3221b0u: goto label_3221b0;
        case 0x3221b4u: goto label_3221b4;
        case 0x3221b8u: goto label_3221b8;
        case 0x3221bcu: goto label_3221bc;
        case 0x3221c0u: goto label_3221c0;
        case 0x3221c4u: goto label_3221c4;
        case 0x3221c8u: goto label_3221c8;
        case 0x3221ccu: goto label_3221cc;
        case 0x3221d0u: goto label_3221d0;
        case 0x3221d4u: goto label_3221d4;
        case 0x3221d8u: goto label_3221d8;
        case 0x3221dcu: goto label_3221dc;
        case 0x3221e0u: goto label_3221e0;
        case 0x3221e4u: goto label_3221e4;
        case 0x3221e8u: goto label_3221e8;
        case 0x3221ecu: goto label_3221ec;
        case 0x3221f0u: goto label_3221f0;
        case 0x3221f4u: goto label_3221f4;
        case 0x3221f8u: goto label_3221f8;
        case 0x3221fcu: goto label_3221fc;
        case 0x322200u: goto label_322200;
        case 0x322204u: goto label_322204;
        case 0x322208u: goto label_322208;
        case 0x32220cu: goto label_32220c;
        case 0x322210u: goto label_322210;
        case 0x322214u: goto label_322214;
        case 0x322218u: goto label_322218;
        case 0x32221cu: goto label_32221c;
        case 0x322220u: goto label_322220;
        case 0x322224u: goto label_322224;
        case 0x322228u: goto label_322228;
        case 0x32222cu: goto label_32222c;
        case 0x322230u: goto label_322230;
        case 0x322234u: goto label_322234;
        case 0x322238u: goto label_322238;
        case 0x32223cu: goto label_32223c;
        case 0x322240u: goto label_322240;
        case 0x322244u: goto label_322244;
        case 0x322248u: goto label_322248;
        case 0x32224cu: goto label_32224c;
        case 0x322250u: goto label_322250;
        case 0x322254u: goto label_322254;
        case 0x322258u: goto label_322258;
        case 0x32225cu: goto label_32225c;
        case 0x322260u: goto label_322260;
        case 0x322264u: goto label_322264;
        case 0x322268u: goto label_322268;
        case 0x32226cu: goto label_32226c;
        case 0x322270u: goto label_322270;
        case 0x322274u: goto label_322274;
        case 0x322278u: goto label_322278;
        case 0x32227cu: goto label_32227c;
        case 0x322280u: goto label_322280;
        case 0x322284u: goto label_322284;
        case 0x322288u: goto label_322288;
        case 0x32228cu: goto label_32228c;
        case 0x322290u: goto label_322290;
        case 0x322294u: goto label_322294;
        case 0x322298u: goto label_322298;
        case 0x32229cu: goto label_32229c;
        case 0x3222a0u: goto label_3222a0;
        case 0x3222a4u: goto label_3222a4;
        case 0x3222a8u: goto label_3222a8;
        case 0x3222acu: goto label_3222ac;
        case 0x3222b0u: goto label_3222b0;
        case 0x3222b4u: goto label_3222b4;
        case 0x3222b8u: goto label_3222b8;
        case 0x3222bcu: goto label_3222bc;
        default: break;
    }

    ctx->pc = 0x322108u;

label_322108:
    // 0x322108: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x322108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_32210c:
    // 0x32210c: 0x8c43b1ac  lw          $v1, -0x4E54($v0)
    ctx->pc = 0x32210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947244)));
label_322110:
    // 0x322110: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x322110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_322114:
    // 0x322114: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x322114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_322118:
    // 0x322118: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_32211c:
    if (ctx->pc == 0x32211Cu) {
        ctx->pc = 0x32211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322118u;
        // 0x32211c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322120u;
        goto label_322120;
    }
    ctx->pc = 0x322118u;
    {
        const bool branch_taken_0x322118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322118u;
        // 0x32211c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322118) {
            ctx->pc = 0x322124u;
            goto label_322124;
        }
    }
    ctx->pc = 0x322120u;
label_322120:
    // 0x322120: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x322120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_322124:
    // 0x322124: 0x3e00008  jr          $ra
label_322128:
    if (ctx->pc == 0x322128u) {
        ctx->pc = 0x322128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322124u;
        // 0x322128: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32212Cu;
        goto label_32212c;
    }
    ctx->pc = 0x322124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322124u;
        // 0x322128: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32212Cu;
label_32212c:
    // 0x32212c: 0x0  nop
    ctx->pc = 0x32212cu;
    // NOP
label_322130:
    // 0x322130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x322130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_322134:
    // 0x322134: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x322134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_322138:
    // 0x322138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x322138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32213c:
    // 0x32213c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_322140:
    // 0x322140: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x322140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_322144:
    // 0x322144: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x322144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_322148:
    // 0x322148: 0x2444b1a8  addiu       $a0, $v0, -0x4E58
    ctx->pc = 0x322148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947240));
label_32214c:
    // 0x32214c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x32214cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_322150:
    // 0x322150: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x322150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322154:
    // 0x322154: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x322154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_322158:
    // 0x322158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32215c:
    // 0x32215c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_322160:
    // 0x322160: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x322160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_322164:
    // 0x322164: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x322164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322168:
    // 0x322168: 0x1620002a  bnez        $s1, . + 4 + (0x2A << 2)
label_32216c:
    if (ctx->pc == 0x32216Cu) {
        ctx->pc = 0x32216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322168u;
        // 0x32216c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322170u;
        goto label_322170;
    }
    ctx->pc = 0x322168u;
    {
        const bool branch_taken_0x322168 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322168u;
        // 0x32216c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322168) {
            ctx->pc = 0x322214u;
            goto label_322214;
        }
    }
    ctx->pc = 0x322170u;
label_322170:
    // 0x322170: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x322170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_322174:
    // 0x322174: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x322174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_322178:
    // 0x322178: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x322178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_32217c:
    // 0x32217c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x32217cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_322180:
    // 0x322180: 0x40f809  jalr        $v0
label_322184:
    if (ctx->pc == 0x322184u) {
        ctx->pc = 0x322184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322180u;
        // 0x322184: 0x34a50112  ori         $a1, $a1, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322188u;
        goto label_322188;
    }
    ctx->pc = 0x322180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322188u);
        ctx->pc = 0x322184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322180u;
        // 0x322184: 0x34a50112  ori         $a1, $a1, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322180u, 0x322188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322188u;
label_322188:
    // 0x322188: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x322188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32218c:
    // 0x32218c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_322190:
    if (ctx->pc == 0x322190u) {
        ctx->pc = 0x322190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32218Cu;
        // 0x322190: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322194u;
        goto label_322194;
    }
    ctx->pc = 0x32218Cu;
    {
        const bool branch_taken_0x32218c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x322190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32218Cu;
        // 0x322190: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32218c) {
            ctx->pc = 0x3221F0u;
            goto label_3221f0;
        }
    }
    ctx->pc = 0x322194u;
label_322194:
    // 0x322194: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x322194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_322198:
    // 0x322198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32219c:
    // 0x32219c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x32219cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_3221a0:
    // 0x3221a0: 0x24632608  addiu       $v1, $v1, 0x2608
    ctx->pc = 0x3221a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9736));
label_3221a4:
    // 0x3221a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3221a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3221a8:
    // 0x3221a8: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x3221a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
label_3221ac:
    // 0x3221ac: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3221acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3221b0:
    // 0x3221b0: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x3221b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_3221b4:
    // 0x3221b4: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x3221b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_3221b8:
    // 0x3221b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3221b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_3221bc:
    // 0x3221bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3221bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_3221c0:
    // 0x3221c0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x3221c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_3221c4:
    // 0x3221c4: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x3221c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
label_3221c8:
    // 0x3221c8: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x3221c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
label_3221cc:
    // 0x3221cc: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x3221ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_3221d0:
    // 0x3221d0: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x3221d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_3221d4:
    // 0x3221d4: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x3221d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_3221d8:
    // 0x3221d8: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x3221d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_3221dc:
    // 0x3221dc: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x3221dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
label_3221e0:
    // 0x3221e0: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x3221e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
label_3221e4:
    // 0x3221e4: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x3221e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
label_3221e8:
    // 0x3221e8: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x3221e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
label_3221ec:
    // 0x3221ec: 0x0  nop
    ctx->pc = 0x3221ecu;
    // NOP
label_3221f0:
    // 0x3221f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3221f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3221f4:
    // 0x3221f4: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_3221f8:
    if (ctx->pc == 0x3221F8u) {
        ctx->pc = 0x3221F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221F4u;
        // 0x3221f8: 0xacd10000  sw          $s1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3221FCu;
        goto label_3221fc;
    }
    ctx->pc = 0x3221F4u;
    {
        const bool branch_taken_0x3221f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3221F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221F4u;
        // 0x3221f8: 0xacd10000  sw          $s1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221f4) {
            ctx->pc = 0x322264u;
            goto label_322264;
        }
    }
    ctx->pc = 0x3221FCu;
label_3221fc:
    // 0x3221fc: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x3221fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_322200:
    // 0x322200: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_322204:
    if (ctx->pc == 0x322204u) {
        ctx->pc = 0x322204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322200u;
        // 0x322204: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322208u;
        goto label_322208;
    }
    ctx->pc = 0x322200u;
    {
        const bool branch_taken_0x322200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x322200) {
            ctx->pc = 0x322204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322200u;
            // 0x322204: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322214u;
            goto label_322214;
        }
    }
    ctx->pc = 0x322208u;
label_322208:
    // 0x322208: 0xc0e3444  jal         func_38D110
label_32220c:
    if (ctx->pc == 0x32220Cu) {
        ctx->pc = 0x32220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322208u;
        // 0x32220c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322210u;
        goto label_322210;
    }
    ctx->pc = 0x322208u;
    SET_GPR_U32(ctx, 31, 0x322210u);
    ctx->pc = 0x32220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322208u;
    // 0x32220c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x322208u, 0x322210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322210u;
label_322210:
    // 0x322210: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x322210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_322214:
    // 0x322214: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x322214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_322218:
    // 0x322218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32221c:
    // 0x32221c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_322220:
    // 0x322220: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x322220u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_322224:
    // 0x322224: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x322224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_322228:
    // 0x322228: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_32222c:
    if (ctx->pc == 0x32222Cu) {
        ctx->pc = 0x32222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322228u;
        // 0x32222c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x322230u;
        goto label_322230;
    }
    ctx->pc = 0x322228u;
    {
        const bool branch_taken_0x322228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322228u;
        // 0x32222c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x322228) {
            ctx->pc = 0x322260u;
            goto label_322260;
        }
    }
    ctx->pc = 0x322230u;
label_322230:
    // 0x322230: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x322230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_322234:
    // 0x322234: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x322234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_322238:
    // 0x322238: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x322238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_32223c:
    // 0x32223c: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x32223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
label_322240:
    // 0x322240: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_322244:
    if (ctx->pc == 0x322244u) {
        ctx->pc = 0x322244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322240u;
        // 0x322244: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322248u;
        goto label_322248;
    }
    ctx->pc = 0x322240u;
    {
        const bool branch_taken_0x322240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322240u;
        // 0x322244: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322240) {
            ctx->pc = 0x322258u;
            goto label_322258;
        }
    }
    ctx->pc = 0x322248u;
label_322248:
    // 0x322248: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x322248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_32224c:
    // 0x32224c: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x32224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_322250:
    // 0x322250: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x322250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_322254:
    // 0x322254: 0x0  nop
    ctx->pc = 0x322254u;
    // NOP
label_322258:
    // 0x322258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32225c:
    // 0x32225c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32225cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_322260:
    // 0x322260: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x322260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_322264:
    // 0x322264: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x322264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_322268:
    // 0x322268: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x322268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32226c:
    // 0x32226c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32226cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_322270:
    // 0x322270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_322274:
    // 0x322274: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x322274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_322278:
    // 0x322278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32227c:
    // 0x32227c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x32227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_322280:
    // 0x322280: 0x3e00008  jr          $ra
label_322284:
    if (ctx->pc == 0x322284u) {
        ctx->pc = 0x322284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322280u;
        // 0x322284: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322288u;
        goto label_322288;
    }
    ctx->pc = 0x322280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322280u;
        // 0x322284: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322288u;
label_322288:
    // 0x322288: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x322288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_32228c:
    // 0x32228c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32228cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_322290:
    // 0x322290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_322294:
    // 0x322294: 0x8c43b1ac  lw          $v1, -0x4E54($v0)
    ctx->pc = 0x322294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947244)));
label_322298:
    // 0x322298: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x322298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_32229c:
    // 0x32229c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x32229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3222a0:
    // 0x3222a0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_3222a4:
    if (ctx->pc == 0x3222A4u) {
        ctx->pc = 0x3222A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222A0u;
        // 0x3222a4: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222A8u;
        goto label_3222a8;
    }
    ctx->pc = 0x3222A0u;
    {
        const bool branch_taken_0x3222a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3222a0) {
            ctx->pc = 0x3222A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3222A0u;
            // 0x3222a4: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3222A8u;
            goto label_3222a8;
        }
    }
    ctx->pc = 0x3222A8u;
label_3222a8:
    // 0x3222a8: 0x3e00008  jr          $ra
label_3222ac:
    if (ctx->pc == 0x3222ACu) {
        ctx->pc = 0x3222B0u;
        goto label_3222b0;
    }
    ctx->pc = 0x3222A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3222A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3222B0u;
label_3222b0:
    // 0x3222b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3222b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3222b4:
    // 0x3222b4: 0x3e00008  jr          $ra
label_3222b8:
    if (ctx->pc == 0x3222B8u) {
        ctx->pc = 0x3222B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222B4u;
        // 0x3222b8: 0xac44b1b0  sw          $a0, -0x4E50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222BCu;
        goto label_3222bc;
    }
    ctx->pc = 0x3222B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3222B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222B4u;
        // 0x3222b8: 0xac44b1b0  sw          $a0, -0x4E50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3222B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3222BCu;
label_3222bc:
    // 0x3222bc: 0x0  nop
    ctx->pc = 0x3222bcu;
    // NOP
    ctx->pc = 0x3222c0u;
}
