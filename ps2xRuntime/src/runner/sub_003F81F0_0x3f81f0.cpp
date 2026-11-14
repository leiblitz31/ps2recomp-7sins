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

// Function: sub_003F81F0
// Address: 0x3f81f0 - 0x3f8cd8
void sub_003F81F0_0x3f81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F81F0_0x3f81f0");
#endif

    switch (ctx->pc) {
        case 0x3f8254u: goto label_3f8254;
        case 0x3f8340u: goto label_3f8340;
        case 0x3f845cu: goto label_3f845c;
        case 0x3f8640u: goto label_3f8640;
        case 0x3f875cu: goto label_3f875c;
        case 0x3f8910u: goto label_3f8910;
        case 0x3f8a2cu: goto label_3f8a2c;
        case 0x3f8b90u: goto label_3f8b90;
        case 0x3f8ba4u: goto label_3f8ba4;
        case 0x3f8be4u: goto label_3f8be4;
        case 0x3f8bfcu: goto label_3f8bfc;
        case 0x3f8c14u: goto label_3f8c14;
        case 0x3f8c28u: goto label_3f8c28;
        case 0x3f8c38u: goto label_3f8c38;
        case 0x3f8c50u: goto label_3f8c50;
        case 0x3f8c64u: goto label_3f8c64;
        case 0x3f8c78u: goto label_3f8c78;
        case 0x3f8ca0u: goto label_3f8ca0;
        default: break;
    }

    ctx->pc = 0x3f81f0u;

    // 0x3f81f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3f81f4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3f81f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3f81f8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3f81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3f81fc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3f81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3f8200: 0x249601d0  addiu       $s6, $a0, 0x1D0
    ctx->pc = 0x3f8200u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x3f8204: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3f8204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3f8208: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3f8208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3f820c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3f820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3f8210: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3f8210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3f8214: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3f8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3f8218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f8218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f821c: 0x8c8201bc  lw          $v0, 0x1BC($a0)
    ctx->pc = 0x3f821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x3f8220: 0x90910208  lbu         $s1, 0x208($a0)
    ctx->pc = 0x3f8220u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x3f8224: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x3f8224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f8228: 0x126002a0  beqz        $s3, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x3F8228u;
    {
        const bool branch_taken_0x3f8228 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8228u;
        // 0x3f822c: 0xdc950108  ld          $s5, 0x108($a0) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 4), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8228) {
            ctx->pc = 0x3F8CACu;
            goto label_3f8cac;
        }
    }
    ctx->pc = 0x3F8230u;
    // 0x3f8230: 0x12c0029e  beqz        $s6, . + 4 + (0x29E << 2)
    ctx->pc = 0x3F8230u;
    {
        const bool branch_taken_0x3f8230 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8230u;
        // 0x3f8234: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8230) {
            ctx->pc = 0x3F8CACu;
            goto label_3f8cac;
        }
    }
    ctx->pc = 0x3F8238u;
    // 0x3f8238: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x3f8238u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3f823c: 0x2602e0d8  addiu       $v0, $s0, -0x1F28
    ctx->pc = 0x3f823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959320));
    // 0x3f8240: 0xdc9201d0  ld          $s2, 0x1D0($a0)
    ctx->pc = 0x3f8240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x3f8244: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x3f8244u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3f8248: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3f8248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3f824c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F824Cu;
    SET_GPR_U32(ctx, 31, 0x3F8254u);
    ctx->pc = 0x3F8250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F824Cu;
    // 0x3f8250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F824Cu, 0x3F8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8254u;
label_3f8254:
    // 0x3f8254: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3f8254u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8258: 0x92c30013  lbu         $v1, 0x13($s6)
    ctx->pc = 0x3f8258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 19)));
    // 0x3f825c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f8260: 0x106200c7  beq         $v1, $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x3F8260u;
    {
        const bool branch_taken_0x3f8260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8260u;
        // 0x3f8264: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8260) {
            ctx->pc = 0x3F8580u;
            goto label_3f8580;
        }
    }
    ctx->pc = 0x3F8268u;
    // 0x3f8268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F8268u;
    {
        const bool branch_taken_0x3f8268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8268u;
        // 0x3f826c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8268) {
            ctx->pc = 0x3F8280u;
            goto label_3f8280;
        }
    }
    ctx->pc = 0x3F8270u;
    // 0x3f8270: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F8270u;
    {
        const bool branch_taken_0x3f8270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8270u;
        // 0x3f8274: 0x2604e0d8  addiu       $a0, $s0, -0x1F28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8270) {
            ctx->pc = 0x3F8294u;
            goto label_3f8294;
        }
    }
    ctx->pc = 0x3F8278u;
    // 0x3f8278: 0x10000235  b           . + 4 + (0x235 << 2)
    ctx->pc = 0x3F8278u;
    {
        const bool branch_taken_0x3f8278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8278u;
        // 0x3f827c: 0xdec60000  ld          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8278) {
            ctx->pc = 0x3F8B50u;
            goto label_3f8b50;
        }
    }
    ctx->pc = 0x3F8280u;
label_3f8280:
    // 0x3f8280: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f8280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f8284: 0x1062017e  beq         $v1, $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x3F8284u;
    {
        const bool branch_taken_0x3f8284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8284u;
        // 0x3f8288: 0x2604e0d8  addiu       $a0, $s0, -0x1F28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8284) {
            ctx->pc = 0x3F8880u;
            goto label_3f8880;
        }
    }
    ctx->pc = 0x3F828Cu;
    // 0x3f828c: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x3F828Cu;
    {
        const bool branch_taken_0x3f828c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F828Cu;
        // 0x3f8290: 0xdec60000  ld          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f828c) {
            ctx->pc = 0x3F8B50u;
            goto label_3f8b50;
        }
    }
    ctx->pc = 0x3F8294u;
label_3f8294:
    // 0x3f8294: 0x6642ffff  daddiu      $v0, $s2, -0x1
    ctx->pc = 0x3f8294u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4294967295);
    // 0x3f8298: 0x66e4ffff  daddiu      $a0, $s7, -0x1
    ctx->pc = 0x3f8298u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294967295);
    // 0x3f829c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x3f829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x3f82a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f82a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f82a4: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x3f82a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x3f82a8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3f82a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3f82ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f82acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f82b0: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x3f82b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3f82b4: 0x2644021  addu        $t0, $s3, $a0
    ctx->pc = 0x3f82b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x3f82b8: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x3f82b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x3f82bc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3F82BCu;
    {
        const bool branch_taken_0x3f82bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F82BCu;
        // 0x3f82c0: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f82bc) {
            ctx->pc = 0x3F82F4u;
            goto label_3f82f4;
        }
    }
    ctx->pc = 0x3F82C4u;
    // 0x3f82c4: 0x66420007  daddiu      $v0, $s2, 0x7
    ctx->pc = 0x3f82c4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)7);
    // 0x3f82c8: 0x66e30007  daddiu      $v1, $s7, 0x7
    ctx->pc = 0x3f82c8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)7);
    // 0x3f82cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3f82ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3f82d0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3f82d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3f82d4: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x3f82d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f82d8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3f82d8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3f82dc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3f82dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f82e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3f82e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3f82e4: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x3f82e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f82e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f82e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f82ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3F82ECu;
    {
        const bool branch_taken_0x3f82ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F82ECu;
        // 0x3f82f0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f82ec) {
            ctx->pc = 0x3F832Cu;
            goto label_3f832c;
        }
    }
    ctx->pc = 0x3F82F4u;
