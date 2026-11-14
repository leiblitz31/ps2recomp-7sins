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

// Function: sub_003531F8
// Address: 0x3531f8 - 0x353760
void sub_003531F8_0x3531f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003531F8_0x3531f8");
#endif

    switch (ctx->pc) {
        case 0x353230u: goto label_353230;
        case 0x35325cu: goto label_35325c;
        case 0x353280u: goto label_353280;
        case 0x3532c8u: goto label_3532c8;
        case 0x3532f8u: goto label_3532f8;
        case 0x353410u: goto label_353410;
        case 0x353474u: goto label_353474;
        case 0x3534d4u: goto label_3534d4;
        case 0x353520u: goto label_353520;
        case 0x35353cu: goto label_35353c;
        case 0x353598u: goto label_353598;
        case 0x3535fcu: goto label_3535fc;
        case 0x35365cu: goto label_35365c;
        case 0x3536e0u: goto label_3536e0;
        default: break;
    }

    ctx->pc = 0x3531f8u;

    // 0x3531f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3531f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3531fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3531fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353200: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x353200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x353204: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x353204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x353208: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x353208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x35320c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x353210: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x353210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x353214: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x353214u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x353218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x353218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35321c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353220: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x353220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353224: 0x39103  sra         $s2, $v1, 4
    ctx->pc = 0x353224u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 4));
    // 0x353228: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x353228u;
    SET_GPR_U32(ctx, 31, 0x353230u);
    ctx->pc = 0x35322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353228u;
    // 0x35322c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x353228u, 0x353230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353230u;
label_353230:
    // 0x353230: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x353234: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x353234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x353238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x353238u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x35323c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35323cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x353240: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x353240u;
    {
        const bool branch_taken_0x353240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353240u;
        // 0x353244: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353240) {
            ctx->pc = 0x35329Cu;
            goto label_35329c;
        }
    }
    ctx->pc = 0x353248u;
    // 0x353248: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x353248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35324c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35324cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x353250: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x353250u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x353254: 0xf  sync
    ctx->pc = 0x353254u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353258: 0x40f  sync.p
    ctx->pc = 0x353258u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35325c:
    // 0x35325c: 0x0  nop
    ctx->pc = 0x35325cu;
    // NOP
    // 0x353260: 0x0  nop
    ctx->pc = 0x353260u;
    // NOP
    // 0x353264: 0x0  nop
    ctx->pc = 0x353264u;
    // NOP
    // 0x353268: 0x0  nop
    ctx->pc = 0x353268u;
    // NOP
    // 0x35326c: 0x0  nop
    ctx->pc = 0x35326cu;
    // NOP
    // 0x353270: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353270u;
    {
        const bool branch_taken_0x353270 = (false);
        if (branch_taken_0x353270) {
            ctx->pc = 0x35325Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35325c;
        }
    }
    ctx->pc = 0x353278u;
    // 0x353278: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x353278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35327c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35327cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_353280:
    // 0x353280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353280u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x353284: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353288: 0x0  nop
    ctx->pc = 0x353288u;
    // NOP
    // 0x35328c: 0x0  nop
    ctx->pc = 0x35328cu;
    // NOP
    // 0x353290: 0x0  nop
    ctx->pc = 0x353290u;
    // NOP
    // 0x353294: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x353294u;
    {
        const bool branch_taken_0x353294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353294) {
            ctx->pc = 0x353280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353280;
        }
    }
    ctx->pc = 0x35329Cu;
