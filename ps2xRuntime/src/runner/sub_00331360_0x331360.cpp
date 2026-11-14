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

// Function: sub_00331360
// Address: 0x331360 - 0x331ea8
void sub_00331360_0x331360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331360_0x331360");
#endif

    switch (ctx->pc) {
        case 0x3313a0u: goto label_3313a0;
        case 0x3313f8u: goto label_3313f8;
        case 0x331420u: goto label_331420;
        case 0x331474u: goto label_331474;
        case 0x331568u: goto label_331568;
        case 0x3315bcu: goto label_3315bc;
        case 0x33166cu: goto label_33166c;
        case 0x33168cu: goto label_33168c;
        case 0x3318c0u: goto label_3318c0;
        case 0x331960u: goto label_331960;
        case 0x331a54u: goto label_331a54;
        case 0x331e20u: goto label_331e20;
        case 0x331e64u: goto label_331e64;
        case 0x331e98u: goto label_331e98;
        default: break;
    }

    ctx->pc = 0x331360u;

label_331360:
    // 0x331360: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x331360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x331364: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x331364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x331368: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x331368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x33136c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x33136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x331370: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x331370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331374: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x331374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x331378: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x331378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x33137c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x33137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x331380: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x331380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331384: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x331384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x331388: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x331388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33138c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x33138cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x331390: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x331390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x331394: 0x8c50072c  lw          $s0, 0x72C($v0)
    ctx->pc = 0x331394u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61D5ACu));
    // 0x331398: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x331398u;
    SET_GPR_U32(ctx, 31, 0x3313A0u);
    ctx->pc = 0x33139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331398u;
    // 0x33139c: 0x8e040134  lw          $a0, 0x134($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x331398u, 0x3313A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313A0u;
label_3313a0:
    // 0x3313a0: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x3313a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3313a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3313a8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3313a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3313ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3313ACu;
    {
        const bool branch_taken_0x3313ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3313B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313ACu;
        // 0x3313b0: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313ac) {
            ctx->pc = 0x3313C0u;
            goto label_3313c0;
        }
    }
    ctx->pc = 0x3313B4u;
    // 0x3313b4: 0x241800ff  addiu       $t8, $zero, 0xFF
    ctx->pc = 0x3313b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3313b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3313B8u;
    {
        const bool branch_taken_0x3313b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3313BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313B8u;
        // 0x3313bc: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313b8) {
            ctx->pc = 0x3313CCu;
            goto label_3313cc;
        }
    }
    ctx->pc = 0x3313C0u;
label_3313c0:
    // 0x3313c0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3313c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3313c4: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x3313c4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313c8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x3313c8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3313cc:
    // 0x3313cc: 0x2684ce80  addiu       $a0, $s4, -0x3180
    ctx->pc = 0x3313ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
    // 0x3313d0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3313d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3313d4: 0x8c860768  lw          $a2, 0x768($a0)
    ctx->pc = 0x3313d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1896)));
    // 0x3313d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3313d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313dc: 0x18c00056  blez        $a2, . + 4 + (0x56 << 2)
    ctx->pc = 0x3313DCu;
    {
        const bool branch_taken_0x3313dc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3313E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313DCu;
        // 0x3313e0: 0x8c850764  lw          $a1, 0x764($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313dc) {
            ctx->pc = 0x331538u;
            goto label_331538;
        }
    }
    ctx->pc = 0x3313E4u;
    // 0x3313e4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3313e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3313e8: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x3313e8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313ec: 0x1629818  mult        $s3, $t3, $v0
    ctx->pc = 0x3313ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x3313f0: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x3313f0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313f4: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x3313f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_3313f8:
    // 0x3313f8: 0x8dc20734  lw          $v0, 0x734($t6)
    ctx->pc = 0x3313f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1844)));
    // 0x3313fc: 0x24acfff4  addiu       $t4, $a1, -0xC
    ctx->pc = 0x3313fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x331400: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x331400u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x331404: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x331404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x331408: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x331408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33140c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33140cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331410: 0xadc20734  sw          $v0, 0x734($t6)
    ctx->pc = 0x331410u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 1844), GPR_U32(ctx, 2));
    // 0x331414: 0x4b3823  subu        $a3, $v0, $t3
    ctx->pc = 0x331414u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x331418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x331418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33141c: 0x0  nop
    ctx->pc = 0x33141cu;
    // NOP
