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

// Function: sub_003F2110
// Address: 0x3f2110 - 0x3f2230
void sub_003F2110_0x3f2110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2110_0x3f2110");
#endif

    switch (ctx->pc) {
        case 0x3f2144u: goto label_3f2144;
        case 0x3f21c0u: goto label_3f21c0;
        case 0x3f2214u: goto label_3f2214;
        default: break;
    }

    ctx->pc = 0x3f2110u;

    // 0x3f2110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2114: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3f2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3f2118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f211c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f2120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f2120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2128: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x3f2128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x3f212c: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3F212Cu;
    {
        const bool branch_taken_0x3f212c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F212Cu;
        // 0x3f2130: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f212c) {
            ctx->pc = 0x3F221Cu;
            goto label_3f221c;
        }
    }
    ctx->pc = 0x3F2134u;
    // 0x3f2134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f2134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2138: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x3f2138u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3f213c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F213Cu;
    SET_GPR_U32(ctx, 31, 0x3F2144u);
    ctx->pc = 0x3F2140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F213Cu;
    // 0x3f2140: 0x92250012  lbu         $a1, 0x12($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F213Cu, 0x3F2144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2144u;
label_3f2144:
    // 0x3f2144: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3f2144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2148: 0x1100002a  beqz        $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F2148u;
    {
        const bool branch_taken_0x3f2148 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2148u;
        // 0x3f214c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2148) {
            ctx->pc = 0x3F21F4u;
            goto label_3f21f4;
        }
    }
    ctx->pc = 0x3F2150u;
    // 0x3f2150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f2150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2154: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3f2154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2158: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F2158u;
    {
        const bool branch_taken_0x3f2158 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3F215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2158u;
        // 0x3f215c: 0x31040003  andi        $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2158) {
            ctx->pc = 0x3F219Cu;
            goto label_3f219c;
        }
    }
    ctx->pc = 0x3F2160u;
    // 0x3f2160: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3F2160u;
    {
        const bool branch_taken_0x3f2160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2160u;
        // 0x3f2164: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2160) {
            ctx->pc = 0x3F21B8u;
            goto label_3f21b8;
        }
    }
    ctx->pc = 0x3F2168u;
    // 0x3f2168: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3F2168u;
    {
        const bool branch_taken_0x3f2168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2168) {
            ctx->pc = 0x3F216Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2168u;
            // 0x3f216c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F21A0u;
            goto label_3f21a0;
        }
    }
    ctx->pc = 0x3F2170u;
    // 0x3f2170: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3f2170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f2174: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2174u;
    {
        const bool branch_taken_0x3f2174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2174) {
            ctx->pc = 0x3F2178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2174u;
            // 0x3f2178: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F218Cu;
            goto label_3f218c;
        }
    }
    ctx->pc = 0x3F217Cu;
    // 0x3f217c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x3f217cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f2180: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f2180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2184: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x3f2184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3f2188: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f2188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3f218c:
    // 0x3f218c: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x3f218cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x3f2190: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3f2190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3f2194: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3f2194u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2198: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f2198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3f219c:
    // 0x3f219c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f219cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3f21a0:
    // 0x3f21a0: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x3f21a0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x3f21a4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3f21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3f21a8: 0xc8382b  sltu        $a3, $a2, $t0
    ctx->pc = 0x3f21a8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3f21ac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3f21acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f21b0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F21B0u;
    {
        const bool branch_taken_0x3f21b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F21B0u;
        // 0x3f21b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f21b0) {
            ctx->pc = 0x3F21F4u;
            goto label_3f21f4;
        }
    }
    ctx->pc = 0x3F21B8u;
label_3f21b8:
    // 0x3f21b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3f21b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f21bc: 0x0  nop
    ctx->pc = 0x3f21bcu;
    // NOP
label_3f21c0:
    // 0x3f21c0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3f21c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f21c4: 0x64c60004  daddiu      $a2, $a2, 0x4
    ctx->pc = 0x3f21c4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4);
    // 0x3f21c8: 0xc8382b  sltu        $a3, $a2, $t0
    ctx->pc = 0x3f21c8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3f21cc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3f21ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f21d0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3f21d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3f21d4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3f21d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f21d8: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x3f21d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3f21dc: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3f21dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f21e0: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x3f21e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3f21e4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3f21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3f21e8: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x3f21e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f21ec: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F21ECu;
    {
        const bool branch_taken_0x3f21ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F21ECu;
        // 0x3f21f0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f21ec) {
            ctx->pc = 0x3F21C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f21c0;
        }
    }
    ctx->pc = 0x3F21F4u;
label_3f21f4:
    // 0x3f21f4: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x3f21f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3f21f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3f21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f21fc: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x3f21fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3f2200: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3f2200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3f2204: 0x92250012  lbu         $a1, 0x12($s1)
    ctx->pc = 0x3f2204u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3f2208: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x3f2208u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f220c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F220Cu;
    SET_GPR_U32(ctx, 31, 0x3F2214u);
    ctx->pc = 0x3F2210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F220Cu;
    // 0x3f2210: 0xa2220013  sb          $v0, 0x13($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F220Cu, 0x3F2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2214u;
label_3f2214:
    // 0x3f2214: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x3f2214u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x3f2218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f2218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f221c:
    // 0x3f221c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f221cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2224: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2224u;
        // 0x3f2228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F222Cu;
    // 0x3f222c: 0x0  nop
    ctx->pc = 0x3f222cu;
    // NOP
    ctx->pc = 0x3f2230u;
}