label_35329c:
    // 0x35329c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35329cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3532a0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3532a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3532a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3532a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x3532a8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3532a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3532ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3532ACu;
    {
        const bool branch_taken_0x3532ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3532B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532ACu;
        // 0x3532b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532ac) {
            ctx->pc = 0x3532E8u;
            goto label_3532e8;
        }
    }
    ctx->pc = 0x3532B4u;
    // 0x3532b4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3532b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3532b8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3532b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3532bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3532bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3532c0: 0xf  sync
    ctx->pc = 0x3532c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3532c4: 0x40f  sync.p
    ctx->pc = 0x3532c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3532c8:
    // 0x3532c8: 0x0  nop
    ctx->pc = 0x3532c8u;
    // NOP
    // 0x3532cc: 0x0  nop
    ctx->pc = 0x3532ccu;
    // NOP
    // 0x3532d0: 0x0  nop
    ctx->pc = 0x3532d0u;
    // NOP
    // 0x3532d4: 0x0  nop
    ctx->pc = 0x3532d4u;
    // NOP
    // 0x3532d8: 0x0  nop
    ctx->pc = 0x3532d8u;
    // NOP
    // 0x3532dc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3532DCu;
    {
        const bool branch_taken_0x3532dc = (false);
        if (branch_taken_0x3532dc) {
            ctx->pc = 0x3532C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3532c8;
        }
    }
    ctx->pc = 0x3532E4u;
    // 0x3532e4: 0x0  nop
    ctx->pc = 0x3532e4u;
    // NOP
label_3532e8:
    // 0x3532e8: 0x2a460401  slti        $a2, $s2, 0x401
    ctx->pc = 0x3532e8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3532ec: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x3532ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x3532f0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3532f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3532f4: 0x0  nop
    ctx->pc = 0x3532f4u;
    // NOP
label_3532f8:
    // 0x3532f8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3532f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3532fc: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x3532fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x353300: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x353300u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x353304: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x353304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353308: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x353308u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x35330c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x35330cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353310: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x353310u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x353314: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x353314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353318: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x353318u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x35331c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x35331cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353320: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x353320u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x353324: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x353324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353328: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x353328u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x35332c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x35332cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353330: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x353330u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x353334: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x353334u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353338: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x353338u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x35333c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x35333cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353340: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x353340u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x353344: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x353344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353348: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x353348u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x35334c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x35334cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353350: 0x7c8300a0  sq          $v1, 0xA0($a0)
    ctx->pc = 0x353350u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 3));
    // 0x353354: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x353354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353358: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x353358u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
    // 0x35335c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x35335cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353360: 0x7c8300c0  sq          $v1, 0xC0($a0)
    ctx->pc = 0x353360u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 3));
    // 0x353364: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x353364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353368: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x353368u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
    // 0x35336c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x35336cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353370: 0x7c8300e0  sq          $v1, 0xE0($a0)
    ctx->pc = 0x353370u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 3));
    // 0x353374: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x353374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353378: 0x7c8200f0  sq          $v0, 0xF0($a0)
    ctx->pc = 0x353378u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), GPR_VEC(ctx, 2));
    // 0x35337c: 0x4a1ffde  bgez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x35337Cu;
    {
        const bool branch_taken_0x35337c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x353380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35337Cu;
        // 0x353380: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35337c) {
            ctx->pc = 0x3532F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3532f8;
        }
    }
    ctx->pc = 0x353384u;
    // 0x353384: 0x14c000ca  bnez        $a2, . + 4 + (0xCA << 2)
    ctx->pc = 0x353384u;
    {
        const bool branch_taken_0x353384 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x353384) {
            ctx->pc = 0x3536B0u;
            goto label_3536b0;
        }
    }
    ctx->pc = 0x35338Cu;
    // 0x35338c: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x35338cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x353390: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x353390u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x353394: 0x1721023  subu        $v0, $t3, $s2
    ctx->pc = 0x353394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x353398: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x353398u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x35339c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x35339cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x3533a0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3533a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3533a4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3533a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3533a8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3533a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3533ac: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x3533acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3533b0: 0x354ad000  ori         $t2, $t2, 0xD000
    ctx->pc = 0x3533b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)53248);
    // 0x3533b4: 0x3529e020  ori         $t1, $t1, 0xE020
    ctx->pc = 0x3533b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)57376);
    // 0x3533b8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3533b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3533bc: 0x3508e010  ori         $t0, $t0, 0xE010
    ctx->pc = 0x3533bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57360);
    // 0x3533c0: 0x34e7d080  ori         $a3, $a3, 0xD080
    ctx->pc = 0x3533c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53376);
    // 0x3533c4: 0x34c6d010  ori         $a2, $a2, 0xD010
    ctx->pc = 0x3533c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53264);
    // 0x3533c8: 0x2a420401  slti        $v0, $s2, 0x401
    ctx->pc = 0x3533c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3533cc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3533CCu;
    {
        const bool branch_taken_0x3533cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3533D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3533CCu;
        // 0x3533d0: 0x34a5d020  ori         $a1, $a1, 0xD020 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3533cc) {
            ctx->pc = 0x3534B8u;
            goto label_3534b8;
        }
    }
    ctx->pc = 0x3533D4u;
    // 0x3533d4: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x3533D4u;
    {
        const bool branch_taken_0x3533d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3533D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3533D4u;
        // 0x3533d8: 0x28620c00  slti        $v0, $v1, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3072) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3533d4) {
            ctx->pc = 0x353520u;
            goto label_353520;
        }
    }
    ctx->pc = 0x3533DCu;
    // 0x3533dc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3533DCu;
    {
        const bool branch_taken_0x3533dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3533E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3533DCu;
        // 0x3533e0: 0x28620800  slti        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3533dc) {
            ctx->pc = 0x3534B8u;
            goto label_3534b8;
        }
    }
    ctx->pc = 0x3533E4u;
    // 0x3533e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3533E4u;
    {
        const bool branch_taken_0x3533e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3533E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3533E4u;
        // 0x3533e8: 0x28620400  slti        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3533e4) {
            ctx->pc = 0x353458u;
            goto label_353458;
        }
    }
    ctx->pc = 0x3533ECu;
    // 0x3533ec: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3533ECu;
    {
        const bool branch_taken_0x3533ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3533ec) {
            ctx->pc = 0x353520u;
            goto label_353520;
        }
    }
    ctx->pc = 0x3533F4u;
    // 0x3533f4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3533f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3533f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3533f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3533fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3533FCu;
    {
        const bool branch_taken_0x3533fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3533fc) {
            ctx->pc = 0x353430u;
            goto label_353430;
        }
    }
    ctx->pc = 0x353404u;
    // 0x353404: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353404u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353408: 0xf  sync
    ctx->pc = 0x353408u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35340c: 0x40f  sync.p
    ctx->pc = 0x35340cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353410:
    // 0x353410: 0x0  nop
    ctx->pc = 0x353410u;
    // NOP
    // 0x353414: 0x0  nop
    ctx->pc = 0x353414u;
    // NOP
    // 0x353418: 0x0  nop
    ctx->pc = 0x353418u;
    // NOP
    // 0x35341c: 0x0  nop
    ctx->pc = 0x35341cu;
    // NOP
    // 0x353420: 0x0  nop
    ctx->pc = 0x353420u;
    // NOP
    // 0x353424: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353424u;
    {
        const bool branch_taken_0x353424 = (false);
        if (branch_taken_0x353424) {
            ctx->pc = 0x353410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353410;
        }
    }
    ctx->pc = 0x35342Cu;
    // 0x35342c: 0x0  nop
    ctx->pc = 0x35342cu;
    // NOP