label_331420:
    // 0x331420: 0xef1821  addu        $v1, $a3, $t7
    ctx->pc = 0x331420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x331424: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x331424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x331428: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x331428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33142c: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x33142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x331430: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x331430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x331434: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x331434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x331438: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x331438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x33143c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33143Cu;
    {
        const bool branch_taken_0x33143c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33143Cu;
        // 0x331440: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33143c) {
            ctx->pc = 0x331470u;
            goto label_331470;
        }
    }
    ctx->pc = 0x331444u;
    // 0x331444: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x331444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x331448: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x331448u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33144c: 0x482000a  bltzl       $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x33144Cu;
    {
        const bool branch_taken_0x33144c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x33144c) {
            ctx->pc = 0x331450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33144Cu;
            // 0x331450: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331478u;
            goto label_331478;
        }
    }
    ctx->pc = 0x331454u;
    // 0x331454: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x331454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x331458: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x331458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33145c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x33145Cu;
    {
        const bool branch_taken_0x33145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33145c) {
            ctx->pc = 0x331460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33145Cu;
            // 0x331460: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3314D8u;
            goto label_3314d8;
        }
    }
    ctx->pc = 0x331464u;
    // 0x331464: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x331464u;
    {
        const bool branch_taken_0x331464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331464u;
        // 0x331468: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331464) {
            ctx->pc = 0x331478u;
            goto label_331478;
        }
    }
    ctx->pc = 0x33146Cu;
    // 0x33146c: 0x0  nop
    ctx->pc = 0x33146cu;
    // NOP
label_331470:
    // 0x331470: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x331470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_331474:
    // 0x331474: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x331474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_331478:
    // 0x331478: 0x480001a  bltz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x331478u;
    {
        const bool branch_taken_0x331478 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x33147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331478u;
        // 0x33147c: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331478) {
            ctx->pc = 0x3314E4u;
            goto label_3314e4;
        }
    }
    ctx->pc = 0x331480u;
    // 0x331480: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x331480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x331484: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x331484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x331488: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x331488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x33148c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331490: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x331490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x331494: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x331494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x331498: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x331498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33149c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x33149cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3314a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3314a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3314a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3314a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3314a8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3314a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3314ac: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3314acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3314b0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3314b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3314b4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3314b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3314b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3314b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3314bc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x3314bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3314c0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3314c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3314c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3314c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3314c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3314c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3314cc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3314ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3314d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3314D0u;
    {
        const bool branch_taken_0x3314d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314D0u;
        // 0x3314d4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314d0) {
            ctx->pc = 0x331518u;
            goto label_331518;
        }
    }
    ctx->pc = 0x3314D8u;
label_3314d8:
    // 0x3314d8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3314d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3314dc: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x3314DCu;
    {
        const bool branch_taken_0x3314dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314DCu;
        // 0x3314e0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314dc) {
            ctx->pc = 0x331474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331474;
        }
    }
    ctx->pc = 0x3314E4u;
label_3314e4:
    // 0x3314e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3314e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3314e8: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x3314e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3314ec: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3314ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3314f0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3314f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3314f4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3314f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3314f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3314f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3314fc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3314fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x331500: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x331500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x331504: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x331504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x331508: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x331508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x33150c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x33150cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x331510: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x331510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x331514: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x331514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331518:
    // 0x331518: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x331518u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x33151c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x33151cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x331520: 0x501ffbf  bgez        $t0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x331520u;
    {
        const bool branch_taken_0x331520 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x331524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331520u;
        // 0x331524: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331520) {
            ctx->pc = 0x331420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331420;
        }
    }
    ctx->pc = 0x331528u;
    // 0x331528: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x331528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33152c: 0x79102a  slt         $v0, $v1, $t9
    ctx->pc = 0x33152cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x331530: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x331530u;
    {
        const bool branch_taken_0x331530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331530u;
        // 0x331534: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331530) {
            ctx->pc = 0x3313F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3313f8;
        }
    }
    ctx->pc = 0x331538u;
label_331538:
    // 0x331538: 0xab2018  mult        $a0, $a1, $t3
    ctx->pc = 0x331538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33153c: 0x2683ce80  addiu       $v1, $s4, -0x3180
    ctx->pc = 0x33153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
    // 0x331540: 0x8c620734  lw          $v0, 0x734($v1)
    ctx->pc = 0x331540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1844)));
    // 0x331544: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x331544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x331548: 0xac620734  sw          $v0, 0x734($v1)
    ctx->pc = 0x331548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1844), GPR_U32(ctx, 2));
    // 0x33154c: 0x18a00044  blez        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x33154Cu;
    {
        const bool branch_taken_0x33154c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x331550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33154Cu;
        // 0x331550: 0x4b3823  subu        $a3, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33154c) {
            ctx->pc = 0x331660u;
            goto label_331660;
        }
    }
    ctx->pc = 0x331554u;
    // 0x331554: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x331554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331558: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x331558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33155c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33155cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331560: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x331560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x331564: 0x0  nop
    ctx->pc = 0x331564u;
    // NOP