label_3f82f4:
    // 0x3f82f4: 0x66420007  daddiu      $v0, $s2, 0x7
    ctx->pc = 0x3f82f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)7);
    // 0x3f82f8: 0x66e30007  daddiu      $v1, $s7, 0x7
    ctx->pc = 0x3f82f8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)7);
    // 0x3f82fc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3f82fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3f8300: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3f8300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3f8304: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3f8304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f8308: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f8308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f830c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f830cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f8310: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f8310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f8314: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f8314u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f8318: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x3f8318u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f831c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x3f831cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3f8320: 0x829023  subu        $s2, $a0, $v0
    ctx->pc = 0x3f8320u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f8324: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x3f8324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f8328: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3f8328u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f832c:
    // 0x3f832c: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3f832cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3f8330: 0x10400257  beqz        $v0, . + 4 + (0x257 << 2)
    ctx->pc = 0x3F8330u;
    {
        const bool branch_taken_0x3f8330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8330u;
        // 0x3f8334: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8330) {
            ctx->pc = 0x3F8C90u;
            goto label_3f8c90;
        }
    }
    ctx->pc = 0x3F8338u;
    // 0x3f8338: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f8338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f833c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3f833cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3f8340:
    // 0x3f8340: 0x64740001  daddiu      $s4, $v1, 0x1
    ctx->pc = 0x3f8340u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3f8344: 0x2421007  srav        $v0, $v0, $s2
    ctx->pc = 0x3f8344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x3f8348: 0x1a200082  blez        $s1, . + 4 + (0x82 << 2)
    ctx->pc = 0x3F8348u;
    {
        const bool branch_taken_0x3f8348 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3F834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8348u;
        // 0x3f834c: 0x304c0001  andi        $t4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8348) {
            ctx->pc = 0x3F8554u;
            goto label_3f8554;
        }
    }
    ctx->pc = 0x3F8350u;
    // 0x3f8350: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3f8350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8354: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3f8354u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3f8358: 0x91823  negu        $v1, $t1
    ctx->pc = 0x3f8358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x3f835c: 0x24460007  addiu       $a2, $v0, 0x7
    ctx->pc = 0x3f835cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x3f8360: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3f8360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3f8364: 0x240d7f7f  addiu       $t5, $zero, 0x7F7F
    ctx->pc = 0x3f8364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32639));
    // 0x3f8368: 0xf5823  negu        $t3, $t7
    ctx->pc = 0x3f8368u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x3f836c: 0xe5023  negu        $t2, $t6
    ctx->pc = 0x3f836cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x3f8370: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3F8370u;
    {
        const bool branch_taken_0x3f8370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8370u;
        // 0x3f8374: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8370) {
            ctx->pc = 0x3F8458u;
            goto label_3f8458;
        }
    }
    ctx->pc = 0x3F8378u;
    // 0x3f8378: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f8378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f837c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3F837Cu;
    {
        const bool branch_taken_0x3f837c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F837Cu;
        // 0x3f8380: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f837c) {
            ctx->pc = 0x3F840Cu;
            goto label_3f840c;
        }
    }
    ctx->pc = 0x3F8384u;
    // 0x3f8384: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F8384u;
    {
        const bool branch_taken_0x3f8384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8384u;
        // 0x3f8388: 0xcd1807  srav        $v1, $t5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8384) {
            ctx->pc = 0x3F83CCu;
            goto label_3f83cc;
        }
    }
    ctx->pc = 0x3F838Cu;
    // 0x3f838c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3f838cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f8390: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8394: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f839c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f83a0: 0x14b00007  bne         $a1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F83A0u;
    {
        const bool branch_taken_0x3f83a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F83A0u;
        // 0x3f83a4: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f83a0) {
            ctx->pc = 0x3F83C0u;
            goto label_3f83c0;
        }
    }
    ctx->pc = 0x3F83A8u;
    // 0x3f83a8: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3f83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3f83ac: 0x25660007  addiu       $a2, $t3, 0x7
    ctx->pc = 0x3f83acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x3f83b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f83b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f83b4: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f83b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f83b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F83B8u;
    {
        const bool branch_taken_0x3f83b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F83B8u;
        // 0x3f83bc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f83b8) {
            ctx->pc = 0x3F83C8u;
            goto label_3f83c8;
        }
    }
    ctx->pc = 0x3F83C0u;
label_3f83c0:
    // 0x3f83c0: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f83c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f83c4: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f83c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f83c8:
    // 0x3f83c8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f83c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3f83cc:
    // 0x3f83cc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f83ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f83d0: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f83d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f83d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f83d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f83d8: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f83dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f83dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f83e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f83e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f83e4: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F83E4u;
    {
        const bool branch_taken_0x3f83e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F83E4u;
        // 0x3f83e8: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f83e4) {
            ctx->pc = 0x3F8400u;
            goto label_3f8400;
        }
    }
    ctx->pc = 0x3F83ECu;
    // 0x3f83ec: 0x25660007  addiu       $a2, $t3, 0x7
    ctx->pc = 0x3f83ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x3f83f0: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f83f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f83f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f83f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f83f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F83F8u;
    {
        const bool branch_taken_0x3f83f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F83F8u;
        // 0x3f83fc: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f83f8) {
            ctx->pc = 0x3F8408u;
            goto label_3f8408;
        }
    }
    ctx->pc = 0x3F8400u;
label_3f8400:
    // 0x3f8400: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8404: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8408:
    // 0x3f8408: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f8408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3f840c:
    // 0x3f840c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f840cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8410: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8410u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8414: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8418: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f841c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f8420: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f8420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8424: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8424u;
    {
        const bool branch_taken_0x3f8424 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8424u;
        // 0x3f8428: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8424) {
            ctx->pc = 0x3F8440u;
            goto label_3f8440;
        }
    }
    ctx->pc = 0x3F842Cu;
    // 0x3f842c: 0x25660007  addiu       $a2, $t3, 0x7
    ctx->pc = 0x3f842cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x3f8430: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8434: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8438u;
    {
        const bool branch_taken_0x3f8438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8438u;
        // 0x3f843c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8438) {
            ctx->pc = 0x3F8448u;
            goto label_3f8448;
        }
    }
    ctx->pc = 0x3F8440u;