label_353430:
    // 0x353430: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353430u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353434: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353434u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353438: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x353438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x35343c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x35343cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353440: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353444: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353444u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353448: 0xf  sync
    ctx->pc = 0x353448u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35344c: 0x40f  sync.p
    ctx->pc = 0x35344cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353450: 0x26314000  addiu       $s1, $s1, 0x4000
    ctx->pc = 0x353450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x353454: 0x2652fc00  addiu       $s2, $s2, -0x400
    ctx->pc = 0x353454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
label_353458:
    // 0x353458: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x35345c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353460: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353460u;
    {
        const bool branch_taken_0x353460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353460) {
            ctx->pc = 0x353490u;
            goto label_353490;
        }
    }
    ctx->pc = 0x353468u;
    // 0x353468: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353468u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x35346c: 0xf  sync
    ctx->pc = 0x35346cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353470: 0x40f  sync.p
    ctx->pc = 0x353470u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353474:
    // 0x353474: 0x0  nop
    ctx->pc = 0x353474u;
    // NOP
    // 0x353478: 0x0  nop
    ctx->pc = 0x353478u;
    // NOP
    // 0x35347c: 0x0  nop
    ctx->pc = 0x35347cu;
    // NOP
    // 0x353480: 0x0  nop
    ctx->pc = 0x353480u;
    // NOP
    // 0x353484: 0x0  nop
    ctx->pc = 0x353484u;
    // NOP
    // 0x353488: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353488u;
    {
        const bool branch_taken_0x353488 = (false);
        if (branch_taken_0x353488) {
            ctx->pc = 0x353474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353474;
        }
    }
    ctx->pc = 0x353490u;