label_331568:
    // 0x331568: 0xef1821  addu        $v1, $a3, $t7
    ctx->pc = 0x331568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x33156c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x33156cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x331570: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x331570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331574: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x331574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x331578: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x331578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33157c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x33157cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x331580: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x331580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x331584: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x331584u;
    {
        const bool branch_taken_0x331584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331584u;
        // 0x331588: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331584) {
            ctx->pc = 0x3315B8u;
            goto label_3315b8;
        }
    }
    ctx->pc = 0x33158Cu;
    // 0x33158c: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x33158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x331590: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x331590u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x331594: 0x482000a  bltzl       $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x331594u;
    {
        const bool branch_taken_0x331594 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x331594) {
            ctx->pc = 0x331598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331594u;
            // 0x331598: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3315C0u;
            goto label_3315c0;
        }
    }
    ctx->pc = 0x33159Cu;
    // 0x33159c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x33159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x3315a0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3315a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3315a4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3315A4u;
    {
        const bool branch_taken_0x3315a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3315a4) {
            ctx->pc = 0x3315A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3315A4u;
            // 0x3315a8: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331618u;
            goto label_331618;
        }
    }
    ctx->pc = 0x3315ACu;
    // 0x3315ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3315ACu;
    {
        const bool branch_taken_0x3315ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315ACu;
        // 0x3315b0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3315ac) {
            ctx->pc = 0x3315C0u;
            goto label_3315c0;
        }
    }
    ctx->pc = 0x3315B4u;
    // 0x3315b4: 0x0  nop
    ctx->pc = 0x3315b4u;
    // NOP
label_3315b8:
    // 0x3315b8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3315b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_3315bc:
    // 0x3315bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3315bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3315c0:
    // 0x3315c0: 0x4800018  bltz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3315C0u;
    {
        const bool branch_taken_0x3315c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3315C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315C0u;
        // 0x3315c4: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3315c0) {
            ctx->pc = 0x331624u;
            goto label_331624;
        }
    }
    ctx->pc = 0x3315C8u;
    // 0x3315c8: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x3315c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3315cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3315ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3315d0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3315d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3315d4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3315d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3315d8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3315d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3315dc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3315dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3315e0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3315e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3315e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3315e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3315e8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3315e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3315ec: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3315ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3315f0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3315f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3315f4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3315f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3315f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3315f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3315fc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x3315fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331600: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x331600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x331604: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x331604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x331608: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x331608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33160c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x33160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331610: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x331610u;
    {
        const bool branch_taken_0x331610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331610u;
        // 0x331614: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331610) {
            ctx->pc = 0x331650u;
            goto label_331650;
        }
    }
    ctx->pc = 0x331618u;
label_331618:
    // 0x331618: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x331618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33161c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x33161Cu;
    {
        const bool branch_taken_0x33161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33161Cu;
        // 0x331620: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33161c) {
            ctx->pc = 0x3315BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3315bc;
        }
    }
    ctx->pc = 0x331624u;
label_331624:
    // 0x331624: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x331624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x331628: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x331628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x33162c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x33162cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x331630: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x331630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x331634: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x331634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x331638: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x331638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x33163c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x33163cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x331640: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x331640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x331644: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x331644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x331648: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x331648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x33164c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x33164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331650:
    // 0x331650: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x331650u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x331654: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x331654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x331658: 0x1500ffc3  bnez        $t0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x331658u;
    {
        const bool branch_taken_0x331658 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x33165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331658u;
        // 0x33165c: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331658) {
            ctx->pc = 0x331568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331568;
        }
    }
    ctx->pc = 0x331660u;
label_331660:
    // 0x331660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x331660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331664: 0xc10a322  jal         func_428C88
    ctx->pc = 0x331664u;
    SET_GPR_U32(ctx, 31, 0x33166Cu);
    ctx->pc = 0x331668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331664u;
    // 0x331668: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x331664u, 0x33166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33166Cu;
label_33166c:
    // 0x33166c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33166Cu;
    {
        const bool branch_taken_0x33166c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33166Cu;
        // 0x331670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33166c) {
            ctx->pc = 0x331694u;
            goto label_331694;
        }
    }
    ctx->pc = 0x331674u;
    // 0x331674: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x331674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x331678: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x331678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x33167c: 0x2484b890  addiu       $a0, $a0, -0x4770
    ctx->pc = 0x33167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    // 0x331680: 0x24a5b8b0  addiu       $a1, $a1, -0x4750
    ctx->pc = 0x331680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949040));
    // 0x331684: 0xc0bbc80  jal         func_2EF200
    ctx->pc = 0x331684u;
    SET_GPR_U32(ctx, 31, 0x33168Cu);
    ctx->pc = 0x331688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331684u;
    // 0x331688: 0x2406014a  addiu       $a2, $zero, 0x14A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF200u, 0x331684u, 0x33168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33168Cu;
label_33168c:
    // 0x33168c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x33168Cu;
    {
        const bool branch_taken_0x33168c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33168Cu;
        // 0x331690: 0x2683ce80  addiu       $v1, $s4, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33168c) {
            ctx->pc = 0x331850u;
            goto label_331850;
        }
    }
    ctx->pc = 0x331694u;