label_3f8440:
    // 0x3f8440: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8444: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8448:
    // 0x3f8448: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f8448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3f844c: 0x11200041  beqz        $t1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3F844Cu;
    {
        const bool branch_taken_0x3f844c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f844c) {
            ctx->pc = 0x3F8554u;
            goto label_3f8554;
        }
    }
    ctx->pc = 0x3F8454u;
    // 0x3f8454: 0x0  nop
    ctx->pc = 0x3f8454u;
    // NOP
label_3f8458:
    // 0x3f8458: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3f845c:
    // 0x3f845c: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f845cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8460: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8464: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8468: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f846c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8470: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8470u;
    {
        const bool branch_taken_0x3f8470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8470u;
        // 0x3f8474: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8470) {
            ctx->pc = 0x3F848Cu;
            goto label_3f848c;
        }
    }
    ctx->pc = 0x3F8478u;
    // 0x3f8478: 0x25660007  addiu       $a2, $t3, 0x7
    ctx->pc = 0x3f8478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x3f847c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8480: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8484u;
    {
        const bool branch_taken_0x3f8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8484u;
        // 0x3f8488: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8484) {
            ctx->pc = 0x3F8494u;
            goto label_3f8494;
        }
    }
    ctx->pc = 0x3F848Cu;
label_3f848c:
    // 0x3f848c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f848cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8490: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8494:
    // 0x3f8494: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8498: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8498u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f849c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f849cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f84a0: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f84a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f84a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f84a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f84a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f84a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f84ac: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F84ACu;
    {
        const bool branch_taken_0x3f84ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F84ACu;
        // 0x3f84b0: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f84ac) {
            ctx->pc = 0x3F84C8u;
            goto label_3f84c8;
        }
    }
    ctx->pc = 0x3F84B4u;
    // 0x3f84b4: 0x25660007  addiu       $a2, $t3, 0x7
    ctx->pc = 0x3f84b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x3f84b8: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f84b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f84bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f84bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f84c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F84C0u;
    {
        const bool branch_taken_0x3f84c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F84C0u;
        // 0x3f84c4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f84c0) {
            ctx->pc = 0x3F84D0u;
            goto label_3f84d0;
        }
    }
    ctx->pc = 0x3F84C8u;
label_3f84c8:
    // 0x3f84c8: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f84c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f84cc: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f84d0:
    // 0x3f84d0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f84d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f84d4: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f84d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f84d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f84d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f84dc: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f84dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f84e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f84e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f84e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f84e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f84e8: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F84E8u;
    {
        const bool branch_taken_0x3f84e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F84E8u;
        // 0x3f84ec: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f84e8) {
            ctx->pc = 0x3F8504u;
            goto label_3f8504;
        }
    }
    ctx->pc = 0x3F84F0u;
    // 0x3f84f0: 0x25660007  addiu       $a2, $t3, 0x7
    ctx->pc = 0x3f84f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x3f84f4: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f84f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f84f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f84f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f84fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F84FCu;
    {
        const bool branch_taken_0x3f84fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F84FCu;
        // 0x3f8500: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f84fc) {
            ctx->pc = 0x3F850Cu;
            goto label_3f850c;
        }
    }
    ctx->pc = 0x3F8504u;
label_3f8504:
    // 0x3f8504: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8508: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f850c:
    // 0x3f850c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f850cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8510: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8510u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8514: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8518: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f851c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f851cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f8520: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f8520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8524: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8524u;
    {
        const bool branch_taken_0x3f8524 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8524u;
        // 0x3f8528: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8524) {
            ctx->pc = 0x3F8540u;
            goto label_3f8540;
        }
    }
    ctx->pc = 0x3F852Cu;
    // 0x3f852c: 0x25660007  addiu       $a2, $t3, 0x7
    ctx->pc = 0x3f852cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x3f8530: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8534: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8538u;
    {
        const bool branch_taken_0x3f8538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8538u;
        // 0x3f853c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8538) {
            ctx->pc = 0x3F8548u;
            goto label_3f8548;
        }
    }
    ctx->pc = 0x3F8540u;
label_3f8540:
    // 0x3f8540: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8544: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8548:
    // 0x3f8548: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x3f8548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x3f854c: 0x5520ffc3  bnel        $t1, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x3F854Cu;
    {
        const bool branch_taken_0x3f854c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f854c) {
            ctx->pc = 0x3F8550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F854Cu;
            // 0x3f8550: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F845Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f845c;
        }
    }
    ctx->pc = 0x3F8554u;
label_3f8554:
    // 0x3f8554: 0x16500003  bne         $s2, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8554u;
    {
        const bool branch_taken_0x3f8554 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8554u;
        // 0x3f8558: 0x24e9021  addu        $s2, $s2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8554) {
            ctx->pc = 0x3F8564u;
            goto label_3f8564;
        }
    }
    ctx->pc = 0x3F855Cu;
    // 0x3f855c: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x3f855cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8560: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f8560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3f8564:
    // 0x3f8564: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3f8564u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3f8568: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3f8568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f856c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3f856cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f8570: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x3F8570u;
    {
        const bool branch_taken_0x3f8570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8570) {
            ctx->pc = 0x3F8574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8570u;
            // 0x3f8574: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f8340;
        }
    }
    ctx->pc = 0x3F8578u;
    // 0x3f8578: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x3F8578u;
    {
        const bool branch_taken_0x3f8578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8578u;
        // 0x3f857c: 0xfed70000  sd          $s7, 0x0($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8578) {
            ctx->pc = 0x3F8C94u;
            goto label_3f8c94;
        }
    }
    ctx->pc = 0x3F8580u;
label_3f8580:
    // 0x3f8580: 0x6642ffff  daddiu      $v0, $s2, -0x1
    ctx->pc = 0x3f8580u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4294967295);
    // 0x3f8584: 0x66e4ffff  daddiu      $a0, $s7, -0x1
    ctx->pc = 0x3f8584u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294967295);
    // 0x3f8588: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x3f8588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x3f858c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f858cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f8590: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x3f8590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x3f8594: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3f8594u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3f8598: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f8598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f859c: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x3f859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3f85a0: 0x2644021  addu        $t0, $s3, $a0
    ctx->pc = 0x3f85a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x3f85a4: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x3f85a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x3f85a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3F85A8u;
    {
        const bool branch_taken_0x3f85a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F85A8u;
        // 0x3f85ac: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f85a8) {
            ctx->pc = 0x3F85E8u;
            goto label_3f85e8;
        }
    }
    ctx->pc = 0x3F85B0u;
    // 0x3f85b0: 0x66420003  daddiu      $v0, $s2, 0x3
    ctx->pc = 0x3f85b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)3);
    // 0x3f85b4: 0x66e30003  daddiu      $v1, $s7, 0x3
    ctx->pc = 0x3f85b4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)3);
    // 0x3f85b8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3f85b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f85bc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3f85bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3f85c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f85c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f85c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f85c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f85c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f85c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f85cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f85ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f85d0: 0x29040  sll         $s2, $v0, 1
    ctx->pc = 0x3f85d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3f85d4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x3f85d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f85d8: 0x240f0006  addiu       $t7, $zero, 0x6
    ctx->pc = 0x3f85d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f85dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f85dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f85e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3F85E0u;
    {
        const bool branch_taken_0x3f85e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F85E0u;
        // 0x3f85e4: 0x240efffe  addiu       $t6, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f85e0) {
            ctx->pc = 0x3F8628u;
            goto label_3f8628;
        }
    }
    ctx->pc = 0x3F85E8u;
