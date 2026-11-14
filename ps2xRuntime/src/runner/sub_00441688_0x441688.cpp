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

// Function: sub_00441688
// Address: 0x441688 - 0x4419e8
void sub_00441688_0x441688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00441688_0x441688");
#endif

    switch (ctx->pc) {
        case 0x44170cu: goto label_44170c;
        case 0x44171cu: goto label_44171c;
        case 0x441730u: goto label_441730;
        case 0x44173cu: goto label_44173c;
        case 0x4418a0u: goto label_4418a0;
        case 0x4419b4u: goto label_4419b4;
        default: break;
    }

    ctx->pc = 0x441688u;

    // 0x441688: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x441688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44168c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x44168cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x441690: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x441690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x441694: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x441694u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x441698: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x441698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x44169c: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x44169cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x4416a0: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x4416a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x4416a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4416a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4416a8: 0x3c0d5000  lui         $t5, 0x5000
    ctx->pc = 0x4416a8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)20480 << 16));
    // 0x4416ac: 0x35ad0001  ori         $t5, $t5, 0x1
    ctx->pc = 0x4416acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1);
    // 0x4416b0: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x4416b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x4416b4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x4416b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x4416b8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4416b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4416bc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x4416bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x4416c0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4416c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4416c4: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x4416c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x4416c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4416c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4416cc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4416ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4416d0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4416d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4416d4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4416d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4416d8: 0x4a83e  dsrl32      $s5, $a0, 0
    ctx->pc = 0x4416d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4416dc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4416dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4416e0: 0x71acbb89  pcpyld      $s7, $t5, $t4
    ctx->pc = 0x4416e0u;
    SET_GPR_VEC(ctx, 23, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x4416e4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4416e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4416e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4416e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4416ec: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4416ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4416f0: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x4416f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4416f4: 0x9283e  dsrl32      $a1, $t1, 0
    ctx->pc = 0x4416f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x4416f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4416f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4416fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4416fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441700: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x441700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x441704: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x441704u;
    SET_GPR_U32(ctx, 31, 0x44170Cu);
    ctx->pc = 0x441708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441704u;
    // 0x441708: 0x1521f8  dsll        $a0, $s5, 7 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << 7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x441704u, 0x44170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44170Cu;
label_44170c:
    // 0x44170c: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x44170cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441710: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x441710u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x441714: 0xc10a1e2  jal         func_428788
    ctx->pc = 0x441714u;
    SET_GPR_U32(ctx, 31, 0x44171Cu);
    ctx->pc = 0x441718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441714u;
    // 0x441718: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428788u, 0x441714u, 0x44171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44171Cu;
label_44171c:
    // 0x44171c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x44171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x441720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x441720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441724: 0x2c42018  mult        $a0, $s6, $a0
    ctx->pc = 0x441724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x441728: 0xc10a4a8  jal         func_4292A0
    ctx->pc = 0x441728u;
    SET_GPR_U32(ctx, 31, 0x441730u);
    ctx->pc = 0x44172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441728u;
    // 0x44172c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4292A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4292A0u, 0x441728u, 0x441730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441730u;
label_441730:
    // 0x441730: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x441730u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441734: 0xc10a1e2  jal         func_428788
    ctx->pc = 0x441734u;
    SET_GPR_U32(ctx, 31, 0x44173Cu);
    ctx->pc = 0x441738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441734u;
    // 0x441738: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428788u, 0x441734u, 0x44173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44173Cu;
label_44173c:
    // 0x44173c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x44173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x441740: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x441740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x441744: 0x1e203c  dsll32      $a0, $fp, 0
    ctx->pc = 0x441744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 0));
    // 0x441748: 0x826025  or          $t4, $a0, $v0
    ctx->pc = 0x441748u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x44174c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44174cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441750: 0x706c1389  pcpyld      $v0, $v1, $t4
    ctx->pc = 0x441750u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 12)));
    // 0x441754: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x441754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x441758: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x441758u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x44175c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x44175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x441760: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x441760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x441764: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x441764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x441768: 0x24e64040  addiu       $a2, $a3, 0x4040
    ctx->pc = 0x441768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16448));
    // 0x44176c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x44176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x441770: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x441770u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x624070u));
    // 0x441774: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x441774u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x441778: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x441778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x44177c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x44177cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x624040u));
    // 0x441780: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x441780u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x441784: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x441784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x441788: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x441788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x44178c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x44178cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x441790: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x441790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x441794: 0x139c3c  dsll32      $s3, $s3, 16
    ctx->pc = 0x441794u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 16));
    // 0x441798: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x441798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x44179c: 0x32313fff  andi        $s1, $s1, 0x3FFF
    ctx->pc = 0x44179cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16383);
    // 0x4417a0: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4417a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4417a4: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x4417a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4417a8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4417a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4417ac: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x4417acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x4417b0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4417b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4417b4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x4417b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x4417b8: 0x656025  or          $t4, $v1, $a1
    ctx->pc = 0x4417b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4417bc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x4417bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x4417c0: 0x704c1389  pcpyld      $v0, $v0, $t4
    ctx->pc = 0x4417c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x4417c4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4417c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x4417c8: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4417c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x4417cc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4417ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4417d0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4417d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4417d4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4417d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x4417d8: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4417d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4417dc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4417dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4417e0: 0x16283c  dsll32      $a1, $s6, 0
    ctx->pc = 0x4417e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 0));
    // 0x4417e4: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x4417e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x4417e8: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x4417e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x4417ec: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x4417ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x4417f0: 0xb26025  or          $t4, $a1, $s2
    ctx->pc = 0x4417f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4417f4: 0x704c1389  pcpyld      $v0, $v0, $t4
    ctx->pc = 0x4417f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x4417f8: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4417f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x4417fc: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4417fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x441800: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x441800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x441804: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x441804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x441808: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x441808u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x44180c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x44180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x441810: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x441810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x441814: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x441814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441818: 0x12c00051  beqz        $s6, . + 4 + (0x51 << 2)
    ctx->pc = 0x441818u;
    {
        const bool branch_taken_0x441818 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x44181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441818u;
        // 0x44181c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441818) {
            ctx->pc = 0x441960u;
            goto label_441960;
        }
    }
    ctx->pc = 0x441820u;
    // 0x441820: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x441820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x441824: 0x26cbffff  addiu       $t3, $s6, -0x1
    ctx->pc = 0x441824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x441828: 0x2a25025  or          $t2, $s5, $v0
    ctx->pc = 0x441828u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x44182c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x44182cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x441830: 0xf7b3c  dsll32      $t7, $t7, 12
    ctx->pc = 0x441830u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 12));
    // 0x441834: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x441834u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441838: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x441838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44183c: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x44183Cu;
    {
        const bool branch_taken_0x44183c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x441840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44183Cu;
        // 0x441840: 0x32c20001  andi        $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44183c) {
            ctx->pc = 0x441850u;
            goto label_441850;
        }
    }
    ctx->pc = 0x441844u;
    // 0x441844: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x441844u;
    {
        const bool branch_taken_0x441844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x441844) {
            ctx->pc = 0x441848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x441844u;
            // 0x441848: 0x7cd70000  sq          $s7, 0x0($a2) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4418A4u;
            goto label_4418a4;
        }
    }
    ctx->pc = 0x44184Cu;
    // 0x44184c: 0x0  nop
    ctx->pc = 0x44184cu;
    // NOP