label_331694:
    // 0x331694: 0x3c026c07  lui         $v0, 0x6C07
    ctx->pc = 0x331694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27655 << 16));
    // 0x331698: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x331698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x33169c: 0x344203cf  ori         $v0, $v0, 0x3CF
    ctx->pc = 0x33169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)975);
    // 0x3316a0: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x3316a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x3316a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3316a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3316a8: 0x34840007  ori         $a0, $a0, 0x7
    ctx->pc = 0x3316a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7);
    // 0x3316ac: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3316acu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3316b0: 0x70a42cc8  ppacw       $a1, $a1, $a0
    ctx->pc = 0x3316b0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x3316b4: 0x704514c8  ppacw       $v0, $v0, $a1
    ctx->pc = 0x3316b4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x3316b8: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3316b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3316bc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3316bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3316c0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3316c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3316c4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3316c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3316c8: 0x2685ce80  addiu       $a1, $s4, -0x3180
    ctx->pc = 0x3316c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
    // 0x3316cc: 0x8ca40728  lw          $a0, 0x728($a1)
    ctx->pc = 0x3316ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x3316d0: 0xc4a30740  lwc1        $f3, 0x740($a1)
    ctx->pc = 0x3316d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3316d4: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x3316d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3316d8: 0xc4a106f8  lwc1        $f1, 0x6F8($a1)
    ctx->pc = 0x3316d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3316dc: 0xc4a20744  lwc1        $f2, 0x744($a1)
    ctx->pc = 0x3316dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3316e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3316e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3316e4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3316e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3316e8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3316e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3316ec: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3316ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3316f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3316f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3316f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3316f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3316f8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3316f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3316fc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3316fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331700: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x331700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331704: 0xc7828438  lwc1        $f2, -0x7BC8($gp)
    ctx->pc = 0x331704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x331708: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x331708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33170c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x33170cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x331710: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x331710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331714: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x331714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x331718: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x331718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x33171c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x33171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331720: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x331720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x331724: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x331724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x331728: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x331728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33172c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x33172cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x331730: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x331730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x331734: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x331734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331738: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x331738u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x33173c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x33173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x331740: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331744: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x331744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331748: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x331748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x33174c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x33174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x331750: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x331750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331754: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x331754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x331758: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x331758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33175c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x33175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331760: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x331760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x331764: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x331764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x331768: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x331768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33176c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33176cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x331770: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x331770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x331774: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x331774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331778: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x331778u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x33177c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x33177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x331780: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331784: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x331784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331788: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x331788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x33178c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x331790: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x331790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331794: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x331794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x331798: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x331798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33179c: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x33179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3317a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3317a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3317a4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3317a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3317a8: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x3317a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3317ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3317acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3317b0: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x3317b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3317b4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3317b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3317b8: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x3317b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x3317bc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x3317bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3317c0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3317c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3317c4: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x3317c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3317c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3317c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3317cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3317ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3317d0: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x3317d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3317d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3317d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3317d8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3317d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3317dc: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x3317dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3317e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3317e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3317e4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3317e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3317e8: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x3317e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3317ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3317ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3317f0: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x3317f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3317f4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3317f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3317f8: 0x7c620040  sq          $v0, 0x40($v1)
    ctx->pc = 0x3317f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 2));
    // 0x3317fc: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x3317fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x331800: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331804: 0x8ca4072c  lw          $a0, 0x72C($a1)
    ctx->pc = 0x331804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1836)));
    // 0x331808: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x331808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33180c: 0xc4a10748  lwc1        $f1, 0x748($a1)
    ctx->pc = 0x33180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331810: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x331810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x331814: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x331814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x331818: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x331818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x33181c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x33181cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x331820: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x331820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331824: 0x7c620050  sq          $v0, 0x50($v1)
    ctx->pc = 0x331824u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 2));
    // 0x331828: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x331828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x33182c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33182cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331830: 0x3404c0b7  ori         $a0, $zero, 0xC0B7
    ctx->pc = 0x331830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49335);
    // 0x331834: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x331834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x331838: 0x24020412  addiu       $v0, $zero, 0x412
    ctx->pc = 0x331838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x33183c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x33183cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x331840: 0x7c620060  sq          $v0, 0x60($v1)
    ctx->pc = 0x331840u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), GPR_VEC(ctx, 2));
    // 0x331844: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x331844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x331848: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33184c: 0x2683ce80  addiu       $v1, $s4, -0x3180
    ctx->pc = 0x33184cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