label_3f85e8:
    // 0x3f85e8: 0x66e30003  daddiu      $v1, $s7, 0x3
    ctx->pc = 0x3f85e8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)3);
    // 0x3f85ec: 0x66420003  daddiu      $v0, $s2, 0x3
    ctx->pc = 0x3f85ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)3);
    // 0x3f85f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f85f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f85f4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3f85f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3f85f8: 0x83182f  dsubu       $v1, $a0, $v1
    ctx->pc = 0x3f85f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x3f85fc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3f85fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f8600: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x3f8600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x3f8604: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f8608: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f8608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f860c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3f860cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f8610: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3f8610u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3f8614: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x3f8614u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8618: 0x49040  sll         $s2, $a0, 1
    ctx->pc = 0x3f8618u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3f861c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x3f861cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f8620: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x3f8620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f8624: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x3f8624u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f8628:
    // 0x3f8628: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3f8628u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3f862c: 0x10400198  beqz        $v0, . + 4 + (0x198 << 2)
    ctx->pc = 0x3F862Cu;
    {
        const bool branch_taken_0x3f862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F862Cu;
        // 0x3f8630: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f862c) {
            ctx->pc = 0x3F8C90u;
            goto label_3f8c90;
        }
    }
    ctx->pc = 0x3F8634u;
    // 0x3f8634: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f8634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8638: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3f8638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3f863c: 0x0  nop
    ctx->pc = 0x3f863cu;
    // NOP
label_3f8640:
    // 0x3f8640: 0x64740001  daddiu      $s4, $v1, 0x1
    ctx->pc = 0x3f8640u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3f8644: 0x2421007  srav        $v0, $v0, $s2
    ctx->pc = 0x3f8644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x3f8648: 0x1a200082  blez        $s1, . + 4 + (0x82 << 2)
    ctx->pc = 0x3F8648u;
    {
        const bool branch_taken_0x3f8648 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3F864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8648u;
        // 0x3f864c: 0x304c0003  andi        $t4, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8648) {
            ctx->pc = 0x3F8854u;
            goto label_3f8854;
        }
    }
    ctx->pc = 0x3F8650u;
    // 0x3f8650: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3f8650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8654: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3f8654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3f8658: 0x91823  negu        $v1, $t1
    ctx->pc = 0x3f8658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x3f865c: 0x24460006  addiu       $a2, $v0, 0x6
    ctx->pc = 0x3f865cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x3f8660: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3f8660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3f8664: 0x240d3f3f  addiu       $t5, $zero, 0x3F3F
    ctx->pc = 0x3f8664u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16191));
    // 0x3f8668: 0xf5823  negu        $t3, $t7
    ctx->pc = 0x3f8668u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x3f866c: 0xe5023  negu        $t2, $t6
    ctx->pc = 0x3f866cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x3f8670: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3F8670u;
    {
        const bool branch_taken_0x3f8670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8670u;
        // 0x3f8674: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8670) {
            ctx->pc = 0x3F8758u;
            goto label_3f8758;
        }
    }
    ctx->pc = 0x3F8678u;
    // 0x3f8678: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f8678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f867c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3F867Cu;
    {
        const bool branch_taken_0x3f867c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F867Cu;
        // 0x3f8680: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f867c) {
            ctx->pc = 0x3F870Cu;
            goto label_3f870c;
        }
    }
    ctx->pc = 0x3F8684u;
    // 0x3f8684: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F8684u;
    {
        const bool branch_taken_0x3f8684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8684u;
        // 0x3f8688: 0xcd1807  srav        $v1, $t5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8684) {
            ctx->pc = 0x3F86CCu;
            goto label_3f86cc;
        }
    }
    ctx->pc = 0x3F868Cu;
    // 0x3f868c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3f868cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f8690: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8694: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8698: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f869c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f869cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f86a0: 0x14b00007  bne         $a1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F86A0u;
    {
        const bool branch_taken_0x3f86a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F86A0u;
        // 0x3f86a4: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f86a0) {
            ctx->pc = 0x3F86C0u;
            goto label_3f86c0;
        }
    }
    ctx->pc = 0x3F86A8u;
    // 0x3f86a8: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3f86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3f86ac: 0x25660006  addiu       $a2, $t3, 0x6
    ctx->pc = 0x3f86acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3f86b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f86b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f86b4: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f86b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f86b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F86B8u;
    {
        const bool branch_taken_0x3f86b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F86B8u;
        // 0x3f86bc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f86b8) {
            ctx->pc = 0x3F86C8u;
            goto label_3f86c8;
        }
    }
    ctx->pc = 0x3F86C0u;
label_3f86c0:
    // 0x3f86c0: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f86c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f86c4: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f86c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f86c8:
    // 0x3f86c8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f86c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3f86cc:
    // 0x3f86cc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f86ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f86d0: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f86d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f86d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f86d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f86d8: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f86d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f86dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f86dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f86e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f86e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f86e4: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F86E4u;
    {
        const bool branch_taken_0x3f86e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F86E4u;
        // 0x3f86e8: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f86e4) {
            ctx->pc = 0x3F8700u;
            goto label_3f8700;
        }
    }
    ctx->pc = 0x3F86ECu;
    // 0x3f86ec: 0x25660006  addiu       $a2, $t3, 0x6
    ctx->pc = 0x3f86ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3f86f0: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f86f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f86f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f86f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f86f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F86F8u;
    {
        const bool branch_taken_0x3f86f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F86F8u;
        // 0x3f86fc: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f86f8) {
            ctx->pc = 0x3F8708u;
            goto label_3f8708;
        }
    }
    ctx->pc = 0x3F8700u;
label_3f8700:
    // 0x3f8700: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8704: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8708:
    // 0x3f8708: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f8708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3f870c:
    // 0x3f870c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f870cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8710: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8710u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8714: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8718: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f871c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f8720: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f8720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8724: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8724u;
    {
        const bool branch_taken_0x3f8724 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8724u;
        // 0x3f8728: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8724) {
            ctx->pc = 0x3F8740u;
            goto label_3f8740;
        }
    }
    ctx->pc = 0x3F872Cu;
    // 0x3f872c: 0x25660006  addiu       $a2, $t3, 0x6
    ctx->pc = 0x3f872cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3f8730: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8734: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8738u;
    {
        const bool branch_taken_0x3f8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8738u;
        // 0x3f873c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8738) {
            ctx->pc = 0x3F8748u;
            goto label_3f8748;
        }
    }
    ctx->pc = 0x3F8740u;