label_353490:
    // 0x353490: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353490u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353494: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353498: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x353498u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x35349c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x35349cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x3534a0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3534a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3534a4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x3534a4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x3534a8: 0xf  sync
    ctx->pc = 0x3534a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3534ac: 0x40f  sync.p
    ctx->pc = 0x3534acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3534b0: 0x26314000  addiu       $s1, $s1, 0x4000
    ctx->pc = 0x3534b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x3534b4: 0x2652fc00  addiu       $s2, $s2, -0x400
    ctx->pc = 0x3534b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
label_3534b8:
    // 0x3534b8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3534b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3534bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3534bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3534c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3534C0u;
    {
        const bool branch_taken_0x3534c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3534c0) {
            ctx->pc = 0x3534F0u;
            goto label_3534f0;
        }
    }
    ctx->pc = 0x3534C8u;
    // 0x3534c8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x3534c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3534cc: 0xf  sync
    ctx->pc = 0x3534ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3534d0: 0x40f  sync.p
    ctx->pc = 0x3534d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3534d4:
    // 0x3534d4: 0x0  nop
    ctx->pc = 0x3534d4u;
    // NOP
    // 0x3534d8: 0x0  nop
    ctx->pc = 0x3534d8u;
    // NOP
    // 0x3534dc: 0x0  nop
    ctx->pc = 0x3534dcu;
    // NOP
    // 0x3534e0: 0x0  nop
    ctx->pc = 0x3534e0u;
    // NOP
    // 0x3534e4: 0x0  nop
    ctx->pc = 0x3534e4u;
    // NOP
    // 0x3534e8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3534E8u;
    {
        const bool branch_taken_0x3534e8 = (false);
        if (branch_taken_0x3534e8) {
            ctx->pc = 0x3534D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3534d4;
        }
    }
    ctx->pc = 0x3534F0u;
label_3534f0:
    // 0x3534f0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x3534f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x3534f4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3534f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3534f8: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x3534f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x3534fc: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3534fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353500: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353504: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353504u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353508: 0xf  sync
    ctx->pc = 0x353508u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35350c: 0x40f  sync.p
    ctx->pc = 0x35350cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353510: 0x2652fc00  addiu       $s2, $s2, -0x400
    ctx->pc = 0x353510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
    // 0x353514: 0x2a420401  slti        $v0, $s2, 0x401
    ctx->pc = 0x353514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x353518: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x353518u;
    {
        const bool branch_taken_0x353518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353518u;
        // 0x35351c: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353518) {
            ctx->pc = 0x3536B0u;
            goto label_3536b0;
        }
    }
    ctx->pc = 0x353520u;
label_353520:
    // 0x353520: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353524: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353528: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353528u;
    {
        const bool branch_taken_0x353528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353528) {
            ctx->pc = 0x353558u;
            goto label_353558;
        }
    }
    ctx->pc = 0x353530u;
    // 0x353530: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353530u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353534: 0xf  sync
    ctx->pc = 0x353534u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353538: 0x40f  sync.p
    ctx->pc = 0x353538u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35353c:
    // 0x35353c: 0x0  nop
    ctx->pc = 0x35353cu;
    // NOP
    // 0x353540: 0x0  nop
    ctx->pc = 0x353540u;
    // NOP
    // 0x353544: 0x0  nop
    ctx->pc = 0x353544u;
    // NOP
    // 0x353548: 0x0  nop
    ctx->pc = 0x353548u;
    // NOP
    // 0x35354c: 0x0  nop
    ctx->pc = 0x35354cu;
    // NOP
    // 0x353550: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353550u;
    {
        const bool branch_taken_0x353550 = (false);
        if (branch_taken_0x353550) {
            ctx->pc = 0x35353Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35353c;
        }
    }
    ctx->pc = 0x353558u;