label_331850:
    // 0x331850: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x331850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x331854: 0xe4740748  swc1        $f20, 0x748($v1)
    ctx->pc = 0x331854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1864), bits); }
    // 0x331858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33185c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x33185cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x331860: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x331860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x331864: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x331864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x331868: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x331868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33186c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x33186cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x331870: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x331870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x331874: 0x3e00008  jr          $ra
    ctx->pc = 0x331874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331874u;
        // 0x331878: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33187Cu;
    // 0x33187c: 0x0  nop
    ctx->pc = 0x33187cu;
    // NOP
    // 0x331880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x331880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x331884: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x331884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x331888: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x331888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33188c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x33188cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x331890: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x331890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x331894: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x331894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x331898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33189c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33189cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3318a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3318a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3318a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318a8: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x3318a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3318ac: 0x96030764  lhu         $v1, 0x764($s0)
    ctx->pc = 0x3318acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x61D5E4u));
    // 0x3318b0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x3318b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x3318b4: 0x96020764  lhu         $v0, 0x764($s0)
    ctx->pc = 0x3318b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x61D5E4u));
    // 0x3318b8: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x3318B8u;
    SET_GPR_U32(ctx, 31, 0x3318C0u);
    ctx->pc = 0x3318BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318B8u;
    // 0x3318bc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3318B8u, 0x3318C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318C0u;
label_3318c0:
    // 0x3318c0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3318c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3318c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3318c8: 0x8e0206f4  lw          $v0, 0x6F4($s0)
    ctx->pc = 0x3318c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
    // 0x3318cc: 0xae4a0004  sw          $t2, 0x4($s2)
    ctx->pc = 0x3318ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 10));
    // 0x3318d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3318d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3318d4: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3318d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x3318d8: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3318d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x3318dc: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3318dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x3318e0: 0x2788aa28  addiu       $t0, $gp, -0x55D8
    ctx->pc = 0x3318e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945320));
    // 0x3318e4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x3318e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x3318e8: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x3318e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x3318ec: 0x24e6af20  addiu       $a2, $a3, -0x50E0
    ctx->pc = 0x3318ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946592));
    // 0x3318f0: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x3318f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x3318f4: 0x2522e880  addiu       $v0, $t1, -0x1780
    ctx->pc = 0x3318f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
    // 0x3318f8: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x3318f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x3318fc: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x3318fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x331900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x331900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331904: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x331904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x331908: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x331908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x33190c: 0x9062002d  lbu         $v0, 0x2D($v1)
    ctx->pc = 0x33190cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 45)));
    // 0x331910: 0x24842e00  addiu       $a0, $a0, 0x2E00
    ctx->pc = 0x331910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11776));
    // 0x331914: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x331914u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5DAF28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF28u, _value); } while (0);
    // 0x331918: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x331918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x33191c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x33191cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DAF2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF2Cu, _value); } while (0);
    // 0x331920: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x331920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x331924: 0xace2af20  sw          $v0, -0x50E0($a3)
    ctx->pc = 0x331924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DAF20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF20u, _value); } while (0);
    // 0x331928: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x331928u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x33192c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x33192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x331930: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x331930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5DAF38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF38u, _value); } while (0);
    // 0x331934: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x331934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DAF34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF34u, _value); } while (0);
    // 0x331938: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x331938u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DAF30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF30u, _value); } while (0);
    // 0x33193c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x33193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x331940: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x331940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x331944: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x331944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x331948: 0x8d23e880  lw          $v1, -0x1780($t1)
    ctx->pc = 0x331948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x33194c: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x33194Cu;
    {
        const bool branch_taken_0x33194c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x331950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33194Cu;
        // 0x331950: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33194c) {
            ctx->pc = 0x331968u;
            goto label_331968;
        }
    }
    ctx->pc = 0x331954u;
    // 0x331954: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x331954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x331958: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x331958u;
    SET_GPR_U32(ctx, 31, 0x331960u);
    ctx->pc = 0x33195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331958u;
    // 0x33195c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x331958u, 0x331960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331960u;
label_331960:
    // 0x331960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x331960u;
    {
        const bool branch_taken_0x331960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331960u;
        // 0x331964: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331960) {
            ctx->pc = 0x331970u;
            goto label_331970;
        }
    }
    ctx->pc = 0x331968u;
label_331968:
    // 0x331968: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x331968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x33196c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_331970:
    // 0x331970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331974: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x331974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x331978: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x331978u;
    {
        const bool branch_taken_0x331978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331978u;
        // 0x33197c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331978) {
            ctx->pc = 0x331984u;
            goto label_331984;
        }
    }
    ctx->pc = 0x331980u;
    // 0x331980: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x331980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_331984:
    // 0x331984: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331988: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x331988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33198c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33198cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x331990: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x331990u;
    {
        const bool branch_taken_0x331990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331990u;
        // 0x331994: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331990) {
            ctx->pc = 0x3319C8u;
            goto label_3319c8;
        }
    }
    ctx->pc = 0x331998u;
    // 0x331998: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x331998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33199c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33199Cu;
    {
        const bool branch_taken_0x33199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3319A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33199Cu;
        // 0x3319a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33199c) {
            ctx->pc = 0x3319B0u;
            goto label_3319b0;
        }
    }
    ctx->pc = 0x3319A4u;
    // 0x3319a4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3319a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3319a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3319A8u;
    {
        const bool branch_taken_0x3319a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3319a8) {
            ctx->pc = 0x3319ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3319A8u;
            // 0x3319ac: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3319C0u;
            goto label_3319c0;
        }
    }
    ctx->pc = 0x3319B0u;