label_3f8740:
    // 0x3f8740: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8744: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8748:
    // 0x3f8748: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f8748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3f874c: 0x11200041  beqz        $t1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3F874Cu;
    {
        const bool branch_taken_0x3f874c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f874c) {
            ctx->pc = 0x3F8854u;
            goto label_3f8854;
        }
    }
    ctx->pc = 0x3F8754u;
    // 0x3f8754: 0x0  nop
    ctx->pc = 0x3f8754u;
    // NOP
label_3f8758:
    // 0x3f8758: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3f875c:
    // 0x3f875c: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f875cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8760: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8764: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f876c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f876cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8770: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8770u;
    {
        const bool branch_taken_0x3f8770 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8770u;
        // 0x3f8774: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8770) {
            ctx->pc = 0x3F878Cu;
            goto label_3f878c;
        }
    }
    ctx->pc = 0x3F8778u;
    // 0x3f8778: 0x25660006  addiu       $a2, $t3, 0x6
    ctx->pc = 0x3f8778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3f877c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f877cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8780: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8784u;
    {
        const bool branch_taken_0x3f8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8784u;
        // 0x3f8788: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8784) {
            ctx->pc = 0x3F8794u;
            goto label_3f8794;
        }
    }
    ctx->pc = 0x3F878Cu;
label_3f878c:
    // 0x3f878c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f878cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8790: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8794:
    // 0x3f8794: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8798: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8798u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f879c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f879cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f87a0: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f87a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f87a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f87a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f87a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f87ac: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F87ACu;
    {
        const bool branch_taken_0x3f87ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F87ACu;
        // 0x3f87b0: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f87ac) {
            ctx->pc = 0x3F87C8u;
            goto label_3f87c8;
        }
    }
    ctx->pc = 0x3F87B4u;
    // 0x3f87b4: 0x25660006  addiu       $a2, $t3, 0x6
    ctx->pc = 0x3f87b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3f87b8: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f87b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f87bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f87c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F87C0u;
    {
        const bool branch_taken_0x3f87c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F87C0u;
        // 0x3f87c4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f87c0) {
            ctx->pc = 0x3F87D0u;
            goto label_3f87d0;
        }
    }
    ctx->pc = 0x3F87C8u;
label_3f87c8:
    // 0x3f87c8: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f87c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f87cc: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f87ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f87d0:
    // 0x3f87d0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f87d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f87d4: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f87d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f87d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f87d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f87dc: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f87dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f87e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f87e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f87e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f87e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f87e8: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F87E8u;
    {
        const bool branch_taken_0x3f87e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F87E8u;
        // 0x3f87ec: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f87e8) {
            ctx->pc = 0x3F8804u;
            goto label_3f8804;
        }
    }
    ctx->pc = 0x3F87F0u;
    // 0x3f87f0: 0x25660006  addiu       $a2, $t3, 0x6
    ctx->pc = 0x3f87f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3f87f4: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f87f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f87f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f87f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f87fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F87FCu;
    {
        const bool branch_taken_0x3f87fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F87FCu;
        // 0x3f8800: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f87fc) {
            ctx->pc = 0x3F880Cu;
            goto label_3f880c;
        }
    }
    ctx->pc = 0x3F8804u;
label_3f8804:
    // 0x3f8804: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8808: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f880c:
    // 0x3f880c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f880cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8810: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8810u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8814: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8818: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f881c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f8820: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f8820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8824: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8824u;
    {
        const bool branch_taken_0x3f8824 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8824u;
        // 0x3f8828: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8824) {
            ctx->pc = 0x3F8840u;
            goto label_3f8840;
        }
    }
    ctx->pc = 0x3F882Cu;
    // 0x3f882c: 0x25660006  addiu       $a2, $t3, 0x6
    ctx->pc = 0x3f882cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3f8830: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8834: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8838u;
    {
        const bool branch_taken_0x3f8838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8838u;
        // 0x3f883c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8838) {
            ctx->pc = 0x3F8848u;
            goto label_3f8848;
        }
    }
    ctx->pc = 0x3F8840u;
label_3f8840:
    // 0x3f8840: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8844: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8848:
    // 0x3f8848: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x3f8848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x3f884c: 0x5520ffc3  bnel        $t1, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x3F884Cu;
    {
        const bool branch_taken_0x3f884c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f884c) {
            ctx->pc = 0x3F8850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F884Cu;
            // 0x3f8850: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F875Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f875c;
        }
    }
    ctx->pc = 0x3F8854u;
label_3f8854:
    // 0x3f8854: 0x16500003  bne         $s2, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8854u;
    {
        const bool branch_taken_0x3f8854 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8854u;
        // 0x3f8858: 0x24e9021  addu        $s2, $s2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8854) {
            ctx->pc = 0x3F8864u;
            goto label_3f8864;
        }
    }
    ctx->pc = 0x3F885Cu;
    // 0x3f885c: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x3f885cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8860: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f8860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3f8864:
    // 0x3f8864: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3f8864u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3f8868: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3f8868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f886c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3f886cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f8870: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x3F8870u;
    {
        const bool branch_taken_0x3f8870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8870) {
            ctx->pc = 0x3F8874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8870u;
            // 0x3f8874: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f8640;
        }
    }
    ctx->pc = 0x3F8878u;
    // 0x3f8878: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x3F8878u;
    {
        const bool branch_taken_0x3f8878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8878u;
        // 0x3f887c: 0xfed70000  sd          $s7, 0x0($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8878) {
            ctx->pc = 0x3F8C94u;
            goto label_3f8c94;
        }
    }
    ctx->pc = 0x3F8880u;