label_353558:
    // 0x353558: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353558u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x35355c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x35355cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353560: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x353560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x353564: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353568: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x35356c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x35356cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353570: 0xf  sync
    ctx->pc = 0x353570u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353574: 0x40f  sync.p
    ctx->pc = 0x353574u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353578: 0x26234000  addiu       $v1, $s1, 0x4000
    ctx->pc = 0x353578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x35357c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x35357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353580: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353584: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x353584u;
    {
        const bool branch_taken_0x353584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353584) {
            ctx->pc = 0x3535B8u;
            goto label_3535b8;
        }
    }
    ctx->pc = 0x35358Cu;
    // 0x35358c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x35358cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353590: 0xf  sync
    ctx->pc = 0x353590u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353594: 0x40f  sync.p
    ctx->pc = 0x353594u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353598:
    // 0x353598: 0x0  nop
    ctx->pc = 0x353598u;
    // NOP
    // 0x35359c: 0x0  nop
    ctx->pc = 0x35359cu;
    // NOP
    // 0x3535a0: 0x0  nop
    ctx->pc = 0x3535a0u;
    // NOP
    // 0x3535a4: 0x0  nop
    ctx->pc = 0x3535a4u;
    // NOP
    // 0x3535a8: 0x0  nop
    ctx->pc = 0x3535a8u;
    // NOP
    // 0x3535ac: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3535ACu;
    {
        const bool branch_taken_0x3535ac = (false);
        if (branch_taken_0x3535ac) {
            ctx->pc = 0x353598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353598;
        }
    }
    ctx->pc = 0x3535B4u;
    // 0x3535b4: 0x0  nop
    ctx->pc = 0x3535b4u;
    // NOP
label_3535b8:
    // 0x3535b8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x3535b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x3535bc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3535bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3535c0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3535c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3535c4: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3535c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x3535c8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3535c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3535cc: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x3535ccu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x3535d0: 0xf  sync
    ctx->pc = 0x3535d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3535d4: 0x40f  sync.p
    ctx->pc = 0x3535d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3535d8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3535d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3535dc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3535dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3535e0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3535e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3535e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3535e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3535e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3535E8u;
    {
        const bool branch_taken_0x3535e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3535e8) {
            ctx->pc = 0x353618u;
            goto label_353618;
        }
    }
    ctx->pc = 0x3535F0u;
    // 0x3535f0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x3535f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3535f4: 0xf  sync
    ctx->pc = 0x3535f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3535f8: 0x40f  sync.p
    ctx->pc = 0x3535f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3535fc:
    // 0x3535fc: 0x0  nop
    ctx->pc = 0x3535fcu;
    // NOP
    // 0x353600: 0x0  nop
    ctx->pc = 0x353600u;
    // NOP
    // 0x353604: 0x0  nop
    ctx->pc = 0x353604u;
    // NOP
    // 0x353608: 0x0  nop
    ctx->pc = 0x353608u;
    // NOP
    // 0x35360c: 0x0  nop
    ctx->pc = 0x35360cu;
    // NOP
    // 0x353610: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353610u;
    {
        const bool branch_taken_0x353610 = (false);
        if (branch_taken_0x353610) {
            ctx->pc = 0x3535FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3535fc;
        }
    }
    ctx->pc = 0x353618u;
label_353618:
    // 0x353618: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353618u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x35361c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x35361cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353620: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x353620u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x353624: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353628: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x35362c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x35362cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353630: 0xf  sync
    ctx->pc = 0x353630u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353634: 0x40f  sync.p
    ctx->pc = 0x353634u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353638: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x353638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x35363c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x35363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x353640: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353644: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353648: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353648u;
    {
        const bool branch_taken_0x353648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353648) {
            ctx->pc = 0x353678u;
            goto label_353678;
        }
    }
    ctx->pc = 0x353650u;
    // 0x353650: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353650u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353654: 0xf  sync
    ctx->pc = 0x353654u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353658: 0x40f  sync.p
    ctx->pc = 0x353658u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35365c:
    // 0x35365c: 0x0  nop
    ctx->pc = 0x35365cu;
    // NOP
    // 0x353660: 0x0  nop
    ctx->pc = 0x353660u;
    // NOP
    // 0x353664: 0x0  nop
    ctx->pc = 0x353664u;
    // NOP
    // 0x353668: 0x0  nop
    ctx->pc = 0x353668u;
    // NOP
    // 0x35366c: 0x0  nop
    ctx->pc = 0x35366cu;
    // NOP
    // 0x353670: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353670u;
    {
        const bool branch_taken_0x353670 = (false);
        if (branch_taken_0x353670) {
            ctx->pc = 0x35365Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35365c;
        }
    }
    ctx->pc = 0x353678u;