label_3319b0:
    // 0x3319b0: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x3319b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3319b4: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3319b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3319b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3319B8u;
    {
        const bool branch_taken_0x3319b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319B8u;
        // 0x3319bc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319b8) {
            ctx->pc = 0x331A00u;
            goto label_331a00;
        }
    }
    ctx->pc = 0x3319C0u;
label_3319c0:
    // 0x3319c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3319C0u;
    {
        const bool branch_taken_0x3319c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3319C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319C0u;
        // 0x3319c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319c0) {
            ctx->pc = 0x3319D8u;
            goto label_3319d8;
        }
    }
    ctx->pc = 0x3319C8u;
label_3319c8:
    // 0x3319c8: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x3319c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3319cc: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x3319ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3319d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3319D0u;
    {
        const bool branch_taken_0x3319d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3319D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319D0u;
        // 0x3319d4: 0xa2230028  sb          $v1, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319d0) {
            ctx->pc = 0x331A04u;
            goto label_331a04;
        }
    }
    ctx->pc = 0x3319D8u;
label_3319d8:
    // 0x3319d8: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x3319d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x3319dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3319DCu;
    {
        const bool branch_taken_0x3319dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3319E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319DCu;
        // 0x3319e0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319dc) {
            ctx->pc = 0x3319F4u;
            goto label_3319f4;
        }
    }
    ctx->pc = 0x3319E4u;
    // 0x3319e4: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x3319e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3319e8: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3319e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3319ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3319ECu;
    {
        const bool branch_taken_0x3319ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3319F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319ECu;
        // 0x3319f0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319ec) {
            ctx->pc = 0x331A00u;
            goto label_331a00;
        }
    }
    ctx->pc = 0x3319F4u;
label_3319f4:
    // 0x3319f4: 0xa2250029  sb          $a1, 0x29($s1)
    ctx->pc = 0x3319f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x3319f8: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3319f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3319fc: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3319fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_331a00:
    // 0x331a00: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x331a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_331a04:
    // 0x331a04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331a08: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x331A08u;
    {
        const bool branch_taken_0x331a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x331A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A08u;
        // 0x331a0c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a08) {
            ctx->pc = 0x331A1Cu;
            goto label_331a1c;
        }
    }
    ctx->pc = 0x331A10u;
    // 0x331a10: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x331a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x331a14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x331a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x331a18: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x331a18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_331a1c:
    // 0x331a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331a20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x331a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331a24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331a28: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x331a28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331a30: 0x3e00008  jr          $ra
    ctx->pc = 0x331A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A30u;
        // 0x331a34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331A38u;
    // 0x331a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331a3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x331a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x331a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x331a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a4c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x331A4Cu;
    SET_GPR_U32(ctx, 31, 0x331A54u);
    ctx->pc = 0x331A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A4Cu;
    // 0x331a50: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x331A4Cu, 0x331A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A54u;
label_331a54:
    // 0x331a54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x331a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x331a58: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x331a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x331a5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x331a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a60: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x331a60u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x331a64: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x331a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331a68: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x331a68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x331a6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x331a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x331a70: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331a70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331a74: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x331a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x331a78: 0xa2030047  sb          $v1, 0x47($s0)
    ctx->pc = 0x331a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x331a7c: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x331a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x331a80: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x331a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
    // 0x331a84: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x331a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x331a88: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x331a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x331a8c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x331a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x331a90: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x331a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x331a94: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x331a94u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x331a98: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x331a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331a9c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x331a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x331aa0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x331aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x331aa4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331aa8: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x331aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x331aac: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x331aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x331ab0: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x331ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x331ab4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x331ab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x331ab8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x331ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x331abc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331ABCu;
    {
        const bool branch_taken_0x331abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331ABCu;
        // 0x331ac0: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331abc) {
            ctx->pc = 0x331AD8u;
            goto label_331ad8;
        }
    }
    ctx->pc = 0x331AC4u;
    // 0x331ac4: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x331ac4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x331ac8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x331ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x331acc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x331ACCu;
    {
        const bool branch_taken_0x331acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331ACCu;
        // 0x331ad0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331acc) {
            ctx->pc = 0x331AE4u;
            goto label_331ae4;
        }
    }
    ctx->pc = 0x331AD4u;
    // 0x331ad4: 0x0  nop
    ctx->pc = 0x331ad4u;
    // NOP