label_3f8880:
    // 0x3f8880: 0x6642ffff  daddiu      $v0, $s2, -0x1
    ctx->pc = 0x3f8880u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4294967295);
    // 0x3f8884: 0x66e4ffff  daddiu      $a0, $s7, -0x1
    ctx->pc = 0x3f8884u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294967295);
    // 0x3f8888: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3f8888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3f888c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f888cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f8890: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x3f8890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x3f8894: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3f8894u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3f8898: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f8898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f889c: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x3f889cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3f88a0: 0x2644021  addu        $t0, $s3, $a0
    ctx->pc = 0x3f88a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x3f88a4: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x3f88a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x3f88a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3F88A8u;
    {
        const bool branch_taken_0x3f88a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F88A8u;
        // 0x3f88ac: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f88a8) {
            ctx->pc = 0x3F88D8u;
            goto label_3f88d8;
        }
    }
    ctx->pc = 0x3F88B0u;
    // 0x3f88b0: 0x66420001  daddiu      $v0, $s2, 0x1
    ctx->pc = 0x3f88b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    // 0x3f88b4: 0x66e30001  daddiu      $v1, $s7, 0x1
    ctx->pc = 0x3f88b4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)1);
    // 0x3f88b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f88b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f88bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3f88bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f88c0: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x3f88c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f88c4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x3f88c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f88c8: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x3f88c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f88cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f88ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f88d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F88D0u;
    {
        const bool branch_taken_0x3f88d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F88D0u;
        // 0x3f88d4: 0x240efffc  addiu       $t6, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f88d0) {
            ctx->pc = 0x3F88FCu;
            goto label_3f88fc;
        }
    }
    ctx->pc = 0x3F88D8u;
label_3f88d8:
    // 0x3f88d8: 0x66e20001  daddiu      $v0, $s7, 0x1
    ctx->pc = 0x3f88d8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)1);
    // 0x3f88dc: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x3f88dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3f88e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3f88e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3f88e4: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x3f88e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f88e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f88e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f88ec: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x3f88ecu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f88f0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x3f88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f88f4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x3f88f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f88f8: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x3f88f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f88fc:
    // 0x3f88fc: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3f88fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3f8900: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x3F8900u;
    {
        const bool branch_taken_0x3f8900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8900u;
        // 0x3f8904: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8900) {
            ctx->pc = 0x3F8C90u;
            goto label_3f8c90;
        }
    }
    ctx->pc = 0x3F8908u;
    // 0x3f8908: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f8908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f890c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3f890cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3f8910:
    // 0x3f8910: 0x64740001  daddiu      $s4, $v1, 0x1
    ctx->pc = 0x3f8910u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3f8914: 0x2421007  srav        $v0, $v0, $s2
    ctx->pc = 0x3f8914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x3f8918: 0x1a200082  blez        $s1, . + 4 + (0x82 << 2)
    ctx->pc = 0x3F8918u;
    {
        const bool branch_taken_0x3f8918 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3F891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8918u;
        // 0x3f891c: 0x304c000f  andi        $t4, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8918) {
            ctx->pc = 0x3F8B24u;
            goto label_3f8b24;
        }
    }
    ctx->pc = 0x3F8920u;
    // 0x3f8920: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3f8920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8924: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3f8924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3f8928: 0x91823  negu        $v1, $t1
    ctx->pc = 0x3f8928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x3f892c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x3f892cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3f8930: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3f8930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3f8934: 0x240d0f0f  addiu       $t5, $zero, 0xF0F
    ctx->pc = 0x3f8934u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3855));
    // 0x3f8938: 0xf5823  negu        $t3, $t7
    ctx->pc = 0x3f8938u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x3f893c: 0xe5023  negu        $t2, $t6
    ctx->pc = 0x3f893cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x3f8940: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3F8940u;
    {
        const bool branch_taken_0x3f8940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8940u;
        // 0x3f8944: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8940) {
            ctx->pc = 0x3F8A28u;
            goto label_3f8a28;
        }
    }
    ctx->pc = 0x3F8948u;
    // 0x3f8948: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f8948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f894c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3F894Cu;
    {
        const bool branch_taken_0x3f894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F894Cu;
        // 0x3f8950: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f894c) {
            ctx->pc = 0x3F89DCu;
            goto label_3f89dc;
        }
    }
    ctx->pc = 0x3F8954u;
    // 0x3f8954: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F8954u;
    {
        const bool branch_taken_0x3f8954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8954u;
        // 0x3f8958: 0xcd1807  srav        $v1, $t5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8954) {
            ctx->pc = 0x3F899Cu;
            goto label_3f899c;
        }
    }
    ctx->pc = 0x3F895Cu;
    // 0x3f895c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3f895cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f8960: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8964: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8968: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f896c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f896cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8970: 0x14b00007  bne         $a1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F8970u;
    {
        const bool branch_taken_0x3f8970 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8970u;
        // 0x3f8974: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8970) {
            ctx->pc = 0x3F8990u;
            goto label_3f8990;
        }
    }
    ctx->pc = 0x3F8978u;
    // 0x3f8978: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3f8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3f897c: 0x25660004  addiu       $a2, $t3, 0x4
    ctx->pc = 0x3f897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3f8980: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f8980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8984: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8988: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8988u;
    {
        const bool branch_taken_0x3f8988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8988u;
        // 0x3f898c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8988) {
            ctx->pc = 0x3F8998u;
            goto label_3f8998;
        }
    }
    ctx->pc = 0x3F8990u;
label_3f8990:
    // 0x3f8990: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8994: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8998:
    // 0x3f8998: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f8998u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3f899c:
    // 0x3f899c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f899cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f89a0: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f89a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f89a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f89a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f89a8: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f89ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f89acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f89b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f89b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f89b4: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F89B4u;
    {
        const bool branch_taken_0x3f89b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F89B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F89B4u;
        // 0x3f89b8: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f89b4) {
            ctx->pc = 0x3F89D0u;
            goto label_3f89d0;
        }
    }
    ctx->pc = 0x3F89BCu;
    // 0x3f89bc: 0x25660004  addiu       $a2, $t3, 0x4
    ctx->pc = 0x3f89bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3f89c0: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f89c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f89c4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f89c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f89c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F89C8u;
    {
        const bool branch_taken_0x3f89c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F89C8u;
        // 0x3f89cc: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f89c8) {
            ctx->pc = 0x3F89D8u;
            goto label_3f89d8;
        }
    }
    ctx->pc = 0x3F89D0u;
label_3f89d0:
    // 0x3f89d0: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f89d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f89d4: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f89d8:
    // 0x3f89d8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f89d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3f89dc:
    // 0x3f89dc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f89dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f89e0: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f89e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f89e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f89e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f89e8: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f89e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f89ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f89ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f89f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f89f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f89f4: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F89F4u;
    {
        const bool branch_taken_0x3f89f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F89F4u;
        // 0x3f89f8: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f89f4) {
            ctx->pc = 0x3F8A10u;
            goto label_3f8a10;
        }
    }
    ctx->pc = 0x3F89FCu;
    // 0x3f89fc: 0x25660004  addiu       $a2, $t3, 0x4
    ctx->pc = 0x3f89fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3f8a00: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8a08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8A08u;
    {
        const bool branch_taken_0x3f8a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A08u;
        // 0x3f8a0c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a08) {
            ctx->pc = 0x3F8A18u;
            goto label_3f8a18;
        }
    }
    ctx->pc = 0x3F8A10u;