label_441850:
    // 0x441850: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x441850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x441854: 0x7fd70000  sq          $s7, 0x0($fp)
    ctx->pc = 0x441854u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 23));
    // 0x441858: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x441858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44185c: 0x12b182b  sltu        $v1, $t1, $t3
    ctx->pc = 0x44185cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x441860: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x441860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x441864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441868: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x441868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44186c: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x44186cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x441870: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x441870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x441874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x441874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441878: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x441878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x44187c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x44187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x441880: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x441880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x441884: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x441884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x441888: 0xa683c  dsll32      $t5, $t2, 0
    ctx->pc = 0x441888u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 0));
    // 0x44188c: 0x4f6025  or          $t4, $v0, $t7
    ctx->pc = 0x44188cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x441890: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x441890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x441894: 0x71cc1389  pcpyld      $v0, $t6, $t4
    ctx->pc = 0x441894u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x441898: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x441898u;
    {
        const bool branch_taken_0x441898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441898u;
        // 0x44189c: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441898) {
            ctx->pc = 0x441938u;
            goto label_441938;
        }
    }
    ctx->pc = 0x4418A0u;
label_4418a0:
    // 0x4418a0: 0x7cd70000  sq          $s7, 0x0($a2)
    ctx->pc = 0x4418a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 23));