label_331ad8:
    // 0x331ad8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x331ad8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x331adc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x331adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x331ae0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x331ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_331ae4:
    // 0x331ae4: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x331ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x331ae8: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x331ae8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x331aec: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x331aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x331af0: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x331af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x331af4: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x331af4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x331af8: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x331af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x331afc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x331afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x331b00: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x331b00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x331b04: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x331b04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x331b08: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x331b08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x331b0c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x331b0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x331b10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x331b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x331b14: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x331b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x331b18: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x331b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x331b1c: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x331b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x331b20: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x331b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x331b24: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x331b24u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x331b28: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x331b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x331b2c: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x331b2cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x331b30: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x331b30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x331b34: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x331b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331b38: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x331b38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x331b3c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x331b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x331b40: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x331b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x331b44: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x331b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x331b48: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x331b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x331b4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x331b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x331b50: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x331b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x331b54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x331b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x331b58: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x331b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x331b5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x331b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b60: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x331b60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x331b64: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x331b64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x331b68: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x331b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x331b6c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x331b70: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x331b70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x331b74: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x331b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x331b78: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x331b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x331b7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x331B7Cu;
    {
        const bool branch_taken_0x331b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B7Cu;
        // 0x331b80: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b7c) {
            ctx->pc = 0x331B88u;
            goto label_331b88;
        }
    }
    ctx->pc = 0x331B84u;
    // 0x331b84: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x331b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_331b88:
    // 0x331b88: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x331b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x331b8c: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x331b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x331b90: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x331b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x331b94: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x331b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x331b98: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x331b98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x331b9c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x331b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x331ba0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x331ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x331ba4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x331ba4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x331ba8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x331ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x331bac: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x331bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331bb0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x331bb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331bb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x331bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x331bb8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x331bb8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331bbc: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x331bbcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x331bc0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x331bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x331bc4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x331bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331bc8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x331bc8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x331bcc: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x331bccu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x331bd0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x331bd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x331bd4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x331bd4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x331bd8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x331bd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x331bdc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x331bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331be0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x331be0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x331be4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x331be4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x331be8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x331be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x331bec: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x331bf0: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x331bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x331bf4: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x331bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x331bf8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x331bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x331bfc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x331bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x331c00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x331c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x331c04: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x331c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x331c08: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x331c08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x331c0c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x331c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x331c10: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x331c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x331c14: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331c14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x331c18: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x331c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x331c1c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x331c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x331c20: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x331c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x331c24: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x331c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x331c28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x331c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331c2c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x331c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331c30: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x331c30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x331c34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x331c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x331c38: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x331c38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331c3c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x331c3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x331c40: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x331c40u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x331c44: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x331c44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x331c48: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x331c48u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x331c4c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x331c4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x331c50: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x331c50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331c54: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x331c54u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x331c58: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x331c58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x331c5c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x331c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x331c60: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331c60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x331c64: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x331c64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x331c68: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x331c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x331c6c: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x331c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x331c70: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x331c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x331c74: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x331c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x331c78: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x331c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x331c7c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x331c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x331c80: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x331c80u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x331c84: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x331c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x331c88: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x331c88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x331c8c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x331c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x331c90: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331c94: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x331c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x331c98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x331C98u;
    {
        const bool branch_taken_0x331c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C98u;
        // 0x331c9c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331c98) {
            ctx->pc = 0x331CA8u;
            goto label_331ca8;
        }
    }
    ctx->pc = 0x331CA0u;
    // 0x331ca0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x331CA0u;
    {
        const bool branch_taken_0x331ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331ca0) {
            ctx->pc = 0x331CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331CA0u;
            // 0x331ca4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x331CC0u;
            goto label_331cc0;
        }
    }
    ctx->pc = 0x331CA8u;
label_331ca8:
    // 0x331ca8: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x331ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x331cac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x331CACu;
    {
        const bool branch_taken_0x331cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CACu;
        // 0x331cb0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331cac) {
            ctx->pc = 0x331CE8u;
            goto label_331ce8;
        }
    }
    ctx->pc = 0x331CB4u;
    // 0x331cb4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x331CB4u;
    {
        const bool branch_taken_0x331cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331cb4) {
            ctx->pc = 0x331CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331CB4u;
            // 0x331cb8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331CF0u;
            goto label_331cf0;
        }
    }
    ctx->pc = 0x331CBCu;
    // 0x331cbc: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x331cbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_331cc0:
    // 0x331cc0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x331cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331cc4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x331cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x331cc8: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x331cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
    // 0x331ccc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x331cccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD670u));
    // 0x331cd0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x331cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x331cd4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x331cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x331cd8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x331cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x331cdc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x331cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x331ce0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x331CE0u;
    {
        const bool branch_taken_0x331ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CE0u;
        // 0x331ce4: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ce0) {
            ctx->pc = 0x331D10u;
            goto label_331d10;
        }
    }
    ctx->pc = 0x331CE8u;
label_331ce8:
    // 0x331ce8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x331ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x331cec: 0x0  nop
    ctx->pc = 0x331cecu;
    // NOP