label_3f8a10:
    // 0x3f8a10: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8a14: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8a18:
    // 0x3f8a18: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3f8a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3f8a1c: 0x11200041  beqz        $t1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3F8A1Cu;
    {
        const bool branch_taken_0x3f8a1c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8a1c) {
            ctx->pc = 0x3F8B24u;
            goto label_3f8b24;
        }
    }
    ctx->pc = 0x3F8A24u;
    // 0x3f8a24: 0x0  nop
    ctx->pc = 0x3f8a24u;
    // NOP
label_3f8a28:
    // 0x3f8a28: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3f8a2c:
    // 0x3f8a2c: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8a2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8a30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8a34: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8a38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f8a3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f8a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8a40: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8A40u;
    {
        const bool branch_taken_0x3f8a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A40u;
        // 0x3f8a44: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a40) {
            ctx->pc = 0x3F8A5Cu;
            goto label_3f8a5c;
        }
    }
    ctx->pc = 0x3F8A48u;
    // 0x3f8a48: 0x25660004  addiu       $a2, $t3, 0x4
    ctx->pc = 0x3f8a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3f8a4c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a50: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8a54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8A54u;
    {
        const bool branch_taken_0x3f8a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A54u;
        // 0x3f8a58: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a54) {
            ctx->pc = 0x3F8A64u;
            goto label_3f8a64;
        }
    }
    ctx->pc = 0x3F8A5Cu;
label_3f8a5c:
    // 0x3f8a5c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8a60: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8a64:
    // 0x3f8a64: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8a68: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8a68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8a6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8a70: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8a74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f8a78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f8a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8a7c: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8A7Cu;
    {
        const bool branch_taken_0x3f8a7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A7Cu;
        // 0x3f8a80: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a7c) {
            ctx->pc = 0x3F8A98u;
            goto label_3f8a98;
        }
    }
    ctx->pc = 0x3F8A84u;
    // 0x3f8a84: 0x25660004  addiu       $a2, $t3, 0x4
    ctx->pc = 0x3f8a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3f8a88: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a8c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8a90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8A90u;
    {
        const bool branch_taken_0x3f8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8A90u;
        // 0x3f8a94: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a90) {
            ctx->pc = 0x3F8AA0u;
            goto label_3f8aa0;
        }
    }
    ctx->pc = 0x3F8A98u;
label_3f8a98:
    // 0x3f8a98: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8a9c: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8aa0:
    // 0x3f8aa0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8aa4: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8aa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8aa8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8aac: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8ab0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f8ab4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f8ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8ab8: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8AB8u;
    {
        const bool branch_taken_0x3f8ab8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8AB8u;
        // 0x3f8abc: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ab8) {
            ctx->pc = 0x3F8AD4u;
            goto label_3f8ad4;
        }
    }
    ctx->pc = 0x3F8AC0u;
    // 0x3f8ac0: 0x25660004  addiu       $a2, $t3, 0x4
    ctx->pc = 0x3f8ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3f8ac4: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ac8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8acc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8ACCu;
    {
        const bool branch_taken_0x3f8acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8ACCu;
        // 0x3f8ad0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8acc) {
            ctx->pc = 0x3F8ADCu;
            goto label_3f8adc;
        }
    }
    ctx->pc = 0x3F8AD4u;
label_3f8ad4:
    // 0x3f8ad4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8ad8: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8adc:
    // 0x3f8adc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8ae0: 0xcd1807  srav        $v1, $t5, $a2
    ctx->pc = 0x3f8ae0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x3f8ae4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f8ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f8ae8: 0xac2004  sllv        $a0, $t4, $a1
    ctx->pc = 0x3f8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f8aec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f8aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f8af0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f8af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f8af4: 0x14b00006  bne         $a1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8AF4u;
    {
        const bool branch_taken_0x3f8af4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8AF4u;
        // 0x3f8af8: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8af4) {
            ctx->pc = 0x3F8B10u;
            goto label_3f8b10;
        }
    }
    ctx->pc = 0x3F8AFCu;
    // 0x3f8afc: 0x25660004  addiu       $a2, $t3, 0x4
    ctx->pc = 0x3f8afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3f8b00: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x3f8b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f8b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f8b08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8B08u;
    {
        const bool branch_taken_0x3f8b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8B08u;
        // 0x3f8b0c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8b08) {
            ctx->pc = 0x3F8B18u;
            goto label_3f8b18;
        }
    }
    ctx->pc = 0x3F8B10u;
label_3f8b10:
    // 0x3f8b10: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f8b14: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x3f8b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_3f8b18:
    // 0x3f8b18: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x3f8b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x3f8b1c: 0x5520ffc3  bnel        $t1, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x3F8B1Cu;
    {
        const bool branch_taken_0x3f8b1c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8b1c) {
            ctx->pc = 0x3F8B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8B1Cu;
            // 0x3f8b20: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f8a2c;
        }
    }
    ctx->pc = 0x3F8B24u;
label_3f8b24:
    // 0x3f8b24: 0x16500003  bne         $s2, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8B24u;
    {
        const bool branch_taken_0x3f8b24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3F8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8B24u;
        // 0x3f8b28: 0x24e9021  addu        $s2, $s2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8b24) {
            ctx->pc = 0x3F8B34u;
            goto label_3f8b34;
        }
    }
    ctx->pc = 0x3F8B2Cu;
    // 0x3f8b2c: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x3f8b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b30: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f8b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3f8b34:
    // 0x3f8b34: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3f8b34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3f8b38: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3f8b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b3c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3f8b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f8b40: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x3F8B40u;
    {
        const bool branch_taken_0x3f8b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8b40) {
            ctx->pc = 0x3F8B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8B40u;
            // 0x3f8b44: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f8910;
        }
    }
    ctx->pc = 0x3F8B48u;
    // 0x3f8b48: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3F8B48u;
    {
        const bool branch_taken_0x3f8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8B48u;
        // 0x3f8b4c: 0xfed70000  sd          $s7, 0x0($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8b48) {
            ctx->pc = 0x3F8C94u;
            goto label_3f8c94;
        }
    }
    ctx->pc = 0x3F8B50u;
label_3f8b50:
    // 0x3f8b50: 0x92c50013  lbu         $a1, 0x13($s6)
    ctx->pc = 0x3f8b50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 19)));
    // 0x3f8b54: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3f8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3f8b58: 0x66e2ffff  daddiu      $v0, $s7, -0x1
    ctx->pc = 0x3f8b58u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294967295);
    // 0x3f8b5c: 0x64c3ffff  daddiu      $v1, $a2, -0x1
    ctx->pc = 0x3f8b5cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x3f8b60: 0x588c2  srl         $s1, $a1, 3
    ctx->pc = 0x3f8b60u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x3f8b64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f8b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f8b68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f8b68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f8b6c: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x3f8b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f8b70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f8b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f8b74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f8b74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f8b78: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x3f8b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3f8b7c: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x3f8b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3f8b80: 0x938021  addu        $s0, $a0, $s3
    ctx->pc = 0x3f8b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3f8b84: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x3f8b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3f8b88: 0x10c00041  beqz        $a2, . + 4 + (0x41 << 2)
    ctx->pc = 0x3F8B88u;
    {
        const bool branch_taken_0x3f8b88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8B88u;
        // 0x3f8b8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8b88) {
            ctx->pc = 0x3F8C90u;
            goto label_3f8c90;
        }
    }
    ctx->pc = 0x3F8B90u;