label_353678:
    // 0x353678: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353678u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x35367c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x35367cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353680: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x353680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x353684: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353688: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x35368c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x35368cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353690: 0xf  sync
    ctx->pc = 0x353690u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353694: 0x40f  sync.p
    ctx->pc = 0x353694u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353698: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x353698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x35369c: 0x2652f000  addiu       $s2, $s2, -0x1000
    ctx->pc = 0x35369cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963200));
    // 0x3536a0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x3536a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3536a4: 0x2a420401  slti        $v0, $s2, 0x401
    ctx->pc = 0x3536a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3536a8: 0x1040ff9d  beqz        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3536A8u;
    {
        const bool branch_taken_0x3536a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3536a8) {
            ctx->pc = 0x353520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353520;
        }
    }
    ctx->pc = 0x3536B0u;
label_3536b0:
    // 0x3536b0: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x3536B0u;
    {
        const bool branch_taken_0x3536b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536B0u;
        // 0x3536b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536b0) {
            ctx->pc = 0x353748u;
            goto label_353748;
        }
    }
    ctx->pc = 0x3536B8u;
    // 0x3536b8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3536b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3536bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3536bcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x3536c0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3536c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3536c4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3536C4u;
    {
        const bool branch_taken_0x3536c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536C4u;
        // 0x3536c8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536c4) {
            ctx->pc = 0x353700u;
            goto label_353700;
        }
    }
    ctx->pc = 0x3536CCu;
    // 0x3536cc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3536ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3536d0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3536d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3536d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3536d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3536d8: 0xf  sync
    ctx->pc = 0x3536d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3536dc: 0x40f  sync.p
    ctx->pc = 0x3536dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3536e0:
    // 0x3536e0: 0x0  nop
    ctx->pc = 0x3536e0u;
    // NOP
    // 0x3536e4: 0x0  nop
    ctx->pc = 0x3536e4u;
    // NOP
    // 0x3536e8: 0x0  nop
    ctx->pc = 0x3536e8u;
    // NOP
    // 0x3536ec: 0x0  nop
    ctx->pc = 0x3536ecu;
    // NOP
    // 0x3536f0: 0x0  nop
    ctx->pc = 0x3536f0u;
    // NOP
    // 0x3536f4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3536F4u;
    {
        const bool branch_taken_0x3536f4 = (false);
        if (branch_taken_0x3536f4) {
            ctx->pc = 0x3536E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3536e0;
        }
    }
    ctx->pc = 0x3536FCu;
    // 0x3536fc: 0x0  nop
    ctx->pc = 0x3536fcu;
    // NOP
label_353700:
    // 0x353700: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x353704: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x353704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353708: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x353708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35370c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35370cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x353710: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x353710u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x353714: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x353714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x353718: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x353718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35371c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x35371cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x353720: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x353720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x353724: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x353728: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x353728u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x35372c: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x35372cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x353730: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x353730u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 18)); // MMIO: 0x1000d020
    // 0x353734: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353738: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x353738u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x35373c: 0xf  sync
    ctx->pc = 0x35373cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353740: 0x40f  sync.p
    ctx->pc = 0x353740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353744: 0x0  nop
    ctx->pc = 0x353744u;
    // NOP
label_353748:
    // 0x353748: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x353748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35374c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35374cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353750: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x353750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353758: 0x3e00008  jr          $ra
    ctx->pc = 0x353758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353758u;
        // 0x35375c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353760u;
}