label_331cf0:
    // 0x331cf0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x331cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331cf4: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x331cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x331cf8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x331cf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331cfc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x331cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x331d00: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x331d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x331d04: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x331d04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x331d08: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x331d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x331d0c: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x331d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_331d10:
    // 0x331d10: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x331d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x331d14: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x331d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331d18: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x331d18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x331d1c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x331d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x331d20: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x331d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x331d24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x331d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331d28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331D28u;
    {
        const bool branch_taken_0x331d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x331D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D28u;
        // 0x331d2c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d28) {
            ctx->pc = 0x331D38u;
            goto label_331d38;
        }
    }
    ctx->pc = 0x331D30u;
    // 0x331d30: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x331d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x331d34: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x331d34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_331d38:
    // 0x331d38: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x331d38u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x331d3c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x331d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x331d40: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x331d40u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x331d44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x331d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x331d48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331d4c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x331d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x331d50: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x331d50u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x331d54: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x331d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331d58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x331d58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x331d5c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x331d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x331d60: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x331d64: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x331d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x331d68: 0x8c64d5a4  lw          $a0, -0x2A5C($v1)
    ctx->pc = 0x331d68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61D5A4u));
    // 0x331d6c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x331d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x331d70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x331d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x331d74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x331d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x331d78: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x331d78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x331d7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x331d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x331d80: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x331d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x331d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x331d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x331d88: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x331d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x331d8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x331d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x331d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x331d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x331d94: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x331d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x331d98: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x331D98u;
    {
        const bool branch_taken_0x331d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x331D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D98u;
        // 0x331d9c: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d98) {
            ctx->pc = 0x331DC8u;
            goto label_331dc8;
        }
    }
    ctx->pc = 0x331DA0u;
    // 0x331da0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x331da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x331da4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x331da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x331da8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x331da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331dac: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x331dacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x331db0: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x331db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331db4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x331db4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x331db8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x331db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x331dbc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x331dc0: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x331dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
    // 0x331dc4: 0x0  nop
    ctx->pc = 0x331dc4u;
    // NOP
label_331dc8:
    // 0x331dc8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x331dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x331dcc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x331dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331dd0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x331dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x331dd4: 0x250a0018  addiu       $t2, $t0, 0x18
    ctx->pc = 0x331dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x331dd8: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x331dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
    // 0x331ddc: 0x9d440008  lwu         $a0, 0x8($t2)
    ctx->pc = 0x331ddcu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x331de0: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x331de0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x331de4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x331de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x331de8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x331de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x331dec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x331decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x331df0: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x331df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x331df4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x331df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x331df8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x331df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x331dfc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x331dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x331e00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331e04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x331e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x331e08: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x331e08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x331e0c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x331e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331e10: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x331e10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x331e14: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x331e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x331e18: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331e18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x331e1c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x331e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_331e20:
    // 0x331e20: 0x42000039  di
    ctx->pc = 0x331e20u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x331e24: 0x40f  sync.p
    ctx->pc = 0x331e24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x331e28: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x331e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x331e2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x331e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x331e30: 0x0  nop
    ctx->pc = 0x331e30u;
    // NOP
    // 0x331e34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x331E34u;
    {
        const bool branch_taken_0x331e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x331e34) {
            ctx->pc = 0x331E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331e20;
        }
    }
    ctx->pc = 0x331E3Cu;
    // 0x331e3c: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x331e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x331e40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x331e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x331e44: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x331e44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x331e48: 0x42000038  ei
    ctx->pc = 0x331e48u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x331e4c: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x331e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x331e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331e54: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x331E54u;
    {
        const bool branch_taken_0x331e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x331E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E54u;
        // 0x331e58: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e54) {
            ctx->pc = 0x331E68u;
            goto label_331e68;
        }
    }
    ctx->pc = 0x331E5Cu;
    // 0x331e5c: 0xc10a762  jal         func_429D88
    ctx->pc = 0x331E5Cu;
    SET_GPR_U32(ctx, 31, 0x331E64u);
    ctx->pc = 0x331E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E5Cu;
    // 0x331e60: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x331E5Cu, 0x331E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E64u;
label_331e64:
    // 0x331e64: 0x0  nop
    ctx->pc = 0x331e64u;
    // NOP
label_331e68:
    // 0x331e68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x331e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331e74: 0x3e00008  jr          $ra
    ctx->pc = 0x331E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E74u;
        // 0x331e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331E7Cu;
    // 0x331e7c: 0x0  nop
    ctx->pc = 0x331e7cu;
    // NOP
    // 0x331e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331e84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x331e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331e8c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x331e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x331e90: 0xc0cc4d8  jal         func_331360
    ctx->pc = 0x331E90u;
    SET_GPR_U32(ctx, 31, 0x331E98u);
    ctx->pc = 0x331E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E90u;
    // 0x331e94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331360u;
    goto label_331360;
    ctx->pc = 0x331E98u;
label_331e98:
    // 0x331e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x331E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E9Cu;
        // 0x331ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331EA4u;
    // 0x331ea4: 0x0  nop
    ctx->pc = 0x331ea4u;
    // NOP
    ctx->pc = 0x331ea8u;
}