label_3f8b90:
    // 0x3f8b90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f8b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f8b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b9c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8B9Cu;
    SET_GPR_U32(ctx, 31, 0x3F8BA4u);
    ctx->pc = 0x3F8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8B9Cu;
    // 0x3f8ba0: 0x251a823  subu        $s5, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8B9Cu, 0x3F8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8BA4u;
label_3f8ba4:
    // 0x3f8ba4: 0x1a800036  blez        $s4, . + 4 + (0x36 << 2)
    ctx->pc = 0x3F8BA4u;
    {
        const bool branch_taken_0x3f8ba4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3F8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8BA4u;
        // 0x3f8ba8: 0x66730001  daddiu      $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ba4) {
            ctx->pc = 0x3F8C80u;
            goto label_3f8c80;
        }
    }
    ctx->pc = 0x3F8BACu;
    // 0x3f8bac: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3f8bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bb0: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3f8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x3f8bb4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3f8bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f8bb8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F8BB8u;
    {
        const bool branch_taken_0x3f8bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8BB8u;
        // 0x3f8bbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8bb8) {
            ctx->pc = 0x3F8C28u;
            goto label_3f8c28;
        }
    }
    ctx->pc = 0x3F8BC0u;
    // 0x3f8bc0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f8bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f8bc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3F8BC4u;
    {
        const bool branch_taken_0x3f8bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8BC4u;
        // 0x3f8bc8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8bc4) {
            ctx->pc = 0x3F8C00u;
            goto label_3f8c00;
        }
    }
    ctx->pc = 0x3F8BCCu;
    // 0x3f8bcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F8BCCu;
    {
        const bool branch_taken_0x3f8bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8BCCu;
        // 0x3f8bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8bcc) {
            ctx->pc = 0x3F8BE8u;
            goto label_3f8be8;
        }
    }
    ctx->pc = 0x3F8BD4u;
    // 0x3f8bd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f8bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f8bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bdc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8BDCu;
    SET_GPR_U32(ctx, 31, 0x3F8BE4u);
    ctx->pc = 0x3F8BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8BDCu;
    // 0x3f8be0: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8BDCu, 0x3F8BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8BE4u;
label_3f8be4:
    // 0x3f8be4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3f8be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3f8be8:
    // 0x3f8be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f8becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f8bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bf4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8BF4u;
    SET_GPR_U32(ctx, 31, 0x3F8BFCu);
    ctx->pc = 0x3F8BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8BF4u;
    // 0x3f8bf8: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8BF4u, 0x3F8BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8BFCu;
label_3f8bfc:
    // 0x3f8bfc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3f8bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3f8c00:
    // 0x3f8c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f8c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f8c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c0c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8C0Cu;
    SET_GPR_U32(ctx, 31, 0x3F8C14u);
    ctx->pc = 0x3F8C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C0Cu;
    // 0x3f8c10: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8C0Cu, 0x3F8C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C14u;
label_3f8c14:
    // 0x3f8c14: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3f8c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3f8c18: 0x5240001a  beql        $s2, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F8C18u;
    {
        const bool branch_taken_0x3f8c18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8c18) {
            ctx->pc = 0x3F8C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8C18u;
            // 0x3f8c1c: 0xdec20000  ld          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8C84u;
            goto label_3f8c84;
        }
    }
    ctx->pc = 0x3F8C20u;
    // 0x3f8c20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f8c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c24: 0x0  nop
    ctx->pc = 0x3f8c24u;
    // NOP
label_3f8c28:
    // 0x3f8c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f8c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c30: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8C30u;
    SET_GPR_U32(ctx, 31, 0x3F8C38u);
    ctx->pc = 0x3F8C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C30u;
    // 0x3f8c34: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8C30u, 0x3F8C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C38u;
label_3f8c38:
    // 0x3f8c38: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3f8c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3f8c3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f8c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f8c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c48: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8C48u;
    SET_GPR_U32(ctx, 31, 0x3F8C50u);
    ctx->pc = 0x3F8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C48u;
    // 0x3f8c4c: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8C48u, 0x3F8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C50u;
label_3f8c50:
    // 0x3f8c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f8c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f8c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c5c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8C5Cu;
    SET_GPR_U32(ctx, 31, 0x3F8C64u);
    ctx->pc = 0x3F8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C5Cu;
    // 0x3f8c60: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8C5Cu, 0x3F8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C64u;
label_3f8c64:
    // 0x3f8c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f8c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f8c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c70: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F8C70u;
    SET_GPR_U32(ctx, 31, 0x3F8C78u);
    ctx->pc = 0x3F8C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C70u;
    // 0x3f8c74: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F8C70u, 0x3F8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8C78u;
label_3f8c78:
    // 0x3f8c78: 0x1640ffeb  bnez        $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3F8C78u;
    {
        const bool branch_taken_0x3f8c78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8C78u;
        // 0x3f8c7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8c78) {
            ctx->pc = 0x3F8C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f8c28;
        }
    }
    ctx->pc = 0x3F8C80u;
label_3f8c80:
    // 0x3f8c80: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x3f8c80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_3f8c84:
    // 0x3f8c84: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3f8c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f8c88: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3F8C88u;
    {
        const bool branch_taken_0x3f8c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8C88u;
        // 0x3f8c8c: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8c88) {
            ctx->pc = 0x3F8B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f8b90;
        }
    }
    ctx->pc = 0x3F8C90u;
label_3f8c90:
    // 0x3f8c90: 0xfed70000  sd          $s7, 0x0($s6)
    ctx->pc = 0x3f8c90u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 23));
label_3f8c94:
    // 0x3f8c94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3f8c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8c98: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F8C98u;
    SET_GPR_U32(ctx, 31, 0x3F8CA0u);
    ctx->pc = 0x3F8C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8C98u;
    // 0x3f8c9c: 0x92c50013  lbu         $a1, 0x13($s6) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F8C98u, 0x3F8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8CA0u;
label_3f8ca0:
    // 0x3f8ca0: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3f8ca0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3f8ca4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3f8ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3f8ca8: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x3f8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
label_3f8cac:
    // 0x3f8cac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3f8cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f8cb0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3f8cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f8cb4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3f8cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f8cb8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3f8cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f8cbc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3f8cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f8cc0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3f8cc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f8cc4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3f8cc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f8cc8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3f8cc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f8ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f8cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f8cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F8CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8CD0u;
        // 0x3f8cd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F8CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F8CD8u;
}