label_4418a4:
    // 0x4418a4: 0x12b102b  sltu        $v0, $t1, $t3
    ctx->pc = 0x4418a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4418a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4418a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4418ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4418acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4418b0: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x4418b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x4418b4: 0x32700  sll         $a0, $v1, 28
    ctx->pc = 0x4418b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x4418b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4418b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4418bc: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x4418bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x4418c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4418c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4418c4: 0x2a42025  or          $a0, $s5, $a0
    ctx->pc = 0x4418c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x4418c8: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x4418c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x4418cc: 0xa683c  dsll32      $t5, $t2, 0
    ctx->pc = 0x4418ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 0));
    // 0x4418d0: 0x4f6025  or          $t4, $v0, $t7
    ctx->pc = 0x4418d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4418d4: 0x7cd70030  sq          $s7, 0x30($a2)
    ctx->pc = 0x4418d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 23));
    // 0x4418d8: 0x71cc1389  pcpyld      $v0, $t6, $t4
    ctx->pc = 0x4418d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x4418dc: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x4418dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4418e0: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x4418e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x4418e4: 0x856025  or          $t4, $a0, $a1
    ctx->pc = 0x4418e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4418e8: 0x71ac1389  pcpyld      $v0, $t5, $t4
    ctx->pc = 0x4418e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x4418ec: 0x6b182b  sltu        $v1, $v1, $t3
    ctx->pc = 0x4418ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4418f0: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x4418f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x4418f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4418f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4418f8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x4418f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x4418fc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x4418fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x441900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x441900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441904: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x441904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x441908: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x441908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x44190c: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x44190cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x441910: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x441910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441914: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x441914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x441918: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x441918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x44191c: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x44191cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x441920: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x441920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x441924: 0xa683c  dsll32      $t5, $t2, 0
    ctx->pc = 0x441924u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 0));
    // 0x441928: 0x4f6025  or          $t4, $v0, $t7
    ctx->pc = 0x441928u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x44192c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x44192cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x441930: 0x71cc1389  pcpyld      $v0, $t6, $t4
    ctx->pc = 0x441930u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x441934: 0x25080060  addiu       $t0, $t0, 0x60
    ctx->pc = 0x441934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
label_441938:
    // 0x441938: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x441938u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x44193c: 0x646025  or          $t4, $v1, $a0
    ctx->pc = 0x44193cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x441940: 0x71ac1389  pcpyld      $v0, $t5, $t4
    ctx->pc = 0x441940u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x441944: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441948: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x441948u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x44194c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x441950: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x441950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x441954: 0x136102b  sltu        $v0, $t1, $s6
    ctx->pc = 0x441954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x441958: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x441958u;
    {
        const bool branch_taken_0x441958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441958u;
        // 0x44195c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441958) {
            ctx->pc = 0x4418A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4418a0;
        }
    }
    ctx->pc = 0x441960u;
label_441960:
    // 0x441960: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x441960u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x441964: 0x358c0002  ori         $t4, $t4, 0x2
    ctx->pc = 0x441964u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x441968: 0x3c0d5000  lui         $t5, 0x5000
    ctx->pc = 0x441968u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)20480 << 16));
    // 0x44196c: 0x35ad0002  ori         $t5, $t5, 0x2
    ctx->pc = 0x44196cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x441970: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x441970u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x441974: 0x71ac1389  pcpyld      $v0, $t5, $t4
    ctx->pc = 0x441974u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x441978: 0x24e34040  addiu       $v1, $a3, 0x4040
    ctx->pc = 0x441978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16448));
    // 0x44197c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x44197cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441980: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x441980u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x441984: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x441984u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x441988: 0x358c8001  ori         $t4, $t4, 0x8001
    ctx->pc = 0x441988u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32769);
    // 0x44198c: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x44198cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x441990: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441994: 0x71ac1389  pcpyld      $v0, $t5, $t4
    ctx->pc = 0x441994u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x441998: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x441998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44199c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x44199cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x4419a0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4419a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4419a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4419a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4419a8: 0x2505008f  addiu       $a1, $t0, 0x8F
    ctx->pc = 0x4419a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 143));
    // 0x4419ac: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4419ACu;
    SET_GPR_U32(ctx, 31, 0x4419B4u);
    ctx->pc = 0x4419B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4419ACu;
    // 0x4419b0: 0x7d020000  sq          $v0, 0x0($t0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4419ACu, 0x4419B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4419B4u;
label_4419b4:
    // 0x4419b4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4419b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4419b8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4419b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4419bc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4419bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4419c0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4419c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4419c4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4419c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4419c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4419c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4419cc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4419ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4419d0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4419d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4419d4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4419d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4419d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4419d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4419dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4419DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4419E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4419DCu;
        // 0x4419e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4419DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4419E4u;
    // 0x4419e4: 0x0  nop
    ctx->pc = 0x4419e4u;
    // NOP
    ctx->pc = 0x4419e8u;
}
